# Pong
This is a simple solo Pong game created using SFML library and C++. Please see the repo's wiki for setting up SFML in Visual Studio. The wiki also contains some background information about the code to refresh or update programmer's knowledge about SFML. The project is considered complete, but here are some of the features that would be great to implement in the future:

1. Add sounds to the game
2. Gamepad to move the bat
3. Convert the project into CMake instead of visual studio (the repo is also bit messy)
4. Increase difficulty of the game as it continues
---
### Known issue
- There were cases where the ball would stick to the edge of the bat and bleed off. This might be an issue with SFML's intersection function but will require more investigation
- Score would go up when the ball goes below the baseline.
