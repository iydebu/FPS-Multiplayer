using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    [Header("Components")]
    [SerializeField] private Transform viewPoint;
    [SerializeField] private CharacterController characterController;
    [SerializeField] private Camera Camera;
    [SerializeField] private Transform groundCheckPoint;
    [SerializeField] private LayerMask groundMask;

    [Header("Movements")]
    public float mouseSensitivity = 100f;
    [SerializeField] Vector2 mouseInput;
    [SerializeField] private float moveSpeed = 5f;
    [SerializeField] private float runningSpeed = 10f;
    [SerializeField] private float jumpForce = 12f;
    [SerializeField] private float gravityMod = 2.5f;


    //Local Variables
    private float verticalRotation;
    private Vector3 moveDirection, movement;
    private float activeSpeed;
    private bool isGrounded;

    // Start is called before the first frame update
    void Start()
    {
        Cursor.lockState = CursorLockMode.Locked;
        activeSpeed = moveSpeed;
        Camera = Camera.main;
    }

    // Update is called once per frame
    void Update()
    {
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

    private void LateUpdate()
    {
        Camera.transform.position = viewPoint.position;
        Camera.transform.rotation = viewPoint.rotation;
    }
}
