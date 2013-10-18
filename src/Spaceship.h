#ifndef SPACESHIP_H
#define SPACESHIP_H

#include "Moveable.h"

class Spaceship : public Moveable
{
	private:
		unsigned int lives;
	public:
		//Constructor . Default lives = 3.
		Spaceship();

		//Constructor . This constructor initialize all the class (and its father's) variables using the input values . path is the path to the image of this drawable object
		Spaceship(unsigned int lives, int speed, float length, float height, float x, float y, string path, float angle);

		//Destructor
		~Spaceship();

		//Set class variable lives .
		void SetLives(unsigned int lives);

		//Returns class variable lives.
		unsigned int GetLives();
};

#endif