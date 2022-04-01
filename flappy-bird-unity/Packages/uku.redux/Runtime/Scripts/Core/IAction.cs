namespace Uku.Redux
{
    public interface IAction
    {

    }

    public interface IAction<T> : IAction
    {
        T payload { get; set; }
    }
}
