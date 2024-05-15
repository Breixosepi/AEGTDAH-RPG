#include "../include/Inventory.hpp"

Inventory::Inventory()
{

}

void Inventory::addItem(const Item& item, int amount)
{
    if (amount <= 0)    return;

    auto it = items.find(item);

    if (it != items.end())  it->second += amount;
    else    items[item] = amount;
    
}

void Inventory::removeItem(const Item& item, int amount)
{
    if (amount <= 0)    return;

    auto it = items.find(item);

    if (it != items.end()) 
    {
        if (amount >= it->second)   items.erase(item);
        else   it->second -= amount;
    }
}

void Inventory::printInventory()
{
    for (auto& pair: items) 
    {
        std::cout<<""<<std::endl;
        std::cout << "Item: " << pair.first.GetName() << " tipo: " << (int)pair.first.GetType() << std::endl;
        std::cout << " Description: " << pair.first.GetDescription()<< std::endl;
        std::cout << "Cantidad: " << pair.second << std::endl;
    }
}

