#pragma once 
#include "../Hp.hpp"
#include "../Stats.hpp"
#include "../LevelUp.hpp"

class Warrior : public Hp , public Stats, public LevelUp
{
public:
	static const hptype hpWarrior = (hptype)20u;
	static const statstype strWarrior = (statstype)10u;
	static const statstype intWarrior = (statstype)1u;
	Warrior() : Hp(hpWarrior, hpWarrior), Stats(strWarrior ,intWarrior) {};
private:
	void LvlUp() override;
};
