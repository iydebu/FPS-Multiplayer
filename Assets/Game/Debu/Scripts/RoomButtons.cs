using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Photon.Realtime;

public class RoomButtons : MonoBehaviour
{
    public string roomName;
    [SerializeField] private TMP_Text buttonText;
    private RoomInfo info;

    public void SetRoomInfo(RoomInfo roominfo)
    {
        info = roominfo;
        buttonText.text = info.Name;
        roomName = info.Name;
    }

    public void JoinRoomOnClick()
    {
        Launcher.Instance.JoinRoom(info);
    }
}
