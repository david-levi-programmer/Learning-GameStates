#pragma once

#include "State.h"
//Everything about the menu lives ONLY here
class MenuState : public State
{

public:

	~MenuState() override {}

	bool OnEnter() override;
	State* Update() override;
	bool Render() override;
	void OnExit() override;

private:

	//All menu thing declared here
};