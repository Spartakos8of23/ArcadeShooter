#include "GameUpdator.h"

std::vector<GameObject*> GameUpdator::GOvec;

GameUpdator::GameUpdator()
{
	
}

GameUpdator::~GameUpdator()
{
	
}

void GameUpdator::Update()
{
	for(unsigned int i = 0; i < GOvec.size(); i++)
	{
		GOvec[i]->GOUpdate();
	}
}

void GameUpdator::Push(GameObject* go)
{
	GOvec.push_back(go);
}
