#include "../include/Stats.hpp"


Stats::Stats()
{
	strength = (statstype)0u;
	intelligence = (statstype)0u;
	agility = (statstype)0u;
	armor = (statstype)0u;
}

Stats::Stats(statstype _strength, statstype _intelligence, statstype _agility,statstype _armor)
{
	strength = _strength;
	intelligence = _intelligence;
	agility = _agility;
	armor = _armor;
}

void Stats::StatsUp(statstype s, statstype i, statstype ag,statstype ar)
{
	strength += s;
	intelligence += i;
	agility += ag;
	armor += ar;
}

statstype Stats::getStrength()	{ return strength;}

statstype Stats::getIntelligence()	{ return intelligence;}

statstype Stats::getAgility() { return agility;}

statstype Stats::getArmor() { return armor;}
