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
		if (ply.getCurrentHP() == ply.getMaxHP())
		{
			std::cout << "su vida ya esta al maximo" << std::endl;
			return;
		}
		ply.heal(5);
		std::cout << "su vida actual es de : " << ply.getCurrentHP() << std::endl;
	}	
	else if (type == ItemType::MpPotion)
	{
		if (ply.getClassName()== "Warrior")
		{
			std::cout << "Los guerreros no poseen mana" << std::endl;
		}
		else
		{
			ply.increaseMana(2);
			std::cout << "su Mana actual es de : " << ply.getMana() << std::endl;
		}
	}
	else if (type == ItemType::StrPotion)
	{
		ply.increaseStrength(2);
		std::cout << "su fuerza actual es de: " << ply.getStrength() << std::endl;
	}
	else if (type == ItemType::Explosive)
	{
		std::cout << "en desarrollo" << std::endl;
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


