namespace Uku.Redux
{
    public abstract class BaseReducer<T> : IReducer where T : IState
    {
        public T state { get; }

        IState IReducer.state => state;

        public BaseReducer(T state) => this.state = state;

        public abstract bool Reduce(IAction action);
    }
}
