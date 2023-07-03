using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
public class Leaderboard : MonoBehaviour
{
    public TMP_Text name;
    public TMP_Text kills;
    public TMP_Text deaths;

    public void SetPlayerInfo(string name, int kills, int deaths)
    {
        this.name.text = name;
        this.kills.text = kills.ToString();
        this.deaths.text = deaths.ToString();
    }
}
