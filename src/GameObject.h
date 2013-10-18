#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "IKbd.h"

class GameObject
{
	private:
		
	public:
		virtual void GOUpdate(IKbd* myKbd) = 0;
};

#endif