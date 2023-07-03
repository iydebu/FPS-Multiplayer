using Photon.Pun;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;

public class UIController : MonoBehaviourPunCallbacks
{
    public static UIController Instance;


    [Header("Stats")]
    [SerializeField] private TMP_Text killsText;
    [SerializeField] private TMP_Text deathsText;

    [Header("Slider")]
    [SerializeField] private Slider heatSlide;

    [Header("Heat")]
    [SerializeField] private Image heatFill;
    [SerializeField] private Color[] colors; // Color gradient for heat levels
    [SerializeField] private Color overheatColor; // Color for overheat state

    [Header("Gun State")]
    [SerializeField] private TMP_Text gunState;
    [SerializeField] private string gunName;

    [Header("Death")]
    [SerializeField] private TMP_Text dieMessage;
    [SerializeField] private GameObject diePanel;

    [Header("Respawn")]
    [SerializeField] private TMP_Text respawnText;

    [Header("Health")]
    [SerializeField] private Slider healthSlider;
    [SerializeField] private TMP_Text healthText;
    [SerializeField] private float lerpSpeed = 5f;

    [Header("Voice")]
    [SerializeField] private TMP_Text voiceText;

    [Header("Panels")]
    [SerializeField] private GameObject pausePanel;
    [SerializeField] private GameObject loadingPanel;

    [Header("LeaderBoard")]
    public GameObject leaderboardPanel;
    public Leaderboard leaderboardPlayerDisplay;

    [Header("Audio")]
    [SerializeField] private AudioSource speaker;
    [SerializeField] private AudioClip click;
    [SerializeField] private AudioClip leave;


    [Header("Other")]
    [SerializeField] private TMP_Text loadingText;
    [SerializeField] private TMP_InputField senstivity;


    private float currentHealth;
    private float targetHealth;

    public float maxHeat;
    public float heatTime;
    public bool isOverheated;
    private Color lerpedColor;
    private int senstivityValue;
    private Coroutine co;

    private void Awake()
    {
        Instance = this;
    }

    private void Start()
    {
        heatTime = 0;
        isOverheated = false;
        currentHealth = 0;
    }

    // Update the heat UI based on the heat value
    public void UpdateHeatUI(float heatValue)
    {
        heatSlide.value = 1 - (heatValue / maxHeat);
        heatTime = heatValue;

        if (!isOverheated)
        {
            gunState.text = gunName;

            int index = Mathf.Clamp(Mathf.FloorToInt((heatTime / maxHeat) * (colors.Length - 1)), 0, colors.Length - 1);

            // Calculate the t value for lerping between colors
            float t = Mathf.InverseLerp((float)index / (colors.Length - 1), (float)(index + 1) / (colors.Length - 1), heatTime / maxHeat);

            // Lerping the color
            Color lerpedColor = Color.Lerp(colors[index], colors[index + 1], t);
            heatFill.color = lerpedColor;
        }
        else
        {
            gunState.text = "OVERHEATED";
            heatFill.color = overheatColor;
        }
    }

    //Set the gun name
    public void SetGunName(string name)
    {
        gunName = name;
    }

    // Set the message shown when the player dies
    public void SetDieMessage(string message)
    {
        dieMessage.text = message;
    }

    // Set the text for respawn information
    public void SetRespawnText(string text)
    {
        respawnText.text = text;
    }

    // Show the death panel
    public void ShowDiePanel()
    {
        diePanel.SetActive(true);
    }

    // Hide the death panel
    public void HideDiePanel()
    {
        diePanel.SetActive(false);
    }

    // Update the health UI based on the health value

    // Update the health UI immediately
    public void UpdateHealthUI(float healthValue)
    {
        targetHealth = healthValue;
        healthText.text = Mathf.RoundToInt(targetHealth).ToString() + ":HP";

        UpdateHealthBar();
    }

    // Update the health UI with lerping over time
    public void LerpHealthUI(float healthValue)
    {
        targetHealth = healthValue;
    }

    private void Update()
    {
        // Lerping the health UI over time
        currentHealth = Mathf.Lerp(currentHealth, targetHealth, lerpSpeed * Time.deltaTime);

        UpdateHealthBar();
    }

    private void UpdateHealthBar()
    {
        healthSlider.value = currentHealth;
    }

    public void SetVoiceText(string text)
    {
        voiceText.text = text;
    }

    public void ShowPauseMenu()
    {
        pausePanel.SetActive(true);
    }

    public void LeaveRoom()
    {
        if (co == null)
        {
          co =  StartCoroutine(Leave());
        }
    }

    public override void OnLeftRoom()
    {
        SceneManager.LoadScene(0);
    }

    public void HidePauseMenu()
    {
        pausePanel.SetActive(false);
    }

    public void SetSenstivity()
    {
       senstivityValue = int.Parse(senstivity.text);
    }

    public int GetSenstivity()
    {
        return senstivityValue;
    }

    public void SetKills(int kills)
    {
        killsText.text = "Kills: " + kills.ToString();
    }

    public void SetDeaths(int deaths)
    {
        deathsText.text = "Deaths: " + deaths.ToString();
    }

    public void PlayClick()
    {
        speaker.PlayOneShot(click);
    }

    IEnumerator Leave()
    {
        speaker.PlayOneShot(leave);
        yield return new WaitForSeconds(2f);
        if (PhotonNetwork.InRoom)
        {
            loadingText.text = "Leaving Room...";
            loadingPanel.SetActive(true);
            PhotonNetwork.LeaveRoom();
        }
    }
}
