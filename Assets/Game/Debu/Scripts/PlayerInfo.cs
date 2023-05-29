using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class PlayerInfo : MonoBehaviour
{
    public string playerName;
    public bool isready;

    [Header("UI Components")]
    [SerializeField] private TMP_Text playerNameText;


    public void SetPlayerInfo()
    {
        playerNameText.text = playerName;
    }
}
