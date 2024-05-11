#include "../include/Hp.hpp"

bool Hp::setMaxHp(hptype new_max_hp)
{
	if (new_max_hp < 1)	return false;
	maxHp = new_max_hp;
	if (currentHp > maxHp)	currentHp = maxHp;
	return true;
}

void Hp::takeDamage(hptype damage)
{
	if (damage > currentHp)
	{
		currentHp = 0;
		return;
	}
	currentHp -= damage;
}

void Hp::healing(hptype heal)
{
	if (heal > 0)
	{
		if (heal + currentHp > maxHp)	
		{
			currentHp = maxHp;
			return;
		}
		currentHp += heal;
	}
}

Hp::Hp()
{
	currentHp = 1;
	maxHp = 1;
}

Hp::Hp(hptype _currentHp, hptype _maxHp)
{
	currentHp = _currentHp;
	maxHp = _maxHp;
	if (currentHp > maxHp) currentHp = maxHp;

}
	
hptype Hp::getMaxHp()	{ return maxHp;}

hptype Hp::getCurrentHp()	{ return currentHp;}
	
	