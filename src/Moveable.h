#ifndef MOVEABLE_H
#define MOVEABLE_H

#include <stdio.h>
#include "Drawable.h"

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
		Moveable();
		~Moveable();
		void Move(int MoveOrder);
};

#endif