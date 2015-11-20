#include "stdafx.h"
#include "GameManager.h"
#include "Entity.h"
#include <iostream>
#include <fstream>




void GameManager::Load()
{
	std::ofstream level;
}

void GameManager::Save(Entity* player)
{
	std::ofstream level;
	level.open(this->_LevelPath);
	level << player->GetHealth();
	level.close();
}

void GameManager::Battle(Entity& player, Entity enemies[])
{
}

GameManager::GameManager()
{
}

GameManager::~GameManager()
{
}
