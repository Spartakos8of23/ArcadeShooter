#ifndef MOVEMENTMANAGER_H
#define MOVEMENTMANAGER_H

#define _USE_MATH_DEFINES

#include "IKbd.h"
#include <allegro5/allegro5.h>
#include <math.h>
#include <cmath>

class MovementManager
{
	private:
		
	public:
		//Constructor
		MovementManager();
		
		//Destructor
		~MovementManager();

		//Moves the object. W for up, S for down, A for left, D for right .
		void Move(int speed, float& x, float& y, float& angle, IKbd* myKbd);
		
		//Returns what key is pressed
		int KeyPressed(IKbd* myKbd);
		
		//Returns what key is on press
		int KeyOnPress(IKbd* myKbd);
		
		//Returns what key is on release
		int KeyOnRelease(IKbd* myKbd);
};

#endif