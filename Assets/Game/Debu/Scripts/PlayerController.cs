using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class PlayerController : MonoBehaviourPunCallbacks
{
    [Header("Components")]
    [SerializeField] private Transform viewPoint;
    [SerializeField] private CharacterController characterController;
    [SerializeField] private Camera Camera;
    [SerializeField] private Transform groundCheckPoint;
    [SerializeField] private LayerMask groundMask;
    [SerializeField] private GameObject bulletImpact;
    [SerializeField] private GameObject bloodEffect;

    [Header("Movements")]
    public float mouseSensitivity = 100f;
    [SerializeField] Vector2 mouseInput;
    [SerializeField] private float moveSpeed = 5f;
    [SerializeField] private float runningSpeed = 10f;
    [SerializeField] private float jumpForce = 12f;
    [SerializeField] private float gravityMod = 2.5f;

    [Header("Shooting")]
    [SerializeField] private bool isAutomatic;
    [SerializeField] private string gunName;
    [SerializeField] private float firingRate = 0.1f;
    [SerializeField] private float muzzleFlashDuration = 0.05f;
    [SerializeField] private float maxHeat = 10f;
    [SerializeField] private float heatPerShot = 1f;
    [SerializeField] private float coolRate = 4f;
    [SerializeField] private float overheatCoolRate = 5f;
    [SerializeField] private Guns[] guns;

    [Header("Player Info")]
    [SerializeField] private int maxHealth = 100;



    // Local Variables
    private float verticalRotation;
    private Vector3 moveDirection, movement;
    private float activeSpeed;
    private bool isGrounded;
    private float firingTime;
    private float heatTime;
    private bool isOverheated;
    private int currentGunIndex;
    private float muzzleFlashTime;
    private int currentHealth;

    // Start is called before the first frame update
    void Start()
    {
        Cursor.lockState = CursorLockMode.Locked;
        activeSpeed = moveSpeed;
        Camera = Camera.main;

        // Intilization of variables
        muzzleFlashTime = muzzleFlashDuration;
        firingTime = firingRate;
        heatTime = 0;
        isOverheated = false;
        currentGunIndex = 1;
        SwitchGuns();
        currentHealth = maxHealth;
        UIController.Instance.UpdateHealthUI(currentHealth);

        //UI
        UIController.Instance.maxHeat = maxHeat;

    }

    // Update is called once per frame
    void Update()
    {
        if (photonView.IsMine)
        {
            //Update UI
            UIController.Instance.UpdateHeatUI(heatTime);

            // Look around
            HandleLookAround();

            // Movement
            HandleMovement();

            // Jump
            HandleJump();

            // Apply gravity
            ApplyGravity();

            // Move the character controller
            MoveCharacterController();

            // Lock and unlock cursor
            HandleCursorLock();

            // Shooting
            HandleShooting();

            // Switching guns
            HandleSwitchingGuns();
        }
    }

    // Function to handle switching guns
    void HandleSwitchingGuns()
    {
        if (Input.GetKeyDown(KeyCode.E))
        {
            currentGunIndex++;
            if (currentGunIndex >= guns.Length)
            {
                currentGunIndex = 0;
            }
        }
        else if (Input.GetKeyDown(KeyCode.Q))
        {
            currentGunIndex--;
            if (currentGunIndex < 0)
            {
                currentGunIndex = guns.Length - 1;
            }
        }
        SwitchGuns();
    }


    // Function to handle shooting
    void HandleShooting()
    {
        if (guns[currentGunIndex].muzzleFlash.activeInHierarchy)
        {
            muzzleFlashTime -= Time.deltaTime;
            if (muzzleFlashTime <= 0)
            {
                guns[currentGunIndex].muzzleFlash.SetActive(false);
            }
        }

        if (heatTime < 0)
        {
            heatTime = 0;
        }

        if (!isOverheated)
        {

            if (Input.GetMouseButtonDown(0) && !isAutomatic)
            {           
                    Shoot();
            }

            if (Input.GetMouseButton(0) && isAutomatic)
            {
                firingTime -= Time.deltaTime;
                if (firingTime <= 0)
                {
                    Shoot();
                }
            }

            heatTime -= coolRate * Time.deltaTime;

            if (heatTime >= maxHeat)
            {
                heatTime = maxHeat;
                isOverheated = true;
                UIController.Instance.isOverheated = true;
            }
        }
        else
        {
            heatTime -= overheatCoolRate * Time.deltaTime;
            if (heatTime <= 0)
            {
                heatTime = 0;
                isOverheated = false;
                UIController.Instance.isOverheated = false;
            }
        }
    }

    // Function to handle looking around
    void HandleLookAround()
    {
        mouseInput = new Vector2(Input.GetAxis("Mouse X"), Input.GetAxis("Mouse Y")) * mouseSensitivity * Time.deltaTime;
        transform.rotation = Quaternion.Euler(transform.rotation.eulerAngles.x, transform.rotation.eulerAngles.y + mouseInput.x, transform.rotation.eulerAngles.z);
        verticalRotation -= mouseInput.y;
        verticalRotation = Mathf.Clamp(verticalRotation, -60f, 60f);
        viewPoint.rotation = Quaternion.Euler(verticalRotation, viewPoint.rotation.eulerAngles.y, viewPoint.rotation.eulerAngles.z);
    }

    // Function to handle character movement
    void HandleMovement()
    {
        if (Input.GetKey(KeyCode.LeftShift))
        {
            activeSpeed = runningSpeed;
        }
        else
        {
            activeSpeed = moveSpeed;
        }

        moveDirection = new Vector3(Input.GetAxisRaw("Horizontal"), 0f, Input.GetAxisRaw("Vertical"));

        float yStore = movement.y;
        movement = ((transform.forward * moveDirection.z) + (transform.right * moveDirection.x)).normalized * activeSpeed;
        movement.y = yStore;

        if (characterController.isGrounded)
        {
            movement.y = 0f;
        }

        isGrounded = Physics.Raycast(groundCheckPoint.position, Vector3.down, .25f, groundMask);
    }

    // Function to handle jumping
    void HandleJump()
    {
        if (Input.GetButtonDown("Jump") && isGrounded)
        {
            movement.y = jumpForce;
        }
    }

    // Function to apply gravity
    void ApplyGravity()
    {
        movement.y += Physics.gravity.y * Time.deltaTime * gravityMod;
    }

    // Function to move the character controller
    void MoveCharacterController()
    {
        characterController.Move(movement * Time.deltaTime);
    }

    // Function to handle cursor lock and unlock
    void HandleCursorLock()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Cursor.lockState = CursorLockMode.None;
        }
        else if (Cursor.lockState == CursorLockMode.None)
        {
            if (Input.GetMouseButtonDown(0))
            {
                Cursor.lockState = CursorLockMode.Locked;
            }
        }
    }

    void Shoot()
    {
        Ray ray = Camera.ViewportPointToRay(new Vector3(0.5f, 0.5f, 0f));
        if (Physics.Raycast(ray, out RaycastHit hit))
        {
            if(hit.collider.gameObject.tag == "Player")
            {
                Debug.Log("Working");
                Debug.Log("Hit: " + hit.collider.gameObject.GetPhotonView().Owner.NickName);
                PhotonNetwork.Instantiate(bloodEffect.name, hit.point, Quaternion.identity);

                hit.collider.gameObject.GetPhotonView().RPC("DealDamage", RpcTarget.All, photonView.Owner.NickName, guns[currentGunIndex].damage);
            }
            else if (!(hit.collider.gameObject.tag == "invisible"))
            {
                GameObject impact = Instantiate(bulletImpact, hit.point + (hit.normal * 0.002f), Quaternion.LookRotation(hit.normal));
                Destroy(impact, 5f);
            }

        }
        guns[currentGunIndex].muzzleFlash.SetActive(true);
        muzzleFlashTime = muzzleFlashDuration;
        firingTime = firingRate;
        heatTime += heatPerShot;
    }

    [PunRPC]
    public void DealDamage(string damager, int damageAmount)
    {
        TakeDamage(damager,damageAmount);
    }

    public void TakeDamage(string damager, int damageAmount)
    {
        //Debug.Log(photonView.Owner.NickName + "has been killed by " + damager);
        if (photonView.IsMine)
        {
            currentHealth -= damageAmount;
            if (currentHealth <= 0)
            {
                currentHealth = 0;
                PlayerSpawner.Instance.Die(damager);
            }
            UIController.Instance.UpdateHealthUI(currentHealth);
        }
    }

    void SwitchGuns()
    {
        foreach (Guns gun in guns)
        {
            gun.gameObject.SetActive(false);
        }
        guns[currentGunIndex].gameObject.SetActive(true);
        isAutomatic = guns[currentGunIndex].isAutomatic;
        firingRate = guns[currentGunIndex].firingRate;
        heatPerShot = guns[currentGunIndex].heatPerShot;
        gunName = guns[currentGunIndex].gunName;
        UIController.Instance.SetGunName(gunName);
    }

    private void LateUpdate()
    {
        if (photonView.IsMine)
        {
            Camera.transform.position = viewPoint.position;
            Camera.transform.rotation = viewPoint.rotation;
        }
    }
    public float GetMaxHeat()
    {
        return maxHeat;
    }

    public float GetHeatTime()
    {
        return heatTime;
    }

    public bool IsOverheated()
    {
        return isOverheated;
    }

}
