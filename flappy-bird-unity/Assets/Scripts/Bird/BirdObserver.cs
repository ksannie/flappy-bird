using UnityEngine;

using Uku.Redux;

using Zenject;

namespace flappybird
{
    public class BirdObserver : MonoBehaviour
    {
        [SerializeField] private Rigidbody2D _rigidbody;

        private IStore _store;
        private BirdState _state;

        [Inject]
        private void Construct(IStore store)
        {
            _store = store;
            _state = store.GetState<BirdState>();
            Subscribe();
            Initialize();

        }
        private void OnDestroy() => Unsubscribe();

        private void Subscribe() => _state.onStateChanged += OnStateChanged;
        private void Unsubscribe() => _state.onStateChanged -= OnStateChanged;

        private void Initialize()
        {
            _rigidbody.constraints = _state.isInFreeFall? RigidbodyConstraints2D.FreezePositionX : RigidbodyConstraints2D.FreezeAll;
            transform.position = _state.position;
        }

        private void OnStateChanged()
        { 
            _rigidbody.constraints = _state.isInFreeFall ? RigidbodyConstraints2D.FreezePositionX : RigidbodyConstraints2D.FreezeAll;

            if (!_state.isInFreeFall)
            {
                transform.position = _state.initialPosition;
            }
            else
            {
                transform.position = _state.position;
            }

            if (_state.jumpOrdered)
            {
            _rigidbody.velocity = Vector2.up * _state.jumpStrength;
            _store.Dispatch(new JumpDoneAction());
            }
        }

        private void Update()
        {
            if (_state.isInFreeFall)
            {
                _store.Dispatch(new BirdPositionAction { payload = transform.position });
            }
       
        }
    }
}
