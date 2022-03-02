#include "PlayState.h"

bool PlayState::OnEnter()
{
    //Load player and enemy assets
    //Music
    //Images and fonts
    return true;
}

State* PlayState::Update()
{
    //Check keypress and/or mouse clicks
    //Check if buttons are clicked
    //All main game mechanics updated here

    /*if (userClicksExit)
    {
        return new MenuState; //points to new State in Game.cpp
    }

    if (userHitsPause)
    {
        return new PauseState; //would in theory be intergrated in PlayState
    }*/

    return this;
}

bool PlayState::Render()
{
    //render player
    //render enemy
    //etc...
    
    return true;
}

void PlayState::OnExit()
{
    //unload everything for this state
}