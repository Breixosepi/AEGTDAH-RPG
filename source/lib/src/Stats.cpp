#include "../include/Stats.hpp"


Stats::Stats()
{
	strength = (statstype)1u;
	intelligence = (statstype)1u;
}

Stats::Stats(statstype _strength, statstype _intelligence)
{
	strength = _strength;
	intelligence = _intelligence;
}

void Stats::StatsUp(statstype s, statstype i)
{
	strength += s;
	intelligence += i;
}

statstype Stats::getStrength()	{ return strength;}

statstype Stats::getIntelligence()	{ return intelligence;}