#include "MovementManager.h"

MovementManager::MovementManager()
{

}

MovementManager::~MovementManager()
{
	
}

void MovementManager::Move(int speed, float& x, float& y, float& angle, IKbd* myKbd)
{
	float pi = M_PI;

	if(KeyPressed(myKbd) == ALLEGRO_KEY_W)
	{
		x+= (cos(angle) * speed);
		y+= (sin(angle) * speed);

		//x+=speed;
		//y+= tan(angle) * speed;
	}
	else if(KeyPressed(myKbd) == ALLEGRO_KEY_S)
	{
		x-= (cos(angle) * speed);
		y-= (sin(angle) * speed);
	}
	else if(KeyPressed(myKbd) == ALLEGRO_KEY_D)
	{
		angle+=0.1;
	}
	else if(KeyPressed(myKbd) == ALLEGRO_KEY_A)
	{
		angle-=0.1;
	}
	else if(KeyPressed(myKbd) == ALLEGRO_KEY_Q)
	{
		x-=speed;
	}
	else if(KeyPressed(myKbd) == ALLEGRO_KEY_E)
	{
		x+=speed;
	}
}

int MovementManager::KeyPressed(IKbd* myKbd)
{
	if(myKbd->isKeyPressed(ALLEGRO_KEY_W))
	{
		return ALLEGRO_KEY_W;
	}
	else if(myKbd->isKeyPressed(ALLEGRO_KEY_A))
	{
		return ALLEGRO_KEY_A;
	}
	else if(myKbd->isKeyPressed(ALLEGRO_KEY_S))
	{
		return ALLEGRO_KEY_S;
	}
	else if(myKbd->isKeyPressed(ALLEGRO_KEY_D))
	{
		return ALLEGRO_KEY_D;
	}
	else if(myKbd->isKeyPressed(ALLEGRO_KEY_E))
	{
		return ALLEGRO_KEY_E;
	}
	else if(myKbd->isKeyPressed(ALLEGRO_KEY_Q))
	{
		return ALLEGRO_KEY_Q;
	}
	else
	{
		return NULL;
	}
}

int MovementManager::KeyOnPress(IKbd* myKbd)
{
	if(myKbd->onPress(ALLEGRO_KEY_W))
	{
		return ALLEGRO_KEY_W;
	}
	else if(myKbd->onPress(ALLEGRO_KEY_A))
	{
		return ALLEGRO_KEY_A;
	}
	else if(myKbd->onPress(ALLEGRO_KEY_S))
	{
		return ALLEGRO_KEY_S;
	}
	else if(myKbd->onPress(ALLEGRO_KEY_D))
	{
		return ALLEGRO_KEY_D;
	}
	else
	{
		return NULL;
	}
}

int MovementManager::KeyOnRelease(IKbd* myKbd)
{
	if(myKbd->onRelease(ALLEGRO_KEY_W))
	{
		return ALLEGRO_KEY_W;
	}
	else if(myKbd->onRelease(ALLEGRO_KEY_A))
	{
		return ALLEGRO_KEY_A;
	}
	else if(myKbd->onRelease(ALLEGRO_KEY_S))
	{
		return ALLEGRO_KEY_S;
	}
	else if(myKbd->onRelease(ALLEGRO_KEY_D))
	{
		return ALLEGRO_KEY_D;
	}
	else
	{
		return NULL;
	}
}