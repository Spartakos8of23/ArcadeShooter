#ifndef DISPLAY_H
#define DISPLAY_H

#include "allegro5/allegro5.h"
#include "IDisplay.h"

class AllegroDisp : public IDisplay
{
	private:
		ALLEGRO_DISPLAY* disp;
		int width, height;
	public:
		AllegroDisp(int width = 640, int height = 480);
		~AllegroDisp();
		void Init();
		void Update();
		void Shutdown();
		void Clear();
		void FlipBuffers();
		void onClose();
};

#endif