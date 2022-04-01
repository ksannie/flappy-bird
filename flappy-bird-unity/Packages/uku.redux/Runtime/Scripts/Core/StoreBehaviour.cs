using UnityEngine;
using Zenject;

namespace Uku.Redux
{
    public abstract class StoreBehaviour : MonoBehaviour
    {
        protected IStore _store { get; private set; }

        [Inject]
        private void Construct(IStore store)
        {
            _store = store;
            OnStoreAvailable();
        }

        protected abstract void OnStoreAvailable();
    }
}
