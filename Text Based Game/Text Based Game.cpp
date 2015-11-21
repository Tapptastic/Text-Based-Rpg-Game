// Text Based Game.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Entity.h"
#include <ctime>	
#include "GameManager.h"

int main()
{
	//srand(time(NULL));
	//std::cout << (rand() % 10);

	/*Entity entity = Entity(3, 3, 3, 3, 3, 3, 0, "Grant", Class::Knight, Race::Elf);

	enemy.DisplayStats();
	entity.Attack(&enemy);
	enemy.DisplayStats();

	*/

	Entity enemy = Entity(2, 2, 2, 2, 2, 2, 0, "Enemy", Class::Archer, Race::Dwarf);
	enemy.PickUp(Item("Sword", 12));
	enemy.DisplayInventory();


    return 0;
}

