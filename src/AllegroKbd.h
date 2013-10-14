#ifndef ALLEGROKBD_H
#define ALLEGROKBD_H

#include <string.h>
#include <allegro5/allegro5.h>
#include "IKbd.h"

class AllegroKbd : public IKbd
{
	private:
		ALLEGRO_KEYBOARD_STATE prevState, curState;
	public:
		AllegroKbd();
		~AllegroKbd();
		void Init();
		void Shutdown();
		void Update();
		bool isKeyPressed(int keycode);
		bool onPress(int keycode);
		bool onRelease(int keycode);
	
};

#endif