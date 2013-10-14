#ifndef ALLEGROKBD_H
#define ALLEGROKBD_H

#include "allegro5\allegro5.h"

class AllegroKbd
{
	private:
	
		//Structures that represent previous and current keyboard state
		ALLEGRO_KEYBOARD_STATE prevState, curState;
		
	public:
		
		//Constructor
		AllegroKbd();
		
		//Destructor
		~AllegroKbd();
		
		//Initializes allegro keyboard module
		void Init();
		
		//Shutdowns allegro keyboard module
		void Shutdown();
		
		//Updates keyboard state
		void Update();
		
		//Checks if key with specified keycode is pressed
		bool isKeyPressed(int keycode);
		
		//Checks if key with specified keycode is now being pressed 
		bool onPress(int keycode);
		
		//Checks if key with specified keycode is now being relesed
		bool onRelease(int keycode);
};

#endif