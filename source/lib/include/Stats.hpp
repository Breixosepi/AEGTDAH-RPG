#pragma once
#include "Utilities.hpp"

class Stats
{
public:
	statstype getStrength();
	statstype getIntelligence();
	Stats();
	Stats(statstype _strength, statstype _intelligence);

private:
	statstype strength;
	statstype intelligence;
protected:
	void StatsUp(statstype s, statstype i);
};
