#pragma once

#include <string>
#include "Utilities.hpp"
#include "Player.hpp"
#include <iostream>

class Item
{
public:

	Item(std::string _name ,std::string _description, ItemType _type);

	std::string GetName() const noexcept;

	std::string GetDescription() const noexcept;

	ItemType GetType() const noexcept;

	void Consume (Player& ply);
	
	bool operator == (const Item& item) const noexcept;

	bool operator != (const Item& item) const noexcept;

private:

	std::string name;
	
	std::string description;
	
	ItemType type;
};


struct ItemHash
{
	size_t operator() (const Item& item) const noexcept;
};


