using UnityEngine;

using Uku.Redux;

using Zenject;

namespace flappybird
{
    public class PipesUpdater : MonoBehaviour
    {

        private IStore _store;
        private PipesState _state;
        private bool isRunning;

        [Inject]
        private void Construct(IStore store)
        {
            _store = store;
            _state = _store.GetState<PipesState>();
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
                _store.Dispatch(new PipesUpdateAction { payload = Time.deltaTime });
                
            }
        }

    }
}
    