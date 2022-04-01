### - What is the use of scriptable objects in a large scale project?

Scriptable objects can be used in multiple ways here are some examples

- Hold the configuration of a project
- Hold references shared in the project (can avoid missing references when editing prefabs and two communicating entities dont have to hold each other references)
- hold different data relative to the game itself
- we can use it a a kind of singleton

How would you create a global state machine in Unity3D?
-------

Create a state machine means clearly define what are the state and what are the  conditions of transitions between those states.

Maybe I would create states as monobehaviours, with event that are triggered when entering and leaving the state
A transition would be a payload with a bunch of informations with default values so that we could launch a state directly with a transition mockup.
I think a statemachine should stay macro.

Can you explain the Redux pattern to the best of your understanding?
------

What I understand is that redux is a pattern that consists of a store, that contains state which are basically the entirety of the game informations that you need to work with.
The reducers take an action and a state and give a new state of the game. That means that reducer hold most of the logic of the game.
An action can have a payload for the reducer to work with.
Observers look at the evolution of the states to render them

There are still some elements that are still unclear, such as middlewares.

I discovered Redux with this project. I have a feeling that it is a good tool to force yourself to separate responsabilities of the program. Also as you have a state of the game at each time, it must be easier to log and debug.




