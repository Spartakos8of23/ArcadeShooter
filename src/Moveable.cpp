#include "Moveable.h"

Moveable::Moveable() : Drawable()
{
	this->speed = 1;
	manager = new MovementManager();
}

Moveable::Moveable(int speed, unsigned int length, unsigned int height, int x, int y, string path, float angle) : Drawable(length, height, x, y, path, angle)
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

void Moveable::GOUpdate(IKbd* myKbd)
{
	//Start of Move Part
	int tempX, tempY;
	float tempAngle;
	tempX = Drawable::GetX();
	tempY = Drawable::GetY();
	tempAngle = Drawable::GetAngle();

	manager->Move(speed, tempX, tempY, tempAngle, myKbd);

	Drawable::SetX(tempX);
	Drawable::SetY(tempY);
	Drawable::SetAngle(tempAngle);

	Drawable::UpdateCoordinates(tempX, tempY);
	//End of Move Part

	//Start of Draw part
	Drawable::GOUpdate(myKbd);
	//End of Draw part
}







































