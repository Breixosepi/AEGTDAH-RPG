#include "../../include/Entities/Mage.hpp"

void Mage::LvlUp()
{
	setMaxHp(getMaxHp()+ (hptype)5u);
	StatsUp((statstype)3u, (statstype)3u);
}
