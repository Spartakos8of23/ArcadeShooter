#include "Moveable.h"

Moveable::Moveable() : Drawable()
{
	this->speed = 1;
}

Moveable::Moveable(int speed, unsigned int length, unsigned int height, int x, int y, string path) : Drawable(length, height, x, y, path)
{
	this->speed = speed;
}

Moveable::~Moveable()
{

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







































