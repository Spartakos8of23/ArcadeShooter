#include "AllegroKbd.h"

AllegroKbd::AllegroKbd()
{
	memset(&prevState,0,sizeof(ALLEGRO_KEYBOARD_STATE));
	memset(&curState,0,sizeof(ALLEGRO_KEYBOARD_STATE));
}

AllegroKbd::~AllegroKbd()
{

}

void AllegroKbd::Update()
{
	memcpy(&prevState,&curState,sizeof(ALLEGRO_KEYBOARD_STATE));
	al_get_keyboard_state(&curState);
}

void AllegroKbd::Init()
{
	al_install_keyboard();
}

void AllegroKbd::Shutdown()
{
	al_uninstall_keyboard();
}

bool AllegroKbd::isKeyPressed(int keycode)
{
	return al_key_down(&curState,keycode);
}

bool AllegroKbd::onPress(int keycode)
{
	return (al_key_down(&curState,keycode) && !al_key_down(&prevState,keycode));
}

bool AllegroKbd::onRelease(int keycode)
{
	return (!al_key_down(&curState,keycode) && al_key_down(&prevState,keycode));
}