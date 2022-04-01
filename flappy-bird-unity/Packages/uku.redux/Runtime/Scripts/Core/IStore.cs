using System;
using System.Collections.Generic;

namespace Uku.Redux
{
    public interface IStore
    {
        IEnumerable<IState> states { get; }

        void Dispatch(IAction action);
        T GetState<T>() where T : class, IState;

        event Action onStoreChanged;
    }
}
