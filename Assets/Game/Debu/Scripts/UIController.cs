using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UIController : MonoBehaviour
{
    public static UIController Instance;

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
    private float currentHealth;
    private float targetHealth;

    public float maxHeat;
    public float heatTime;
    public bool isOverheated;
    private Color lerpedColor;

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
}
