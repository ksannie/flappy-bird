# flappy-bird

About the usage of redux on this project:
--------
I am not sure I used the dispatcher correctly, I only used the format presented in the uku redux package for a few actions, most of the others are dispatched directly with store.dispatch

I didnt see the utility to subscribe to a store change, maybe its only because this is a small project

I sometimes had problems figuring where the logic was supposed to happen, I presume it should be on the reducer, but for physic and update for instance, I have to create some logic outside of the reducers. What I did was create updaters, that observe the states, and when signaled to do something, do the thing and dispatch an action to the store.

I feel like some of the logic I made is less efficient because of the use of redux. Especially for the pipes and the bird... I have an object for the computation of the data and an other one for rendering it, but it would have been faster to render the elements directly.



