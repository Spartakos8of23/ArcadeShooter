#include "Drawable.h"

Drawable::Drawable()
{	
	this->x = 0;
	this->y = 0;
	this->length = 0;
	this->height = 0;
	this->path = "";
	this->img = NULL;
	this->angle = 0;
	
	memset(coordinates, 0, 8);
}

Drawable::Drawable(unsigned int length, unsigned int height, int x, int y, string path, float angle)
{
	this->x = x;
	this->y = y;
	this->length = length;
	this->height = height;
	this->path = path;
	this->angle = angle;
	
	this->coordinates[0] = x; //top left corner x
	this->coordinates[1] = y; // top left corner y
	this->coordinates[2] = x; // bottom left corner x
	this->coordinates[3] = y + height; // bottom left corner y
	this->coordinates[4] = x + length; // top right corner x
	this->coordinates[5] = y; // top right corner y
	this->coordinates[6] = x + length; // bottom right corner x
	this->coordinates[7] = y + height; // bottom right corner y

	this->img = al_load_bitmap(path.c_str());
}

Drawable::~Drawable()
{
	al_destroy_bitmap(img);
}

void Drawable::UpdateCoordinates(int x, int y)
{
	this->x = x;
	this->y = y;
	
	this->coordinates[0] = x; //top left corner x
	this->coordinates[1] = y; // top left corner y
	this->coordinates[2] = x; // bottom left corner x
	this->coordinates[3] = y + height; // bottom left corner y
	this->coordinates[4] = x + length; // top right corner x
	this->coordinates[5] = y; // top right corner y
	this->coordinates[6] = x + length; // bottom right corner x
	this->coordinates[7] = y + height; // bottom right corner y
}

void Drawable::SetX(int x)
{
	this->x = x;
	UpdateCoordinates(x, y);
}

void Drawable::SetY(int y)
{
	this->y = y;
	UpdateCoordinates(x, y);
}

void Drawable::SetAngle(float angle)
{
	this->angle = angle;
}

float Drawable::GetAngle()
{
	return angle;
}

int Drawable::GetX()
{
	return x;
}

int Drawable::GetY()
{
	return y;
}

void Drawable::Draw()
{
	//al_draw_rotated_bitmap(img, x+(length)/2, y+(height)/2, x, y, angle, 0);
	al_draw_rotated_bitmap(img, 0, 0, x, y, angle, 0);
}

void Drawable::GOUpdate(IKbd* myKbd)
{
	Draw();
}



































































































































































