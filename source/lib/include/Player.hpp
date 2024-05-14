#pragma once 
#include "Stats.hpp"
#include "Hp.hpp"
#include "LevelUp.hpp"
#include <string>
#include "Inventory.hpp"

class SelectPlayer : public Hp, public Stats, public LevelUp
{
public:
	SelectPlayer();
	virtual std::string getClassName() = 0;

private:

};

class Warrior : public SelectPlayer
{
public:
	static const hptype hpWarrior = (hptype)20u;
	static const statstype strWarrior = (statstype)10u;
	static const statstype intWarrior = (statstype)2u;
	static const statstype agiWarrior = (statstype)3u;
	static const statstype armWarrior = (statstype)4u;
	static const statstype manWarrior = (statstype)0u;
	std::string getClassName() override;
	Warrior();
private:
	void LvlUp() override;

};

class Mage : public SelectPlayer
{
public:
	static const hptype hpMage = (hptype)10u;
	static const statstype strMage = (statstype)2u;
	static const statstype intMage = (statstype)5u;
	static const statstype agiMage = (statstype)2u;
	static const statstype armMage = (statstype)2u;
	static const statstype manMage= (statstype)8u;
	std::string getClassName() override;
	Mage();
private:
	void LvlUp() override;

};

class Elf : public SelectPlayer
{
public:
	static const hptype hpElf = (hptype)15;
	static const statstype strElf = (statstype)5;
	static const statstype intElf = (statstype)3;
	static const statstype agiElf = (statstype)5;
	static const statstype armElf = (statstype)2u;
	static const statstype manElf = (statstype)5u;
	std::string getClassName() override;
	Elf();
private:
	void LvlUp() override;
};


class Player 
{
public:
	Player(SelectPlayer* pc);
	std::string getClassName(); 
	lvltype getLevel(); 
	xptype getCurrentEXP(); 
	xptype getEXPToNextLevel(); 
	hptype getCurrentHP(); 
	hptype getMaxHP(); 
	statstype getStrength(); 
	statstype getIntellect(); 
	statstype getAgility();
	statstype getArmor();
	statstype getMana();

	void gainEXP(xptype amt);
	void takeDamage(hptype amt);
	void heal(hptype amt);
	void increaseStrength(statstype amt);
	void increaseMana(statstype amt);
		
private:
	SelectPlayer* playerCharacter;
};