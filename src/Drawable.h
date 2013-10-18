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
		float coordinates[8];
		float length;
		float height;
		float x;
		float y;
		float angle;
		string path;
	public:
		//constructor default
		Drawable();

		//constructor . This constructor initialize all the class variables using the input values . path is the path to the image of this drawable object
		Drawable(float length, float height, float x, float y, string path, float angle);

		//destructor
		~Drawable();

		//gets the new x and y and updates the coordinates.
		void UpdateCoordinates(float x, float y);

		//changes the value of class variable x
		void SetX(float x);

		//changes the value of class variable y
		void SetY(float y);

		//changes the value of class variable angle
		void SetAngle(float angle);

		//returns the class variable angle
		float GetAngle();

		//returns the class variable x
		float GetX();

		//returns the class variable y
		float GetY();
		
		//draws the object with al_draw_bitmap function
		void Draw();

		//Updates the drawable object
		void GOUpdate(IKbd* myKbd);
};

#endif