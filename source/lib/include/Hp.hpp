#pragma once
#include "Utilities.hpp"

class Hp
{
public:
	bool setMaxHp(hptype new_max_hp);
	void takeDamage(hptype damage);
	void healing(hptype amount);
	hptype getMaxHp();
	hptype getCurrentHp();
	Hp();
	Hp(hptype _currentHp, hptype _maxHp);

private:
	hptype currentHp;
	hptype maxHp;
};
