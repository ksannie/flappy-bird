using UnityEngine;

using Uku.Redux;

using Zenject;

namespace flappybird
{
    public class TimerUpdater : MonoBehaviour
    {

        private IStore _store;
        private TimerState _state;
        private bool isRunning;

        [Inject]
        private void Construct(IStore store)
        {
            _store = store;
            _state = _store.GetState<TimerState>();
            Subscribe();
            Initialize();
        }

        private void OnDestroy() => Unsubscribe();

        private void Subscribe() => _state.onStateChanged += OnStateChanged;
        private void Unsubscribe() => _state.onStateChanged -= OnStateChanged;

        private void Initialize()
        {
            isRunning = _state.isRunning;
        }

        private void OnStateChanged()
        {
            isRunning = _state.isRunning;
        }

        private void Update()
        {
            if (isRunning)
            {
                _store.Dispatch(new TimerUpdateAction { payload = Time.deltaTime });
                
            }
        }

    }
}
    