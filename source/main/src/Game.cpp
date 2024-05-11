#include <iostream>
#include "../../../source/lib/include/Entities/Elf.hpp"
#include "../../../source/lib/include/Entities/Mage.hpp"
#include "../../../source/lib/include/Entities/Warrior.hpp"

int main ()
{
	Warrior warrior;
	Mage mage;
	Elf elf;
	std::cout << "Stats del Warrior:" << std::endl;
	std::cout << "Hp: " << warrior.getMaxHp() << " Fuerza: " << warrior.getStrength() <<  " inteligencia: " << warrior.getIntelligence() << std::endl;
	std::cout << "Stats del Mage" << std::endl;
	std::cout << "Hp: " << mage.getMaxHp() << " Fuerza: " << mage.getStrength() <<  " inteligencia: " << mage.getIntelligence() << std::endl;
	std::cout << "Stats del Elf" << std::endl;
	std::cout << "Hp: " << elf.getMaxHp() << " Fuerza: " << elf.getStrength() <<  " inteligencia: " << elf.getIntelligence() << std::endl;

}