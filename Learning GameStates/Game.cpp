#include "Game.h"

Game::Game(State* initialState)
{
	m_gameState.reset(initialState);
}

bool Game::Initialize()
{
	//Screen manager
	//Sound and Music
	//Fonts and text
	//Third-party libraries
	
	return true;
}

bool Game::Run()
{
	m_gameState->OnEnter(); //for the inital game state

	while (m_gameState) //once gameState is null, it will break out of the loop
	{
		//clear screen for SDL
		//input update
		//delta time checks
		
		//current game state return pointer to different state if state is needed
		//if now switch needed current state pointer is returned
		State* nextState = m_gameState->Update();
		
		m_gameState->Render(); //Make sure this is before the state machine

		//code below only runs if switch needed
		if (nextState != m_gameState.get()) //finite state machine (FSM)
		{
			m_gameState->OnExit();
			m_gameState.reset(nextState);

			if (m_gameState)
			{
				m_gameState->OnEnter();
			}
		}
		
		//screen rendering
		//all this ^ in one frame
	}

	return true;
}

void Game::Shutdown()
{
	//Close down everything you initalized
}