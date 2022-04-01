using UnityEngine;

using Uku.Redux;

using Zenject;

namespace flappybird
{
    public class GameScreenObserver : MonoBehaviour
    {
        [SerializeField] private GameScreen _gameScreen;
        private GameState _state;

        [Inject]
        private void Construct(IStore store)
        {
            _state = store.GetState<GameState>();
            Subscribe();
            Initialize();
        }

        private void OnDestroy() => Unsubscribe();

        private void Subscribe() =>_state.onStateChanged += OnStateChanged;
        
        private void Unsubscribe() => _state.onStateChanged -= OnStateChanged;

        private void Initialize() => gameObject.SetActive(_state.gameScreen == _gameScreen);

        private void OnStateChanged() => gameObject.SetActive(_state.gameScreen == _gameScreen);
        
    }
}