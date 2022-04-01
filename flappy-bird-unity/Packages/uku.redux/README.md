# Uku Redux

A [ReduxJS](https://redux.js.org/) implementation for Unity3d.

## Table of content

- [Uku Redux](#uku-redux)
  - [Table of content](#table-of-content)
  - [Installation](#installation)
  - [Setup](#setup)
  - [Getting Started](#getting-started)
    - [Creating a state and its reducer](#creating-a-state-and-its-reducer)
    - [Creating actions and reducing them](#creating-actions-and-reducing-them)
    - [Getting the store and subscribing to updates](#getting-the-store-and-subscribing-to-updates)
    - [Dispatching actions](#dispatching-actions)
  - [Delegates and middleware](#delegates-and-middleware)
    - [Creating middleware](#creating-middleware)
    - [Registering middleware](#registering-middleware)

## Installation

You need to install the [latest version of Zenject](https://github.com/modesttree/Zenject/releases/tag/9.2.0) too. To install the packages, put the containing folders (`Uku.Redux` and `Zenject`) in your project's `Packages/` folder, Unity should detect it automatically as a local package. The namespace for all classes is `Uku.Redux`.

## Setup

We use Zenject to have a global context, this means a few steps need to be followed on a new project:

- create a `UkuReduxZenjectInstaller` scriptable object from the Create Asset menu (`Uku/Redux/Zenject/UkuReduxZenjectInstaller`);
- create a `ProjectContext` prefab from the Create Asset menu in your `Resources/` folder (`Zenject/Project Context`);
- in the `ProjectContext` prefab and component, add the `UkuReduxZenjectInstaller` to the scriptable object installer list;
- in every scene that you create, add a `SceneContext` through the Create Gameobject menu (`Zenject/Scene Context`)

## Getting Started

### Creating a state and its reducer

States contain data that can be accessed by store observers and modified by reducers through actions. States implement the `IState` interface, which gives the base API for all states. It is recommended to inherit from abstract class `ScriptableState` to have your state as a configurable scriptable object.

Reducers are functions in Redux which take actions and a state, and return a new version of the state as a result. In our implementation, reducers are classes that implement the `IReducer` interface, and is responsible for holding and modifying the runtime state. We have voluntarily decided not to implement the notion of last state and new state. It is recommended to inherit from `BaseReducer` to bootstrap the creation of your reducer.

```csharp
using Uku.Redux;

// you probably want a way to create one in your project
public class MyState : ScriptableState
{
    // you can store anything a c# object can store here
    [SerializeField] private string _myValue;

    // create readonly public accessors to use your data in your logic
    public string myValue => _myValue;

    // the state is responsible for spawning the reducer that can modify it
    public override IReducer CreateReducer() => new MyReducer(this);
}

public class MyReducer : BaseReducer<MyState>
{
    public MyReducer(MyState state) : base(state)
    {
    }

    // this method is called when an action is dispatched. This is where you modify your state
    public override bool Reduce(IAction action) => false;
}
```

To add a state to the store, add it to the initial state data list in the `UkuReduxZenjectInstaller`. As the name suggests, if your fields are serialized, they are used as the default state value. That said, remember that scriptable objects are saved on runtime in the Editor, so you probably don't want to serialize runtime values (use `NonSerialized` explicitely).

### Creating actions and reducing them

Actions are parameterized objects that are dispatched to the state and reduced (IE apply modifications to the state) by the reducer. All actions implement the `IAction` interface, with the `BaseAction<T>` implementation being a generic variant which posesses a payload, which is the parameterized data.

```csharp
// this action takes no parameter
public class MyAction : IAction
{

}

// this action takes a string parameter
// it has a payload property of type string
public class MyStringAction : BaseAction<string>
{

}
```

To respond to these actions, you need to modify your reducer's `Reduce` method and add setters to your state:

```csharp
public class MyReducer : BaseReducer<MyState>
{
    // ...

    // if the method returns true, observers will be signaled that an update of the state has occured
    public override bool Reduce(IAction action)
    {
        return action switch
        {
            MyAction myAction => ApplyMyAction(myAction),
            MyStringAction myStringAction => ApplyMyStringAction(myStringAction),
            _ => false
        };
    }

    private bool ApplyMyAction(MyAction action)
    {
        // you can access the state in the reducer
        Debug.Log(state.myValue);
        return true;
    }

    private bool ApplyMyStringAction(MyStringAction myStringAction)
    {
        // it is recommended to let the state handle the usage of the action to modify itself
        state.ApplyMyStringAction(myStringAction);
        return true;
    }
}

public class MyState : IState
{
    // ...

    public void ApplyMyStringAction(MyStringAction action)
    {
        _myValue = action.payload;
    }
}
```

### Getting the store and subscribing to updates

Getting the store requires a minimal amount of Zenject injection. For runtime spawning elements, you want to add a `ZenAutoInjecter` to your gameobject and set it to search only the project context as we don't use the scene context.

We use this method injection form in any `MonoBehaviour` that requires the store or a specific state:

```csharp
using Zenject;

public class MyBehaviour : MonoBehaviour
{
    private IStore _store;
    private MyState _state;

    [Inject]
    private void Construct(IStore store)
    {
        _store = store;
        _state = store.GetState<MyState>();

        // we can subscribe from here or from OnEnable when the gameobject is toggled on and off
        Subscribe();
    }

    private void OnEnable() => Subscribe();
    private void OnDisable() => Unsubscribe(); // never forget to unsubscribe

    private void Subscribe()
    {
        // OnEnable can be called before injection occurs
        // so a security check is required before subscribing
        if(_store == null)
        {
            return;
        }
        // subscribe to the store when an action is reduced by any state
        _store.onStoreChanged += OnStoreChanged;

        // subscribe to a specific state when an action is reduced on it
        _state.onStateChanged += OnStateChanged;
    }

    private void Unsubscribe()
    {
        _store.onStoreChanged -= OnStoreChanged;
        _state.onStateChanged -= OnStateChanged;
    }

    private void OnStoreChanged()
    {
        // any action has been reduced by any state
        Debug.Log(_store.GetState<SomeOtherState>().someOtherValue);
    }

    private void OnStateChanged()
    {
        // my state has reduced an action
        Debug.Log(_state.myValue);
    }
}
```

### Dispatching actions

Now that you have a functional redux loop, you need something to call it from the Unity3D scene. These are called dispatchers and inherit from `BaseDispatcher`, a component you can add to your interactable gameobjects:

```csharp
public class MyDispatcher : BaseDispatcher
{
    // use SerializeReference to assign your action in the editor
    [SerializeReference] private IAction _action;

    // if your action has a payload, this is the script that will configure it
    [SerializeField] private string _payload;

    // always send a new action, these objects are meant to be throwable
    protected override IAction action => _action switch
    {
        MyAction => new MyAction(),
        MyStringAction => new MyStringAction() { payload = _payload },
        _ => throw new ArgumentOutOfRangeException(nameof(_action)),
    };
}
```

The `BaseObserver` has a public `Dispatch()` method that can be assigned to Unity events like button clicks.

## Delegates and middleware

Much like how we can control how Unity3D sends actions to the store, we can also control how those actions are used using middleware. Middleware are called before actions are dispatched to reducers, and can be used for various purposes: action history, error management and catching, thunk, ... You can learn more about the concept of middleware on [ReduxJS's official documentation](https://redux.js.org/understanding/history-and-design/middleware).

### Creating middleware

`Uku.Redux` has two delegates that allow you to create middleware:

- `public delegate void Dispatcher(IAction action)`: executed by the store when `Dispatch` is called
- `public delegate Func<Dispatcher, Dispatcher> Middleware(IStore store)`: creates a `Dispatcher` method and integrates it in the dispatch call chain

```csharp
public static class Middleware
{
    public static Func<Dispatcher, Dispatcher> Create(IStore store)
    {
        return (Dispatcher next) => (IAction action) =>
        {
            // you can use action and store to create specific logic that needs to be executed for any action
            // call next when your middleware is finished to continue the dispatch chain
            next(action);
        };
    }
}
```

### Registering middleware

You need to create your own zenject installer inheriting from `ReduxZenjectInstaller`:

```csharp
public class MyReduxInstaller : ReduxZenjectInstaller
{
    // this method is called when the store is instantiated
    // it directly takes the method for creating the middleware
    // creation happens in the store itself, so don't call the method directly
    protected override Middleware[] InstallMiddleware()
    {
        return new Middleware[]
        {
            Middleware.Create
        };
    }
}
```
