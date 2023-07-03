using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using ExitGames.Client.Photon;
using Photon.Realtime;

public class MatchManager : MonoBehaviourPunCallbacks, IOnEventCallback
{
    public static MatchManager instance;
    private void Awake()
    {
        instance = this;
    }

   
    public enum EventCodes: byte
    {
        NewPlayer,
        ListPlayers,
        UpdateStats
    }
    public EventCodes theEvent;

    public List<PlayerInfomation> playerList = new List<PlayerInfomation>();
    private int index;

    [SerializeField] private List<Leaderboard> leaderboardsPlayers = new List<Leaderboard>();

  

    // Start is called before the first frame update
    void Start()
    {
        if (PhotonNetwork.IsConnected)
        {
            NewPlayerSent(PhotonNetwork.NickName);
        }
    }


    public void ShowLeaderboard()
    {
        UIController.Instance.leaderboardPanel.SetActive(true);

        foreach(Leaderboard lp in leaderboardsPlayers)
        {
            Destroy(lp.gameObject);
            UIController.Instance.leaderboardPanel.transform.position += new Vector3(0, -25f, 0);
        }
        leaderboardsPlayers.Clear();

        UIController.Instance.leaderboardPlayerDisplay.gameObject.SetActive(false);

        List<PlayerInfomation> sortedPlayerList = SortPlayerList(playerList);

        foreach(PlayerInfomation player in sortedPlayerList)
        {
            Leaderboard newLeaderboardPlayer = Instantiate(UIController.Instance.leaderboardPlayerDisplay, UIController.Instance.leaderboardPlayerDisplay.transform.parent);
            newLeaderboardPlayer.SetPlayerInfo(player.name, player.kills, player.deaths);
            newLeaderboardPlayer.gameObject.SetActive(true);
            leaderboardsPlayers.Add(newLeaderboardPlayer);
            UIController.Instance.leaderboardPanel.transform.position += new Vector3(0, 25f, 0);
        }
    }

    private List<PlayerInfomation> SortPlayerList(List<PlayerInfomation> playerList)
    {
        List<PlayerInfomation> sorted = new List<PlayerInfomation>();
        while(sorted.Count < playerList.Count)
        {
            int highestKills = -1;
            PlayerInfomation selected = playerList[0];
            foreach(PlayerInfomation player in playerList)
            {
                if(!sorted.Contains(player))
                {
                    if(player.kills > highestKills)
                    {
                        selected = player;
                        highestKills = player.kills;
                    }
                }
            }
            sorted.Add(selected);
        }
        return sorted;
    }

    public void HideLeaderBoard()
    {
        UIController.Instance.leaderboardPanel.SetActive(false);
    }
    public void OnEvent(EventData photonEvent)
    {
        if(photonEvent.Code < 200)
        {
            EventCodes theEvent = (EventCodes)photonEvent.Code;
            object[] data = (object[])photonEvent.CustomData;

            Debug.Log("Received event " + theEvent);

            switch (theEvent)
            {
                case EventCodes.NewPlayer:
                    NewPlayerReceive(data);
                    break;
                case EventCodes.ListPlayers:
                    ListPlayerReceive(data);
                    break;
                case EventCodes.UpdateStats:
                    UpdateStatsReceive(data);
                    break;
            }
        }
    }

    public override void OnEnable()
    {
        PhotonNetwork.AddCallbackTarget(this);
    }

    public override void OnDisable()
    {
        PhotonNetwork.RemoveCallbackTarget(this);
    }

    public void NewPlayerSent(string username)
    {
        object[] package = new object[4];
        package[0] = username;
        package[1] = PhotonNetwork.LocalPlayer.ActorNumber;
        package[2] = 0;
        package[3] = 0;

        PhotonNetwork.RaiseEvent(
            (byte)EventCodes.NewPlayer,
            package,
            new RaiseEventOptions { Receivers = ReceiverGroup.MasterClient },
            new SendOptions { Reliability = true }
            );
    }

    public void NewPlayerReceive(object[] dataReceived)
    {
        PlayerInfomation player = new PlayerInfomation(
            (string)dataReceived[0],
            (int)dataReceived[1],
            (int)dataReceived[2],
            (int)dataReceived[3]
            );

        playerList.Add(player);
        ListPlayerSent();
    }

    public void ListPlayerSent()
    {
        object[] package = new object[playerList.Count];

        for(int i=0; i <playerList.Count; i++)
        {
            object[] piece = new object[4];
            piece[0] = playerList[i].name;
            piece[1] = playerList[i].id;
            piece[2] = playerList[i].kills;
            piece[3] = playerList[i].deaths;
            package[i] = piece;
        }

        PhotonNetwork.RaiseEvent(
           (byte)EventCodes.ListPlayers,
           package,
           new RaiseEventOptions { Receivers = ReceiverGroup.All },
           new SendOptions { Reliability = true }
           );
    }

    public void ListPlayerReceive(object[] dataReceived)
    {
        playerList.Clear();

        for(int i = 0; i < dataReceived.Length; i++)
        {
            object[] piece = (object[])dataReceived[i];
            PlayerInfomation player = new PlayerInfomation(
                (string)piece[0],
                (int)piece[1],
                (int)piece[2],
                (int)piece[3]
                );
            playerList.Add(player);

            if(PhotonNetwork.LocalPlayer.ActorNumber == player.id)
            {
                index = i;
            }
        }
    }

    public void UpdateStatsSent(int id, int stateToUpdate, int amountToChange)
    {
        object[] package = new object[] {
            id,
            stateToUpdate,
            amountToChange
        };
        PhotonNetwork.RaiseEvent(
          (byte)EventCodes.UpdateStats,
          package,
          new RaiseEventOptions { Receivers = ReceiverGroup.All },
          new SendOptions { Reliability = true }
          );
    }

    public void UpdateStatsReceive(object[] dataReceived)
    {
        int id = (int)dataReceived[0];
        int stateToUpdate = (int)dataReceived[1];
        int amountToChange = (int)dataReceived[2];

        for(int i=0; i < playerList.Count; i++)
        {
            if (playerList[i].id == id)
            {
                switch (stateToUpdate)
                {
                    case 0:
                        {
                            playerList[i].kills += amountToChange;
                            Debug.Log("Player " + playerList[i].name + " has " + playerList[i].kills + " kills");
                            if (i == index)
                            {
                                PlayerSpawner.Instance.PlayKill();
                            }
                            break;
                        }
                    case 1:
                        {
                            playerList[i].deaths += amountToChange;
                            Debug.Log("Player " + playerList[i].name + " has " + playerList[i].deaths + " deaths");
                            break;
                        }
                }

                if(i== index)
                {
                    UpdateStats();
                }

                if(UIController.Instance.leaderboardPanel.activeInHierarchy)
                {
                    ShowLeaderboard();
                }

                break;
            }
        }
    }

    void UpdateStats()
    {
        if(playerList.Count > index)
        {
            UIController.Instance.SetKills(playerList[index].kills);
            UIController.Instance.SetDeaths(playerList[index].deaths);
        }
        else
        {
            UIController.Instance.SetKills(0);
            UIController.Instance.SetDeaths(0);
        }
    }
}



[System.Serializable]
public class PlayerInfomation
{
    public string name;
    public int id,kills,deaths;

    public PlayerInfomation(string _name, int _id, int _kills, int _deaths)
    {
        name = _name;
        id = _id;
        kills = _kills;
        deaths = _deaths;
    }
}
