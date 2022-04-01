using System;

namespace Uku.Redux
{
    public delegate void Dispatcher(IAction action);
    public delegate Func<Dispatcher, Dispatcher> Middleware(IStore store);
}
