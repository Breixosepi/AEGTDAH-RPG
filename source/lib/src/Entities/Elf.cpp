#include "../../include/Entities/Elf.hpp"

void Elf::LvlUp()
{
	setMaxHp(getMaxHp() + (hptype)4u);
	StatsUp((statstype)3u, (statstype)3u);
}
