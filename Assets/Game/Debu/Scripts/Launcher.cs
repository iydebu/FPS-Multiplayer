using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Photon.Pun;
using Photon.Realtime;

public class Launcher : MonoBehaviourPunCallbacks
{
    // Singleton instance
    public static Launcher Instance;

    // Panels
    [Header("Panels")]
    [SerializeField] private GameObject loadingPanel;
    [SerializeField] private GameObject loginPanel;
    [SerializeField] private GameObject selectionPanel;
    [SerializeField] private GameObject createRoomPanel;
    [SerializeField] private GameObject roomPanel;
    [SerializeField] private GameObject warningPanel;
    [SerializeField] private GameObject findRoomPanel;

    // UI Components
    [Header("UI Components")]
    [SerializeField] private TMP_InputField playerNameInput;
    [SerializeField] private TMP_InputField roomNameInput;
    [SerializeField] private TMP_Text loadingText;
    [SerializeField] private TMP_Text warningText;
    [SerializeField] private TMP_Text roomNameText;
    [SerializeField] private Button startGameButton;
    [SerializeField] private Button quickJoinButton;

    // Other Variables
    [Header("Other")]
    [SerializeField] private RoomButtons theroomButton;
    [SerializeField] private PlayerInfo theplayerInfo;
    [SerializeField] private string gameSceneName;

    // Local Variables
    private List<RoomButtons> roombuttonlist = new List<RoomButtons>();
    private List<PlayerInfo> playerlist = new List<PlayerInfo>();

    private void Awake()
    {
        // Set up singleton instance
        Instance = this;
    }

    void Start()
    {
        // Initialize panels
        CloseAllPanels();
        loginPanel.SetActive(true);

#if !UNITY_EDITOR
quickJoinButton.gameObject.SetActive(false);
#endif
    }

    // Photon Callbacks

    public override void OnConnectedToMaster()
    {
        // Called when connected to Photon server
        loadingText.text = "Joining Lobby...";
        PhotonNetwork.JoinLobby();
        PhotonNetwork.AutomaticallySyncScene = true;
    }

    public override void OnJoinedLobby()
    {
        // Called when joined the lobby
        CloseAllPanels();
        selectionPanel.SetActive(true);
    }

    public override void OnJoinedRoom()
    {
        // Called when joined a room
        CloseAllPanels();
        roomNameText.text = "Room Name: " + PhotonNetwork.CurrentRoom.Name;
        roomPanel.SetActive(true);
        ListPlayers();
        startGameButton.gameObject.SetActive(PhotonNetwork.IsMasterClient);
    }

    public override void OnLeftRoom()
    {
        // Called when left the room
        CloseAllPanels();
        selectionPanel.SetActive(true);
    }

    public override void OnCreateRoomFailed(short returnCode, string message)
    {
        // Called when failed to create a room
        CloseAllPanels();
        createRoomPanel.SetActive(true);
        warningPanel.SetActive(true);
        warningText.text = "Failed to Create Room: " + message;
    }

    public override void OnRoomListUpdate(List<RoomInfo> roomList)
    {
        // Called when the room list is updated
        foreach (RoomInfo room in roomList)
        {
            // Check if the room button already exists in the list
            RoomButtons existingRoomButton = roombuttonlist.Find(button => button.roomName == room.Name);

            // If the room does not exist and is joinable, create a new room button
            if (existingRoomButton == null && room.PlayerCount < room.MaxPlayers && !room.RemovedFromList)
            {
                RoomButtons newRoomButton = Instantiate(theroomButton, theroomButton.transform.parent);
                newRoomButton.SetRoomInfo(room);
                newRoomButton.gameObject.SetActive(true);
                roombuttonlist.Add(newRoomButton);
            }

            // If the room exists and is no longer joinable, remove the room button
            if (existingRoomButton != null && (room.PlayerCount >= room.MaxPlayers || room.RemovedFromList))
            {
                roombuttonlist.Remove(existingRoomButton);
                Destroy(existingRoomButton.gameObject);
            }
        }
    }

    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        // Called when a new player enters the room
        PlayerInfo newPlayerInfo = Instantiate(theplayerInfo, theplayerInfo.transform.parent);
        newPlayerInfo.playerName = newPlayer.NickName;
        newPlayerInfo.SetPlayerInfo();
        newPlayerInfo.gameObject.SetActive(true);
        playerlist.Add(newPlayerInfo);
    }

    public override void OnPlayerLeftRoom(Player otherPlayer)
    {
        // Called when a player leaves the room
        ListPlayers();
    }

    public override void OnMasterClientSwitched(Player newMasterClient)
    {
        // Called when the master client is switched
        startGameButton.gameObject.SetActive(PhotonNetwork.IsMasterClient);
    }

    // UI Button Methods

    public void CreateRoom()
    {
        // Called when the create room button is clicked
        CloseAllPanels();
        createRoomPanel.SetActive(true);
    }

    public void BackToMain()
    {
        // Called when the back to main button is clicked
        CloseAllPanels();
        selectionPanel.SetActive(true);
    }

    public void WarningOkay()
    {
        // Called when the warning okay button is clicked
        warningPanel.SetActive(false);
    }

    public void Login()
    {
        // Called when the login button is clicked
        if (playerNameInput.text.Length > 0)
        {
            PhotonNetwork.LocalPlayer.NickName = playerNameInput.text;
            loginPanel.SetActive(false);
            loadingPanel.SetActive(true);
            loadingText.text = "Connecting to server...";
            PhotonNetwork.ConnectUsingSettings();
        }
        else
        {
            // Generate random name
            PhotonNetwork.LocalPlayer.NickName = "Player" + Random.Range(1000, 9999);
            loginPanel.SetActive(false);
            loadingPanel.SetActive(true);
            loadingText.text = "Connecting to server...";
            PhotonNetwork.ConnectUsingSettings();
        }
    }

    public void Create_Room()
    {
        // Called when the create room button is clicked in the create room panel
        if (!string.IsNullOrEmpty(roomNameInput.text))
        {
            RoomOptions roomOptions = new RoomOptions();
            roomOptions.MaxPlayers = 8;
            PhotonNetwork.CreateRoom(roomNameInput.text, roomOptions);
            CloseAllPanels();
            loadingText.text = "Creating Room...";
            loadingPanel.SetActive(true);
        }
        else
        {
            warningText.text = "Please enter room name";
            warningPanel.SetActive(true);
        }
    }

    public void LeaveRoom()
    {
        // Called when the leave room button is clicked
        CloseAllPanels();
        loadingText.text = "Leaving Room...";
        loadingPanel.SetActive(true);
        PhotonNetwork.LeaveRoom();
    }

    public void FindRoom()
    {
        // Called when the find room button is clicked
        CloseAllPanels();
        findRoomPanel.SetActive(true);
    }

    public void JoinRoom(RoomInfo info)
    {
        // Called when a room button is clicked to join the room
        CloseAllPanels();
        loadingText.text = "Joining Room...";
        loadingPanel.SetActive(true);
        PhotonNetwork.JoinRoom(info.Name);
    }

    public void QuitGame()
    {
        // Called when the quit game button is clicked
        Application.Quit();
    }

    public void StartGame()
    {
        // Called when the start game button is clicked
        PhotonNetwork.LoadLevel(gameSceneName);
    }

    public void QuickJoin()
    {
        PhotonNetwork.LocalPlayer.NickName = "Player" + Random.Range(1000, 9999);
        PhotonNetwork.ConnectUsingSettings();
        RoomOptions roomOptions = new RoomOptions();
        roomOptions.MaxPlayers = 8;
        PhotonNetwork.CreateRoom("Test", roomOptions);
        CloseAllPanels();
        loadingText.text = "Creating Room...";
        loadingPanel.SetActive(true);
    }

    // Helper Methods

    private void ListPlayers()
    {
        // Updates the player list UI
        foreach (PlayerInfo plr in playerlist)
        {
            Destroy(plr.gameObject);
        }
        playerlist.Clear();

        foreach (Player player in PhotonNetwork.PlayerList)
        {
            PlayerInfo newPlayerInfo = Instantiate(theplayerInfo, theplayerInfo.transform.parent);
            newPlayerInfo.playerName = player.NickName;
            newPlayerInfo.SetPlayerInfo();
            newPlayerInfo.gameObject.SetActive(true);
            playerlist.Add(newPlayerInfo);
        }
    }

    void CloseAllPanels()
    {
        // Closes all panels
        loadingPanel.SetActive(false);
        warningPanel.SetActive(false);
        loginPanel.SetActive(false);
        selectionPanel.SetActive(false);
        createRoomPanel.SetActive(false);
        roomPanel.SetActive(false);
        findRoomPanel.SetActive(false);
    }


}
