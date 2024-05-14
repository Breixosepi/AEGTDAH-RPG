#include "../include/Ability.hpp"

Ability::Ability()
{
	name = "";
	cd = (abilitytype)0u;
	cost = (abilitytype)0u;
	effect = (abilitytype)0u;
	target = false;
}
Ability::Ability(std::string _name, abilitytype _cd, abilitytype _cost, abilitytype _effect, bool _target)
{
	name = _name;
	cd = _cd;
	cost = _cost;
	effect = _effect;
	target = _target;
}
