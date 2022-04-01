namespace Uku.Redux
{
    public abstract class StateBehaviour<T> : StoreBehaviour
        where T : class, IState
    {
        protected T _state { get; private set; }

        protected override void OnStoreAvailable()
        {
            _state = _store.GetState<T>();
        }
    }
}
