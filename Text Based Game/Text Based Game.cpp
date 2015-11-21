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
	enemy.PickUp(Item("Something", 12));
	enemy.DisplayInventory();


	//int somethingElse = 23;
	//int* something = &somethingElse;

	//if (something == nullptr)
	//{
	//	std::cout << "THis pointer is NULL";
	//}
	//else
	//{
	//	std::cout << "This point is not NULL";
	//}
	//std::cout << "Address: " << something << std::endl;
	//std::cout << "Address: " << &somethingElse << std::endl;
	//std::cout << "Value: " << *something << std::endl;
	//std::cout << "Value: " << something << std::endl;




    return 0;
}

