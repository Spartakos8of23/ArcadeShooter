#include "MovementManager.h"

MovementManager::MovementManager()
{

}

MovementManager::~MovementManager()
{
	
}

void MovementManager::Move(int speed, int& x, int& y, float& angle, IKbd* myKbd)
{
	float t = angle*M_PI/180;
	//float tt = angle;
	angle*=M_PI;
	angle/=180;

	if(KeyPressed(myKbd) == ALLEGRO_KEY_W)
	{
		float temp;

		if(angle == 0)
		{
			x+=speed;
		}
		else if((t > 0) && (t < M_PI_2))
		{
			x+=speed;
			temp = tan(t);
			temp*=speed;
			y-=temp;
		}
		else if(angle == M_PI_2)
		{
			y-=speed;
		}
		else if((angle > M_PI_2) && (angle < M_PI))
		{
			
		}
		else if(angle == M_PI)
		{
			x-=speed;
		}
		else if((angle > M_PI) && (angle < 3*M_PI_2))
		{
			
		}
		else if(angle == 3*M_PI_2)
		{
			y+=speed;
		}
		else if((angle > 3*M_PI_2) && (angle < 2*M_PI))
		{
			
		}
		else if(angle == M_PI)
		{
			
		}
		/*
		float temp;
		
		if((angle!=M_PI) && (angle != 2*M_PI))
		{
			if(angle!=0)
			{
				x+=speed;
				temp = tan(angle + M_PI_2);
				temp*=(FLOAT)speed;
				y-=temp;
			}
			else
			{
				x+=speed;
			}
			
		}
		else if(angle == 2*M_PI)
		{
			y-=speed;
		}
		else if(angle == M_PI)
		{
			y+=speed;
		}*/
	}
	else if(KeyPressed(myKbd) == ALLEGRO_KEY_S)
	{
		y+=speed;
	}
	else if(KeyPressed(myKbd) == ALLEGRO_KEY_A)
	{
		angle = angle + 180/M_PI;
		if(angle == (M_PI)*2)
		{
			angle = 0;
		}
	}
	else if(KeyPressed(myKbd) == ALLEGRO_KEY_D)
	{
		angle = angle + (M_PI)*2 - 0.1;
		if(angle == (M_PI)*2)
		{
			angle = 0;
		}
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