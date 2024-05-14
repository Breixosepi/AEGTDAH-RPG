#include "../include/Stats.hpp"


Stats::Stats()
{
	strength = (statstype)0u;
	intelligence = (statstype)0u;
	agility = (statstype)0u;
	armor = (statstype)0u;
	mana = (statstype)0u;
}

Stats::Stats(statstype _strength, statstype _intelligence, statstype _agility,statstype _armor,statstype _mana)
{
	strength = _strength;
	intelligence = _intelligence;
	agility = _agility;
	armor = _armor;
	mana = _mana;
}

void Stats::increaseStrength(statstype amount)	{ strength += amount;}

void Stats::increaseMana(statstype amount)	{ mana += amount;}

void Stats::StatsUp(statstype s, statstype i, statstype ag,statstype ar,statstype m)
{
	strength += s;
	intelligence += i;
	agility += ag;
	armor += ar;
	mana += m;
}

statstype Stats::getStrength()	{ return strength;}

statstype Stats::getIntelligence()	{ return intelligence;}

statstype Stats::getAgility() { return agility;}

statstype Stats::getArmor() { return armor;}

statstype Stats::getMana()	{ return mana;}
