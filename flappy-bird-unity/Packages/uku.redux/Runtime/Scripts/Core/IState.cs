using System;

namespace Uku.Redux
{
    public interface IState
    {
        event Action onStateChanged;
        IReducer CreateReducer();
        void SetChanged();
    }
}
