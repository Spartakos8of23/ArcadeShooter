#ifndef GAMEUPDATOR_H
#define GAMEUPDATOR_H

#include <vector>
#include "Updator.h"
#include "GameObject.h"
#include "IKbd.h"

class GameUpdator : public Updator
{
	private:
		//a static vector with objects GameObject
		static std::vector<GameObject*> GOvec;
		IKbd* myKbd;
	public:
		//Constructor default
		GameUpdator();

		//Constructor which gets as an input a IKbd pointer and assigns it on myKbd pointer
		GameUpdator(IKbd* alKbd);

		//Destructor
		~GameUpdator();

		//Update
		void Update();

		//Push to class variable vector
		void Push(GameObject* go);
};

#endif
