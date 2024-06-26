#include "../include/Player.hpp"
#include "../include/Inventory.hpp"

SelectPlayer::SelectPlayer(): Hp(), Stats(), LevelUp()
{

}


std::string Warrior::getClassName()	{ return std::string("Warrior");}

Warrior::Warrior() : SelectPlayer()
{
	HpUp(hpWarrior,hpWarrior);
	StatsUp(strWarrior,intWarrior,agiWarrior,armWarrior,manWarrior);
}

void Warrior::LvlUp()
{
	HpUp((hptype)(hpWarrior/ 2), (hptype)(hpWarrior/ 2));
	StatsUp((statstype)(strWarrior / 2), (statstype)(intWarrior / 2), (statstype)(agiWarrior/2), (statstype)(armWarrior / 2), (statstype)(manWarrior / 2));
}

std::string Mage::getClassName()	{ return std::string("Mage");}

Mage::Mage()
{
	HpUp(hpMage,hpMage);
	StatsUp(strMage,intMage,agiMage,armMage,manMage);
}

void Mage::LvlUp()
{
	HpUp((hptype)(hpMage/ 2), (hptype)(hpMage/ 2));
	StatsUp((statstype)(strMage / 2), (statstype)(intMage / 2), (statstype)(agiMage/ 2), (statstype)(armMage / 2),(statstype)(manMage/2));
}

Player::Player(SelectPlayer* pc)
{
	playerCharacter = pc;
}

std::string Player::getClassName()	{ return playerCharacter->getClassName();}

lvltype Player::getLevel()	{ return playerCharacter->GetLvl();}

xptype Player::getCurrentEXP()	{ return playerCharacter->GetXp();}

xptype Player::getEXPToNextLevel()	{ return playerCharacter->GetXptoNextLevel();}

hptype Player::getCurrentHP()	{ return playerCharacter->getCurrentHp();}

hptype Player::getMaxHP()	{ return playerCharacter->getMaxHp();}

statstype Player::getStrength()	{ return playerCharacter->getStrength();}

statstype Player::getIntellect()	{ return playerCharacter->getIntelligence();}

statstype Player::getAgility()	{ return playerCharacter->getAgility();}

statstype Player::getArmor()	{ return playerCharacter->getArmor();}

statstype Player::getMana()	{ return playerCharacter->getMana();}

void Player::gainEXP(xptype amt)	{ playerCharacter->GainXp(amt);}

void Player::takeDamage(hptype amt)	{ playerCharacter->takeDamage(amt);}

void Player::heal(hptype amt)	{ playerCharacter->healing(amt);}

void Player::increaseStrength(statstype amt)	{ playerCharacter->increaseStrength(amt);}

void Player::increaseMana(statstype amt)	{ playerCharacter->increaseMana(amt);}

void Player::printInventory()
{
	if (inventory == nullptr)	return;
	else
	{
		std::cout << "no esta vacio"<<std::endl;
		inventory->printInventory();
	}
}

void Player::printClass()
{
	Printpj stats(2,20);
	stats.Gotoxy(85, 2);
	std::cout << "Raza: " << playerCharacter->getClassName() << std::endl;
	stats.Gotoxy(103, 2);
	std::cout << "ESTADISTICAS: " << std::endl;
	stats.Gotoxy(103, 5);
	std::cout << "Vida actual: " << playerCharacter->getCurrentHp() << std::endl;
	stats.Gotoxy(103, 8);
	std::cout << "Vida maxima: " << playerCharacter->getMaxHp() << std::endl;
	stats.Gotoxy(103, 11);
	std::cout << "Fuerza: " << playerCharacter->getStrength() << std::endl;
	stats.Gotoxy(103, 14);
	std::cout << "Agilidad: " << playerCharacter->getAgility() << std::endl;
	stats.Gotoxy(103, 17);
	std::cout << "Armadura: " << playerCharacter->getArmor() << std::endl;
	stats.Gotoxy(103, 20);
	std::cout << "Inteligencia: " << playerCharacter->getIntelligence() << std::endl;
	stats.Gotoxy(103, 23);
	std::cout << "Mana: " << playerCharacter->getMana() << std::endl;
	stats.Gotoxy(103, 26);
	std::cout << "Nivel: " << playerCharacter->GetLvl() << std::endl;
	stats.Gotoxy(103, 29);
	std::cout << "Experiencia actual: " << playerCharacter->GetXp() << std::endl;
	stats.Gotoxy(103, 32);
	std::cout << "Experiencia necesaria: " << playerCharacter->GetXptoNextLevel() << std::endl;
}

std::string Elf::getClassName()	{ return std::string("Elf");}

Elf::Elf()
{
	HpUp(hpElf,hpElf);
	StatsUp(strElf, intElf,agiElf,armElf,manElf);
}

void Elf::LvlUp()
{
	HpUp((hptype)(hpElf/ 2), (hptype)(hpElf/ 2));
	StatsUp((statstype)(strElf / 2), (statstype)(intElf / 2), (statstype)(agiElf/ 2), (statstype)(armElf/ 2),(statstype)(manElf/ 2));
}
