#ifndef MOVEMENTMANAGER_H
#define MOVEMENTMANAGER_H

#include "AllegroKbd.h"

class MovementManager
{
	private:
		AllegroKbd* kbd;
	public:
		//Constructor
		MovementManager();
		
		//Destructor
		~MovementManager();

		//Moves the object. W for up, S for down, A for left, D for right .
		void Move(int speed, int& x, int& y);
		
		//Returns what key is pressed
		int KeyPressed();
		
		//Returns what key is on press
		int KeyOnPress();
		
		//Returns what key is on release
		int KeyOnRelease();
};

#endif