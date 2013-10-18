#include "GameUpdator.h"

std::vector<GameObject*> GameUpdator::GOvec;

GameUpdator::GameUpdator()
{
	myKbd = NULL;
}

GameUpdator::GameUpdator(IKbd* alKbd)
{
	myKbd = alKbd;
}

GameUpdator::~GameUpdator()
{
	
}

void GameUpdator::Update()
{
	for(unsigned int i = 0; i < GOvec.size(); i++)
	{
		GOvec[i]->GOUpdate(myKbd);
	}
}

void GameUpdator::Push(GameObject* go)
{
	GOvec.push_back(go);
}
