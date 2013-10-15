#include "MovementManager.h"

MovementManager::MovementManager()
{
	kbd = new AllegroKbd();

	//install keyboard
	kbd->Init();
}

MovementManager::~MovementManager()
{
	//uninstall keyboard
	kbd->Shutdown();

	delete kbd;
}

void MovementManager::Move(int speed, int& x, int& y)
{
	if(KeyPressed() == ALLEGRO_KEY_W)
	{
		y-=speed;
	}
	else if(KeyPressed() == ALLEGRO_KEY_S)
	{
		y+=speed;
	}
	else if(KeyPressed() == ALLEGRO_KEY_A)
	{
		x-=speed;
	}
	else if(KeyPressed() == ALLEGRO_KEY_S)
	{
		x+=speed;
	}
}

int MovementManager::KeyPressed()
{
	if(kbd->isKeyPressed(ALLEGRO_KEY_W))
	{
		return ALLEGRO_KEY_W;
	}
	else if(kbd->isKeyPressed(ALLEGRO_KEY_A))
	{
		return ALLEGRO_KEY_A;
	}
	else if(kbd->isKeyPressed(ALLEGRO_KEY_S))
	{
		return ALLEGRO_KEY_S;
	}
	else if(kbd->isKeyPressed(ALLEGRO_KEY_D))
	{
		return ALLEGRO_KEY_D;
	}
	else
	{
		return NULL;
	}
}

int MovementManager::KeyOnPress()
{
	if(kbd->onPress(ALLEGRO_KEY_W))
	{
		return ALLEGRO_KEY_W;
	}
	else if(kbd->onPress(ALLEGRO_KEY_A))
	{
		return ALLEGRO_KEY_A;
	}
	else if(kbd->onPress(ALLEGRO_KEY_S))
	{
		return ALLEGRO_KEY_S;
	}
	else if(kbd->onPress(ALLEGRO_KEY_D))
	{
		return ALLEGRO_KEY_D;
	}
	else
	{
		return NULL;
	}
}

int MovementManager::KeyOnRelease()
{
	if(kbd->onRelease(ALLEGRO_KEY_W))
	{
		return ALLEGRO_KEY_W;
	}
	else if(kbd->onRelease(ALLEGRO_KEY_A))
	{
		return ALLEGRO_KEY_A;
	}
	else if(kbd->onRelease(ALLEGRO_KEY_S))
	{
		return ALLEGRO_KEY_S;
	}
	else if(kbd->onRelease(ALLEGRO_KEY_D))
	{
		return ALLEGRO_KEY_D;
	}
	else
	{
		return NULL;
	}
}