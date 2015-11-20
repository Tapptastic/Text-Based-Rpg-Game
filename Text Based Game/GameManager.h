#pragma once
#include "Entity.h"

class GameManager
{

private:
	const char* _LevelPath = "C:\temp\level.level";

public:
	void Load();
	void Save(Entity* playerStats);
	void Battle(Entity& player, Entity enemies[]);

	GameManager();
	~GameManager();
};

