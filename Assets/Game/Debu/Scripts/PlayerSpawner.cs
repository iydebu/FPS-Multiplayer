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

    [SerializeField] GameObject playerPrefab;
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
    }

    public void Die(string damager)
    {
        UIController.Instance.SetDieMessage("You Were Killed By  " + damager);
        UIController.Instance.ShowDiePanel();
        StartCoroutine(DieCo());
    }

    private IEnumerator DieCo()
    {
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
}
