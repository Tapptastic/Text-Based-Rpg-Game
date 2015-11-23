// Text Based Game.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Entity.h"
#include <ctime>	
#include "GameManager.h"

int main()
{
	std::cout << "Welcome to my first text based RPG game." << std::endl;
	std::cout << "I hope this is something you enjoy playing. You can press Q at anytime to quit the game." << std::endl;

	Entity enemy(1,1,1,1,1,1,1,"Enemy", Class::Archer, Race::Dwarf);
	enemy.PickUp(Item("Sword", 12));

	enemy.DisplayInventory();


	//Insert Main Game Loop here.
	//Check for input if the Q button is detected then end then game.

	//char input;
	//while (GameManager::GetIsRunning())
	//{
	//	//While the game is running detect input
	//	std::cin >> input;
	//}
	//char something;
	//std::cin >> something;
	//std::cout << something;

	*/
	Entity enemy = Entity(2, 2, 2, 2, 2, 2, 0, "Enemy", Class::Archer, Race::Dwarf);
	enemy.PickUp(Item("Sword", 12));
	enemy.DisplayInventory();
    return 0;
}

