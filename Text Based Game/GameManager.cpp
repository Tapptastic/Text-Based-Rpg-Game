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
	level << player->GetHealth();
	level.close();
}

void GameManager::Battle(Entity& player, Entity enemies[])
{
}

bool GameManager::GetIsRunning()
{
	return _IsRunning;
}

char GameManager::DetectInput()
{
	char input;
	std::cin >> input;


	return input;
}

GameManager::GameManager()
{
}

GameManager::~GameManager()
{
}
