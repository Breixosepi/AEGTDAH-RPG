#pragma once
#include "Utilities.hpp"
#include <string>

class Ability
{
public:
	Ability();
	Ability(std::string _name,abilitytype _cd,abilitytype _cost, abilitytype _effect,bool _target);

private:
	std::string name;
	abilitytype cd;
	abilitytype cost;
	abilitytype effect;
	bool target;
};