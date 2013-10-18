#ifndef DRAWABLE_H
#define DRAWABLE_H

#include <string.h>
#include <string>
#include "GameObject.h"
#include "allegro5/allegro5.h"

using std::string;

class Drawable : public GameObject
{
	private:
		ALLEGRO_BITMAP* img;
		int coordinates[8];
		unsigned int length;
		unsigned int height;
		int x;
		int y;
		float angle;
		string path;
	public:
		//constructor default
		Drawable();

		//constructor . This constructor initialize all the class variables using the input values . path is the path to the image of this drawable object
		Drawable(unsigned int length, unsigned int height, int x, int y, string path, float angle);

		//destructor
		~Drawable();

		//gets the new x and y and updates the coordinates.
		void UpdateCoordinates(int x, int y);

		//changes the value of class variable x
		void SetX(int x);

		//changes the value of class variable y
		void SetY(int y);

		//changes the value of class variable angle
		void SetAngle(float angle);

		//returns the class variable angle
		float GetAngle();

		//returns the class variable x
		int GetX();

		//returns the class variable y
		int GetY();
		
		//draws the object with al_draw_bitmap function
		void Draw();

		//Updates the drawable object
		void GOUpdate(IKbd* myKbd);
};

#endif