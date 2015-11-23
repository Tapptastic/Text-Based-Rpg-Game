#pragma once
#include <iostream>
#include "Item.h"
#include <array>
#include <vector>

enum Class
{
	Wizard,
	Knight,
	Thief,
	Archer,
	Samurai,
};

enum Race
{
	Human,
	Elf,
	Orc,
	Dwarf,	
};

class Entity
{

private:
	int _Health, _Speed, _Defense, _Strength, _Lvl, _CurrentExp, _MaxExp, _Damage, _ItemCount;
	static const int _MAXITEMCOUNT= 20;
	char* _Name;
	Class _Class;
	Race _Race;
	//std::array<Item, 20>* _Inventory;
	Item* _Inventory[_MAXITEMCOUNT];

	
public:
	Entity(int Health, int Speed, int Defense, int Strength, int Lvl, int CurrentExp, int MaxExp,  char* Name, Class CurrentClass, Race CurrentRace);
	~Entity();
	void Attack(Entity* Target);
	void Defend();
	void Run();
	void DisplayStats();
	void DisplayInventory();
	void Die();
	void PickUp(Item item);
	int GetHealth();

};

