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
		int speed;
	public:
		//Constructor . Default speed = 1 .
		Moveable();

		//Constructor . This constructor initialize all the class (and its father's) variables using the input values . path is the path to the image of this drawable object
		Moveable(int speed, unsigned int length, unsigned int height, int x, int y, string path);

		//Destructor default
		~Moveable();

		//Moves the object depending on the "MoveOrder"
		void Move(int MoveOrder);
};

#endif