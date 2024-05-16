#pragma once 

#include "Item.hpp"
#include <unordered_map>

class Inventory
{

public:

	Inventory();

	void addItem(const Item& item, int amount = 1);

	void removeItem(const Item& item, int amount = 1);
	
	int getItemAmount(Item& item);

	void printInventory();

private:

	std::unordered_map <Item, int, ItemHash>items;

};


