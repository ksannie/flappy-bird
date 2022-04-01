using System;

using UnityEngine;

using Uku.Redux;

namespace flappybird
{

    [CreateAssetMenu(fileName = "TimerState", menuName = "States/TimerState")]
    public class TimerState : ScriptableState
    {
        [NonSerialized] float _timer = 0f;
        [NonSerialized] bool _isRunning = false;

        public float timer => _timer;
        public bool isRunning => _isRunning;

        public override IReducer CreateReducer() => new TimerReducer(this);

        public void SetTimer(float value)
        {
            _timer = value;
        }

        public void SetIsRunning(bool value)
        {
            _isRunning = value;
        }
    }
}