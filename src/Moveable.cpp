#include "Moveable.h"

Moveable::Moveable()
{

}

Moveable::~Moveable()
{

}

//Moves the object depending on the "MoveOrder"
void Moveable::Move(int MoveOrder)
{
	switch(MoveOrder)
	{
		case MOVE_UP:
		{
			Drawable::SetY(GetY() - GetSpeed());
			UpdateCoordinates(GetX(), GetY());
			break;
		}
		case MOVE_RIGHT:
		{
			Drawable::SetX(GetX() + GetSpeed());
			UpdateCoordinates(GetX(), GetY());
			break;
		}
		case MOVE_LEFT:
		{
			Drawable::SetY(GetX() - GetSpeed());
			UpdateCoordinates(GetX(), GetY());
			break;
		}
		case MOVE_DOWN:
		{
			Drawable::SetY(GetY() + GetSpeed());
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







































