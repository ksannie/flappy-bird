using UnityEngine;
using TMPro;

using Uku.Redux;

using Zenject;

namespace flappybird
{
    public class TimerObserver : MonoBehaviour
    {
        [SerializeField] TextMeshProUGUI timerText;

        private IStore _store;
        private TimerState _state;

        [Inject]
        private void Construct(IStore store)
        {
            _store = store;
            _state = store.GetState<TimerState>();
        }

        private void OnEnable()
        {
            timerText.text = _state.timer.ToString();
            Subscribe();
        }


        private void OnDisable() => Unsubscribe();

        private void Subscribe() => _state.onStateChanged += OnStateChanged;
        private void Unsubscribe() => _state.onStateChanged -= OnStateChanged;

        private void OnStateChanged()
        {
            timerText.text = ((int)_state.timer).ToString();
        }
    }
}