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
		Drawable();
		Drawable(unsigned int length, unsigned int height, int x, int y, string path, int speed);
		~Drawable();
		void UpdateCoordinates(int x, int y);
		void SetX(int x);
		void SetY(int y);
		int GetX();
		int GetY();
		int GetSpeed();
};

#endif