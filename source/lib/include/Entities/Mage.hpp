#pragma once 
#include "../Hp.hpp"
#include "../Stats.hpp"
#include "../LevelUp.hpp"

class Mage : public Hp , public Stats , public LevelUp
{
public:
	static const hptype hpMage = (hptype)10u;
	static const statstype strMage = (statstype)2u;
	static const statstype intMage = (statstype)5u;
	Mage() : Hp(hpMage, hpMage), Stats(strMage ,intMage) {};
private:
	void LvlUp() override;

};
