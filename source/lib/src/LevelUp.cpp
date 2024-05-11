#include "../include/LevelUp.hpp"

LevelUp::LevelUp(xptype xp, lvltype lvl, xptype nextXp)
{
	currentXp = xp;
	currentLvl = lvl;
	xpToNextLevel = nextXp;
}

LevelUp::LevelUp()
{
	currentXp = (xptype)0u;
	currentLvl = (lvltype)1u;
	xpToNextLevel = (xptype)10u;
}

void LevelUp::GainXp(xptype gainXp)
{
	currentXp += gainXp;
	CheckLevelUp();
}

void LevelUp::CheckLevelUp()
{
	while (currentXp >= xpToNextLevel)
	{
		++currentLvl;
		LvlUp();
		currentXp -= xpToNextLevel;
		xpToNextLevel *= 2;
	}

}

xptype LevelUp::GetXp()
{
	return currentXp;
}

lvltype LevelUp::GetLvl()
{
	return currentLvl;
}

xptype LevelUp::GetXptoNextLevel()
{
	return xpToNextLevel;
}
