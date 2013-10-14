#ifndef DRAWABLE_H
#define DRAWABLE_H

#include <string.h>
#include <string>
#include "GameObject.h"

using std::string;

class Drawable : GameObject
{
	private:
		int coordinates[8];
		unsigned int length;
		unsigned int height;
		int x;
		int y;
		int speed;
		string path;
	public:
		//constructor default
		Drawable();

		//constructor . This constructor initialize all the class variables using the input values .
		Drawable(unsigned int length, unsigned int height, int x, int y, string path, int speed);

		//destructor
		~Drawable();

		//gets the new x and y and updates the coordinates.
		void UpdateCoordinates(int x, int y);

		//changes the value of class variable x
		void SetX(int x);

		//changes the value of class variable y
		void SetY(int y);

		//returns the class variable x
		int GetX();

		//returns the class variable y
		int GetY();

		//returns the class variable speed
		int GetSpeed();
};

#endif