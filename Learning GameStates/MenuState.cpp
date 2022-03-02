#include "MenuState.h"
#include "PlayState.h"

bool MenuState::OnEnter()
{
    //Load menu button assets
    //Menu music
    //Background image
    return true;
}

State* MenuState::Update()
{
    //Check keypress and/or mouse clicks
    //Check if buttons are clicked
    //Check if user scrolling up or down
    
    /*if (userClicksPlayButton)
    {
        return new PlayState; //points to new State in Game.cpp
    }
    
    if (userClicksExitButton)
    {
        return nullptr;
    }*/
    
    return this; //special pointer that points to current state
}

bool MenuState::Render()
{
    //render buttons
    //render menu text
    
    return false;
}

void MenuState::OnExit()
{
    //unload everything for this state
}