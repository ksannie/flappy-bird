namespace Uku.Redux
{
    public abstract class StoreObserver : StoreBehaviour
    {
        protected virtual void OnEnable() => Subscribe();
        protected virtual void OnDisable() => Unsubscribe();

        protected override void OnStoreAvailable()
        {
            Subscribe();
        }

        protected virtual void Subscribe()
        {
            if (_store == null)
            {
                return;
            }
            _store.onStoreChanged += OnStoreChanged;
        }

        protected virtual void Unsubscribe()
        {
            _store.onStoreChanged -= OnStoreChanged;
        }

        protected abstract void OnStoreChanged();
    }
}
