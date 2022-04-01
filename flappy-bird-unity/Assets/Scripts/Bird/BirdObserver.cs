using UnityEngine;

using Uku.Redux;

using Zenject;

namespace flappybird
{
    public class BirdObserver : MonoBehaviour
    {

        private IStore _store;
        private BirdState _state;

        [Inject]
        private void Construct(IStore store)
        {
            _store = store;
            _state = store.GetState<BirdState>();
            Initialize();
            Subscribe();
        }

        private void OnDestroy() => Unsubscribe();

        private void Subscribe() => _state.onStateChanged += OnStateChanged;
        private void Unsubscribe() => _state.onStateChanged -= OnStateChanged;

        public void Initialize()
        {
            transform.position = _state.position;
        }


        private void OnStateChanged()
        {
            transform.position = _state.position;
        }
    }
}