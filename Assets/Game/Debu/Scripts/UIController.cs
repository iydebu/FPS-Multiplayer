using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UIController : MonoBehaviour
{
    [SerializeField] private PlayerController playerController;
    [SerializeField] private Slider heatSlide;
    [SerializeField] private Image heatFill;
    [SerializeField] private Color[] colors;
    [SerializeField] private Color overheatColor;
    [SerializeField] private TMP_Text gunState;


    private float maxHeat;
    private float heatTime;
    private bool isOverheated;
    private Color lerpedColor;

    private void Start()
    {
        maxHeat = playerController.GetMaxHeat();
        heatTime = 0;
        isOverheated = false;
    }

    private void Update()
    {
        // Update the heat UI every frame
        UpdateHeatUI(playerController.GetHeatTime());
    }

    public void UpdateHeatUI(float heatValue)
    {
        isOverheated = playerController.IsOverheated();
        heatSlide.value = 1 - (heatValue / maxHeat);
        heatTime = heatValue;

        if (!isOverheated)
        {
            gunState.text = playerController.GetGunName();
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

}
