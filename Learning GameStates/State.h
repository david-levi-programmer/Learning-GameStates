#pragma once
//This is an abstract base class(ABC) because there is at least 1 pure virtual function (=0)
//This class can't be instantiated
class State
{

public:

	virtual ~State() = 0 {}

	virtual bool OnEnter() = 0; //Load assets when entering game state
	virtual State* Update() = 0; //Update game mechanics
	virtual bool Render() = 0; //Draw every object in the scene
	virtual void OnExit() = 0; //Unload assets when leaving state

private:



};