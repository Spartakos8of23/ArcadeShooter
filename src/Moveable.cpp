#include "Moveable.h"

Moveable::Moveable() : Drawable()
{
	this->speed = 1;
	manager = new MovementManager();
}

Moveable::Moveable(int speed, unsigned int length, unsigned int height, int x, int y, string path) : Drawable(length, height, x, y, path)
{
	this->speed = speed;
	manager = new MovementManager();
}

Moveable::~Moveable()
{
	delete manager;
}

void Moveable::Move(int MoveOrder)
{
	switch(MoveOrder)
	{
		case MOVE_UP:
		{
			Drawable::SetY(GetY() - speed);
			UpdateCoordinates(GetX(), GetY());
			break;
		}
		case MOVE_RIGHT:
		{
			Drawable::SetX(GetX() + speed);
			UpdateCoordinates(GetX(), GetY());
			break;
		}
		case MOVE_LEFT:
		{
			Drawable::SetY(GetX() - speed);
			UpdateCoordinates(GetX(), GetY());
			break;
		}
		case MOVE_DOWN:
		{
			Drawable::SetY(GetY() + speed);
			UpdateCoordinates(GetX(), GetY());
			break;
		}
		default:
		{
			printf("Wrong MoveOrder. Can't Move sorry...\n");
			break;
		}
	}
}

void Moveable::GOUpdate()
{
	//Start of Move Part
	int tempX, tempY;
	tempX = Drawable::GetX();
	tempY = Drawable::GetY();

	manager->Move(speed, tempX, tempY);

	Drawable::SetX(tempX);
	Drawable::SetY(tempY);

	Drawable::UpdateCoordinates(tempX, tempY);
	//End of Move Part

	//Start of Draw part
	Drawable::GOUpdate();
	//End of Draw part
}







































