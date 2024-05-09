#pragma once
#include "Utilities.hpp"

class Hp
{
public:
	bool setMaxHP(hptype new_max_hp) 
	{
		if (new_max_hp < 1)	return false;
		MaxHp = new_max_hp;
		if (CurrentHp > MaxHp)	CurrentHp = MaxHp;
		return true;
	}
	void takeDamage(hptype damage)
	{
		if (damage > CurrentHp)
		{
			CurrentHp = 0;
			return;
		} 
		CurrentHp -= damage;
	}
	Hp();
	~Hp();

private:
	hptype CurrentHp;
	hptype MaxHp;
	hptype shield;
};

Hp::Hp()
{
}

Hp::~Hp()
{
}