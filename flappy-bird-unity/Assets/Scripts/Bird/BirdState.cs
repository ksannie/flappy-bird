using System;
using Uku.Redux;
using UnityEngine;

namespace flappybird
{

    [CreateAssetMenu(fileName = "BirdState", menuName = "States/BirdState")]
    public class BirdState : ScriptableState
    {
      
        [SerializeField] private Vector3 _initialPosition = Vector3.zero;
        [SerializeField] private float _jumpStrength = 12f;

        [NonSerialized] private bool _isInFreeFall = false;
        [NonSerialized] private Vector3 _position = new Vector3();
        [NonSerialized] private bool _jumpOrdered = false;

        public Vector3 initialPosition => _initialPosition;
        public float jumpStrength => _jumpStrength;

        public bool isInFreeFall => _isInFreeFall;
        public Vector3 position => _position;
        public bool jumpOrdered => _jumpOrdered;



        public override IReducer CreateReducer() => new BirdReducer(this);

        public void SetInFreeFall(bool value)
        {
            _isInFreeFall = value;
        }

        public void SetPosition(Vector3 position)
        {
            _position = position;
        }

        public void SetJumpOrdered(bool value)
        {
            _jumpOrdered = value;
        }
    }
}