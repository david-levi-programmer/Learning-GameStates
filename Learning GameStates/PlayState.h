#pragma once

#include "State.h"
//Everything about the game itself belongs ONLY here
class PlayState : public State
{

public:

	~PlayState() override {}

	bool OnEnter() override;
	State* Update() override;
	bool Render() override;
	void OnExit() override;

private:

	//All play variable declared here!
	//That is all main game mechanics! They all live HERE!

};