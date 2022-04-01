namespace Uku.Redux
{
    public abstract class StateObserver<T> : StateBehaviour<T>
        where T : class, IState
    {
        protected virtual void OnEnable() => Subscribe();
        protected virtual void OnDisable() => Unsubscribe();

        protected override void OnStoreAvailable()
        {
            base.OnStoreAvailable();
            Subscribe();
        }

        protected virtual void Subscribe()
        {
            if (_store == null)
            {
                return;
            }
            _state.onStateChanged += OnStateChanged;
        }

        protected virtual void Unsubscribe()
        {
            _state.onStateChanged -= OnStateChanged;
        }

        protected abstract void OnStateChanged();
    }
}
