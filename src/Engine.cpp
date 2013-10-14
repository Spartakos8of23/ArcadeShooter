#include "Engine.h"

Engine::Engine()
{
	isRunning = false;
	display = NULL;
	kbd = NULL;
	updator = NULL;
}

Engine::~Engine()
{

};


void Engine::MainLoop()
{
	double t1, t2, sleepTime;

	while (isRunning)
	{
		//Get first time checkpoint
		t1 = al_get_time();

		//Update content
		updator->Update();

		//Get second time checkpoint
		t2 = al_get_time();

		sleepTime = t2 - t1;

		if (sleepTime > 0)
		{
			Sleep(sleepTime);
		}
	}
}


void Engine::setDisplay(IDisplay* disp)
{
	display = disp;
}


void Engine::setKbd(IKbd* kbd)
{
	this->kbd = kbd;
}


void Engine::setUpdator(Updator* u)
{
	this->updator = u;
}