#include "../include/Item.hpp"

Item::Item(std::string _name, std::string _description, ItemType _type)
{
	name = _name;
	description = _description;
	type = _type;
}

std::string Item::GetName()	const noexcept { return name;}

std::string Item::GetDescription() const noexcept	{ return description;}

ItemType Item::GetType() const noexcept { return type;}

void Item::Consume(Player& ply)
{

	if (type == ItemType::HpPotion)
	{
		ply.heal(5);
	}	
	else if (type == ItemType::MpPotion)
	{
		if (ply.getClassName()== "Warrior")
		{
			return;
		}
		else
		{
			ply.increaseMana(2);
		}
	}
	else if (type == ItemType::StrPotion)
	{
		ply.increaseStrength(2);
	}
	else if (type == ItemType::Explosive)
	{
		ply.takeDamage(3);
	}
}

bool Item::operator == (const Item& item) const noexcept
{
	return name == item.name && type == item.type;
}

bool Item::operator != (const Item& item) const noexcept
{
	return name != item.name || type != item.type;
}

size_t ItemHash::operator()(const Item& item) const noexcept
{
	size_t name = std::hash<std::string>()(item.GetName());
	size_t type = static_cast<size_t>(item.GetType());

	size_t seed = { 0 };

	seed ^= std::hash<size_t>{}(name)+0x9e3779b9 + (seed << 6) + (seed >> 2);
	seed ^= std::hash<size_t>{}(type)+0x9e3779b9 + (seed << 6) + (seed >> 2);

	return seed;
}


