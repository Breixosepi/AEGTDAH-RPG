#pragma once 
#include "Utilities.hpp"

class LevelUp
{
public:
	LevelUp(xptype xp,lvltype lvl,xptype nextXp);
	LevelUp();
	void GainXp(xptype gainXp);
	xptype GetXp();
	lvltype GetLvl();
	xptype GetXptoNextLevel();
	virtual void LvlUp() = 0;

private:
	xptype currentXp;
	xptype xpToNextLevel;
	lvltype currentLvl;
	void CheckLevelUp();
};