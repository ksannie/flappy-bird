namespace Uku.Redux
{
    public abstract class BaseAction<T> : IAction<T>
    {
        public T payload { get; set; }
    }
}
