#pragma once
#include "Utilities.hpp"

class Stats
{
public:
	statstype getStrength();
	statstype getIntelligence();
	statstype getAgility();
	statstype getArmor();
	statstype getMana();
	Stats();
	Stats(statstype _strength, statstype _intelligence, statstype _agility,statstype _armor, statstype _mana);
	void increaseStrength(statstype amount);
	void increaseMana(statstype amount);

private:
	statstype strength;
	statstype intelligence;
	statstype agility;
	statstype armor;
	statstype mana;
protected:
	void StatsUp(statstype s, statstype i, statstype ag, statstype ar,statstype m);
};
