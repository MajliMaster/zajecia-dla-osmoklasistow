using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerController : MonoBehaviour
{
    public Vector2 _jumpForce;
    public Rigidbody2D _rigidbody2D;

    private bool _gameOver;
    
    void Start()
    {
        Time.timeScale = 1;
    }
    
    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            if (_gameOver)
            {
                SceneManager.LoadScene("Game");
            }
            else
            {
                _rigidbody2D.AddForce(_jumpForce, ForceMode2D.Impulse);
            }
        }
    }

    private void OnCollisionEnter2D(Collision2D other)
    {
        if (other.collider.CompareTag("Pipes"))
        {
            Time.timeScale = 0;
            _gameOver = true;
        }
    }
}
