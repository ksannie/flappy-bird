namespace Uku.Redux
{
    public interface IReducer
    {
        IState state { get; }
        bool Reduce(IAction action);
    }
}
