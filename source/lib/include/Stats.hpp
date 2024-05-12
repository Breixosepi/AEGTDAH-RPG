#pragma once
#include "Utilities.hpp"

class Stats
{
public:
	statstype getStrength();
	statstype getIntelligence();
	statstype getAgility();
	statstype getArmor();
	Stats();
	Stats(statstype _strength, statstype _intelligence, statstype _agility,statstype _armor);

private:
	statstype strength;
	statstype intelligence;
	statstype agility;
	statstype armor;
protected:
	void StatsUp(statstype s, statstype i, statstype ag, statstype ar);
};
