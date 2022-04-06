### - What is the use of scriptable objects in a large scale project?

Scriptable objects can be used in multiple ways here are some examples

- Hold the configuration of a project
- Hold references shared in the project (can avoid missing references when editing prefabs and two communicating entities dont have to hold each other references)
- hold different data relative to the game itself
- we can use them as kind of singletons

To be fair, I think there is always a way to work without scriptable objects, and that most of the time they are just a shortcut.

How would you create a global state machine in Unity3D?
-------

A state machine is simply a list of states and a list of transitions and a list of entry actions.
a transition is defined by a source state, a destination state and and entry action.
After this definition, it really depends on what you want to do with your state machine. I dont think a state machine can be applied for everything in the game, as that would be the game itself.

You might want to implement a state machine for a game progression for instance. 
I believe I would make the state machine a simple class, instantiated somewhere, and when an entry action is triggered (key found for instance), the state machine would read the entry action,the current state, the transitions and deduce the next state. 
Depending on the state of the game, some elements of the game would interact differently.


I might not be answering the question, as this is not a "global" statemachine, but I am not sure making a global statemachine is a good idea in the first place. It depends of the size of the project, but I would prefer to split it in statemachines with different goals. 

Can you explain the Redux pattern to the best of your understanding?
------

What I understand is that redux is a pattern that consists of a store, that contains state which are basically the entirety of the game informations that you need to work with.
The reducers take an action and a state and give a new state of the game. That means that reducer hold most of the logic of the game.
An action can have a payload for the reducer to work with.
Observers look at the evolution of the states to render them

There are still some elements that are still unclear, such as middlewares.

I discovered Redux with this project. I have a feeling that it is a good tool to force yourself to separate responsabilities of the program. Also as you have a state of the game at each time, it must be easier to log and debug.




