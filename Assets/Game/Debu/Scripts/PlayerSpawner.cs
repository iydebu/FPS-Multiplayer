using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using Photon.Pun;

public class PlayerSpawner : MonoBehaviour
{
    public static PlayerSpawner Instance;
    [SerializeField] private int respawnTime;
    [SerializeField] private GameObject DeathEffect;
    private GameObject player;
    [SerializeField] private Transform deathcamera;

    [SerializeField] GameObject playerPrefab;

    [Header("Audio")]
    [SerializeField] private AudioSource speaker;
    [SerializeField] private AudioClip death;
    [SerializeField] private AudioClip respawn;
    [SerializeField] private AudioClip kill;
    private void Awake()
    {
        Instance = this;
    }

    // Start is called before the first frame update
    void Start()
    {
        if (PhotonNetwork.IsConnected)
        {
            SpawnPlayer();
        }
    }

    public void SpawnPlayer()
    {
        Transform spawnPoint = SpawnManager.instance.GetSpawnPoint();
        player = PhotonNetwork.Instantiate(playerPrefab.name, spawnPoint.position, spawnPoint.rotation);
        speaker.PlayOneShot(respawn);
    }

    public void Die(string damager)
    {
        UIController.Instance.leaderboardPanel.SetActive(false);
        Camera.main.transform.position = deathcamera.position;
        Camera.main.transform.rotation = deathcamera.rotation;
        UIController.Instance.SetDieMessage("You Were Killed By  " + damager);
        UIController.Instance.ShowDiePanel();
        MatchManager.instance.UpdateStatsSent(PhotonNetwork.LocalPlayer.ActorNumber,1,1);
        StartCoroutine(DieCo());
    }

    private IEnumerator DieCo()
    {
        speaker.PlayOneShot(death);
        PhotonNetwork.Instantiate(DeathEffect.name, player.transform.position, Quaternion.identity);
        PhotonNetwork.Destroy(player);
        int count = 1;

        // Loop through the countdown
        while (count <= respawnTime)
        {
            // Update the UI Text with the current count
           UIController.Instance.SetRespawnText("Respawn in " + (respawnTime - count) + " Sec");

            // Wait for one second
            yield return new WaitForSeconds(1f);

            // Increment the count
            count++;
        }
        UIController.Instance.HideDiePanel();
        // Countdown complete
        SpawnPlayer();
    }

    public void PlayKill()
    {
        speaker.PlayOneShot(kill);
    }
}
