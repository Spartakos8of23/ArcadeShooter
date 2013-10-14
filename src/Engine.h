#ifndef ENGINE_H
#define ENGINE_H

#include "allegro5/allegro5.h"
#include "IDisplay.h"
#include "IKbd.h"
#include "Updator.h"

class Engine
{
	private:
	
		//The running state of the machine
		bool isRunning;

		//The display of the game
		IDisplay* display;

		//The keyboard of the game
		IKbd* kbd;

		//The updator of the game
		Updator* updator;
	
	public:

		//Constructor
		Engine();

		//Destructor
		~Engine();

		//Enters main loop
		void MainLoop();
		
		//Sets the display of the game
		void setDisplay(IDisplay* disp);

		//Sets the keyboard of the game
		void setKbd(IKbd* kbd);

		//Sets the updator of the engine
		void setUpdator(Updator* u);
};

#endif