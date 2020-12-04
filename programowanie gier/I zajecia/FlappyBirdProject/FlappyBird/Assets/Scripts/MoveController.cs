using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveController : MonoBehaviour
{
    public Transform _transform;
    public float _speed;
    public Transform _spawnPoint;
    public Transform _destroyPoint;

    public float _minY;
    public float _maxY;

    
    // Update is called once per frame
    void Update()
    {
        if (_transform.position.x < _destroyPoint.position.x)
        {
            _transform.position = new Vector3(_spawnPoint.position.x, _spawnPoint.position.y + Random.Range(_minY, _maxY), _spawnPoint.position.z);
        }
        
        _transform.position = new Vector3(_transform.position.x + _speed * Time.deltaTime, _transform.position.y, _transform.position.z);
    }
}
