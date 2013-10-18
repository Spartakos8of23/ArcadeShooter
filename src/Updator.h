#ifndef UPDATOR_H
#define UPDATOR_H

#include "GameObject.h"

class Updator
{
	public:
		virtual ~Updator();
		virtual void Update() = 0;
};

#endif