#include "Spaceship.h"

Spaceship::Spaceship() : Moveable()
{
	this->lives = 3;
}

Spaceship::Spaceship(unsigned int lives, int speed, unsigned int length, unsigned int height, int x, int y, string path) : Moveable(speed, length, height, x, y, path)
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