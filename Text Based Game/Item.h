#pragma once

class Item
{
private:
	char* _Name;
	int  _Speed, _Defense, _Strength, _Lvl, _CurrentExp, _MaxExp, _Damage;

public:
	bool isEmpty();
	Item(char* Name, int Strength);
	Item();
	~Item();
	char* GetName();
};

