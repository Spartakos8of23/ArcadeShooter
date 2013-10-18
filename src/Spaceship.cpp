#include "Spaceship.h"

Spaceship::Spaceship() : Moveable()
{
	this->lives = 3;
}

Spaceship::Spaceship(unsigned int lives, int speed, float length, float height, float x, float y, string path, float angle) : Moveable(speed, length, height, x, y, path, angle)
{
	this->lives = lives;
}

Spaceship::~Spaceship()
{
	
}

void Spaceship::SetLives(unsigned int lives)
{
	this->lives = lives;
}

unsigned int Spaceship::GetLives()
{
	return lives;
}