#pragma once

#include <memory>
#include <iostream>
#include <string>
#include "State.h"
//This is our engine
class Game
{

public:

	Game(State* initialState);
	bool Initialize(); //Sets everything up - screen, input manager, etc.
	bool Run(); //Main game loop in here
	void Shutdown(); //Shuts down everything in Initalize

private:

	std::unique_ptr<State> m_gameState;

};