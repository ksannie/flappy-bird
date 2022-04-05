# flappy-bird

I only used the dispatcher format presented in the uku redux package for a few actions (UI mostly), most of the others are dispatched directly with store.dispatch. I am not a fan of the way the dispatcher currently works, for every action we add and want to use with the dispatcher, we have to modify the dispatcher, its not SOLID

I presumed that most of the logic should be on the reducers, but for physic and update for instance, I have to create some logic outside of the reducers. What I did for instance was send actions from observers in updates methods, and depending on the state, do something or not.

For the bird I was not sure how to work with the jump action. I couldnt make the jump directly in the reducer, i have to make it in the observer, so I made a boolean "jump ordered" in the state to notify the observer that it need to do something, I am not sure this is the best solution, and this type of communication requirement probably will appear in other uses of the current redux architecture

From what I undestand of redux, the state is not supposed to be a persistant instance but more of a throwable and light object, which is not very coherent with the scriptable object architecture. 

To improve my work I would like the pipes description in the state to be more "agnostic" about the way they are rendered (ie: not have the collider size and collider ofset or even localscale in the pipe data, but only a coordinate, a width and a height, and the observer would recreate them with the tools unity has) Also I would probably add more things to the state, such as the bird radius. I like the idea of being able to simulate a game execution with all the successive states, even outside of unity.
I would also love to be able to apply a specific version of a state at any point of the game and make sure it still works, because it would show the robustness of the code and how decoupled the different states are

In term of gameplay, there are obviously a lot of possible improvements, it would be nice to have some increase in difficulty instead of random gap size, also the screen transition is not smooth at all, I made this for quicker development and to focus on the redux code.
In term of graphics, everything is to be done.