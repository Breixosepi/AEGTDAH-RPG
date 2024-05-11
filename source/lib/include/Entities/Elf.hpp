#pragma once 
#include "../Hp.hpp"
#include "../Stats.hpp"
#include "../LevelUp.hpp"

class Elf : public Hp , public Stats, public LevelUp
{
public:
	static const hptype hpElf = 15;
	static const statstype strElf = 5;
	static const statstype intElf = 3;
	Elf() : Hp(hpElf, hpElf), Stats(strElf ,intElf) {};
private:
	void LvlUp() override;
};
