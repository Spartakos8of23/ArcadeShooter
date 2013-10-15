#ifndef GAMEUPDATOR_H
#define GAMEUPDATOR_H

#include <vector>
#include "Updator.h"
#include "GameObject.h"

class GameUpdator : Updator
{
	private:
		//a static vector with objects GameObject
		static std::vector<GameObject*> GOvec;
	public:
		//Constructor
		GameUpdator();

		//Destructor
		~GameUpdator();

		//Update
		void Update();

		//Push to class variable vector
		void Push(GameObject* go);
};

#endif
