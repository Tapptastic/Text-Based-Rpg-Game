#pragma once
#include "Entity.h"

static class GameManager
{

private:
	const char* _LevelPath = "C:\temp\level.level";
	static bool _IsRunning;

public:
	static void Load();
	static void Save(Entity* playerStats);
	static void Battle(Entity& player, Entity enemies[]);
	static bool GetIsRunning();
	static char DetectInput();

	GameManager();
	~GameManager();
};

