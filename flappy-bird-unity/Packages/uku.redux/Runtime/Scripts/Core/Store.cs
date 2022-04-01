using System;
using System.Collections.Generic;
using System.Linq;

namespace Uku.Redux
{
    public class Store : IStore
    {
        private readonly Dispatcher _dispatcher;
        private readonly IEnumerable<IReducer> _reducers;

        public IEnumerable<IState> states => _reducers.Select(r => r.state);

        public event Action onStoreChanged;

        public Store(IEnumerable<IReducer> reducers, params Middleware[] middlewares)
        {
            _reducers = reducers;
            _dispatcher = ApplyMiddlewares(middlewares);
        }

        public void Dispatch(IAction action)
        {
            _dispatcher(action);
        }

        public T GetState<T>() where T : class, IState
        {
            var state = states.First(s => s is T) as T;
            return state;
        }

        private Dispatcher ApplyMiddlewares(params Middleware[] middlewares)
        {
            Dispatcher dispatcher = CallReducers;
            foreach (var middleware in middlewares)
            {
                dispatcher = middleware(this)(dispatcher);
            }
            return dispatcher;
        }

        private void CallReducers(IAction action)
        {
            var isReduced = false;
            foreach (var reducer in _reducers)
            {
                if (reducer.Reduce(action))
                {
                    isReduced = true;
                }
            }

            if (isReduced)
            {
                onStoreChanged?.Invoke();
            }
        }
    }
}
