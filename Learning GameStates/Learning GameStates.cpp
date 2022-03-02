#include <memory>
#include <iostream>
#include "Game.h"
#include "MenuState.h"

int main() //Basically what main should look like
{
	std::unique_ptr<Game> game = std::make_unique<Game>(new MenuState); //Smart pointers delete themselves when not needed
	
	if (game->Initialize())
	{
		game->Run();
		game->Shutdown();
	}

	system("pause");
	return 0;
}