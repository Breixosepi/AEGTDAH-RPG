#include "../include/Player.hpp"

SelectPlayer::SelectPlayer(): Hp(), Stats(), LevelUp()
{

}


std::string Warrior::getClassName()
{
	return std::string("Warrior");
}

Warrior::Warrior() : SelectPlayer()
{
	HpUp(hpWarrior,hpWarrior);
	StatsUp(strWarrior,intWarrior,agiWarrior,armWarrior);
}

void Warrior::LvlUp()
{
	HpUp((hptype)(hpWarrior/ 2), (hptype)(hpWarrior/ 2));
	StatsUp((statstype)(strWarrior / 2), (statstype)(intWarrior / 2), (statstype)(agiWarrior/2), (statstype)(armWarrior / 2));
}

std::string Mage::getClassName()
{
	return std::string("Mage");
}

Mage::Mage()
{
	HpUp(hpMage,hpMage);
	StatsUp(strMage,intMage,agiMage,armMage);
}

void Mage::LvlUp()
{
	HpUp((hptype)(hpMage/ 2), (hptype)(hpMage/ 2));
	StatsUp((statstype)(strMage / 2), (statstype)(intMage / 2), (statstype)(agiMage/ 2), (statstype)(armMage / 2));
}

Player::Player(SelectPlayer* pc)
{
	playerCharacter = pc;
}

std::string Player::getClassName()
{
	return playerCharacter->getClassName();
}

lvltype Player::getLevel()
{
	return playerCharacter->GetLvl();
}

xptype Player::getCurrentEXP()
{
	return playerCharacter->GetXp();
}

xptype Player::getEXPToNextLevel()
{
	return playerCharacter->GetXptoNextLevel();
}

hptype Player::getCurrentHP()
{
	return playerCharacter->getCurrentHp();
}

hptype Player::getMaxHP()
{
	return playerCharacter->getMaxHp();
}

statstype Player::getStrength()
{
	return playerCharacter->getStrength();
}

statstype Player::getIntellect()
{
	return playerCharacter->getIntelligence();
}

statstype Player::getAgility()
{
	return playerCharacter->getAgility();
}

statstype Player::getArmor()
{
	return playerCharacter->getArmor();
}

void Player::gainEXP(xptype amt)
{
	playerCharacter->GainXp(amt);
}

void Player::takeDamage(hptype amt)
{
	playerCharacter->takeDamage(amt);
}

void Player::heal(hptype amt)
{
	playerCharacter->healing(amt);
}

std::string Elf::getClassName()
{
	return std::string("Elf");
}

Elf::Elf()
{
	HpUp(hpElf,hpElf);
	StatsUp(strElf, intElf,agiElf,armElf);
}

void Elf::LvlUp()
{
	HpUp((hptype)(hpElf/ 2), (hptype)(hpElf/ 2));
	StatsUp((statstype)(strElf / 2), (statstype)(intElf / 2), (statstype)(agiElf/ 2), (statstype)(armElf/ 2));
}
