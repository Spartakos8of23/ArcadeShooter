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
	int fps = 60;
	double t1, t2, sleepTime;

	isRunning = true;

	while (isRunning)
	{
		//Get first time checkpoint
		t1 = al_get_time();

		//Clear display
		display->Clear();

		//Update keyboard
		kbd->Update();

		//Update content
		updator->Update();

		//Show backbuffer
		display->FlipBuffers();

		//Get second time checkpoint
		t2 = al_get_time();

		sleepTime = 1000/fps - (t2 - t1);

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