using System;
using UnityEngine;

namespace Uku.Redux
{
    public abstract class ScriptableState : ScriptableObject, IState
    {
        public event Action onStateChanged;

        public abstract IReducer CreateReducer();

        public virtual void SetChanged()
        {
            onStateChanged?.Invoke();
        }
    }
}
