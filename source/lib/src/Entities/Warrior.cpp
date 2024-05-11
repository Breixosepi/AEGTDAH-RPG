#include "../../include/Entities/Warrior.hpp"

void Warrior::LvlUp()
{
	setMaxHp(getMaxHp() + (hptype)7u);
	StatsUp((statstype)4u, (statstype)2u);
}

