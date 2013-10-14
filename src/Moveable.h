#ifndef MOVEABLE_H
#define MOVEABLE_H

#include <stdio.h>
#include "Drawable.h"

//we need that on function void Move(int MoveOrder);
enum MoveOrder
{
	MOVE_UP = 1,
	MOVE_RIGHT = 2,
	MOVE_LEFT = 3,
	MOVE_DOWN = 4
};

class Moveable : Drawable
{
	private:
		
	public:
		//Constructor default
		Moveable();

		//Destructor default
		~Moveable();

		//Moves the object depending on the "MoveOrder"
		void Move(int MoveOrder);
};

#endif