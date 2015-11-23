#include "stdafx.h"
#include "Entity.h"
#include <iostream>
#include "Item.h"


void Entity::Defend()
{
	//Doubles the current defense.
	this->_Defense *= 2;

}

void Entity::Run()
{
}

void Entity::Die()
{
}

void Entity::PickUp(Item item)
{
	_ItemCount++;

	for (size_t i = 0; i < _MAXITEMCOUNT; i++)
	{
		if (_Inventory[i]->isEmpty(_Inventory[i]))
		{
			//std::cout << "Slot is empty. Adding " << item.GetName() << std::endl;
			_Inventory[i] = &item;
			break;
		}
	}
}

int Entity::GainExp(int expToBeGained)
{
	return 0;
}

int Entity::GetHealth()
{
	return _Health;	
}

void Entity::DisplayStats()
{
	std::cout << "Name: " << this->_Name << std::endl;
	std::cout << "Health: " << this->_Health << std::endl;
	std::cout << "Exp: " << this->_CurrentExp << std::endl;

	switch (this->_Race)
	{
		case 0:
			std::cout << "Race: Human" << std::endl;
			break;
		case 1:
			std::cout << "Race: Elf" << std::endl;
			break;
		case 2:
			std::cout << "Race: Orc" << std::endl;
			break;
		case 3:
			std::cout << "Race: Dwarf" << std::endl;
			break;
	}

	switch (this->_Class)
	{
	case 0:
		std::cout << "Class: Wizard" << std::endl;
		break;
	case 1:
		std::cout << "Class: Knight" << std::endl;
		break;
	case 2:
		std::cout << "Class: Thief" << std::endl;
		break;
	case 3:
		std::cout << "Class: Archer" << std::endl;
		break;
	case 4:
		std::cout << "Class: Samurai" << std::endl;
		break;
	}

	std::cout << std::endl;
}

void Entity::DisplayInventory()
{
	std::cout << "You are carrying " << _ItemCount << " item(s) out of " << _MAXITEMCOUNT << ":" << std::endl;
	for (size_t i = 0; i < _MAXITEMCOUNT; i++)
	{
		if (!_Inventory[i]->isEmpty(_Inventory[i]))
		{
			//If there is an item then show
			std::cout << _Inventory[i]->GetName() << std::endl;
		}
	}
}



void Entity::Attack(Entity* Target)
{
	//Calcuate Damage
	this->_Damage = (this->_Strength * this->_Speed) / Target->_Defense;

	//Get the target name
	std::cout << "You attacked " << Target->_Name << " for " << this->_Damage << std::endl;

	//Take health from the target
	Target->_Health -= this->_Strength;
	std::cout << std::endl;

	//Check the current health of the target
	if (Target->_Health <= 0)
	{
		std::cout << Target->_Name << " has been killed... Well done!";

		//Die();
	}
	std::cout << std::endl;
	std::cout << std::endl;

}



Entity::Entity(int Health, int Speed, int Defense, int Strength, int Lvl, int CurrentExp, int MaxExp, char* Name, Class CurrentClass, Race CurrentRace)
{
	this->_Strength = Strength;
	this->_Health = Health;
	this->_Speed = Speed;
	this->_Defense = Defense;
	this->_Lvl = Lvl;
	this->_CurrentExp = CurrentExp;
	this->_MaxExp = MaxExp;
	this->_Name = Name;
	this->_Class = CurrentClass;
	this->_Race = CurrentRace;
}


Entity::~Entity()
{
	//std::cout << this->_Name << " has been destroyed";
}

