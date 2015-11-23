#include "stdafx.h"
#include "Item.h"
#include <iostream>


bool Item::isEmpty(Item* item)
{
	




	return true;
	else
		return false;
}

Item::Item(char* Name, int Strength)
{
	this->_Name = Name;
	this->_Strength = Strength;
}

Item::Item()
{
	this->_CurrentExp = 0;
	this->_Damage = 0;
	this->_Defense = 0;
	this->_Lvl = 0;
	this->_MaxExp = 0;
	this->_Speed = 0;
	this->_Strength = 0;
	this->_Name = "Something";
}


Item::~Item()
{
}

char * Item::GetName()
{
	return _Name;
}
