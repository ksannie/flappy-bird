using UnityEngine;
using Zenject;

namespace Uku.Redux
{
    public abstract class BaseDispatcher : MonoBehaviour
    {
        protected abstract IAction action { get; }

        private IStore _store;
        [Inject] private void Construct(IStore store) => _store = store;

        public void Dispatch() => _store.Dispatch(action);
    }
}
