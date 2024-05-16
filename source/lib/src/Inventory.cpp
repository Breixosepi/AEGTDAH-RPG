#include "../include/Inventory.hpp"
#include "../include/Utilities.hpp"


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

int Inventory::getItemAmount(Item& item)
{
    return items[item];
}

void Inventory::printInventory()
{
    for (auto& pair: items) 
    {
        std::cout << "Item: " << pair.first.GetName() <<"\t\t";
    }
    std::cout<<std::endl;
    for (auto& pair : items)
    {
        std::cout << "   Description: " << pair.first.GetDescription()<<"\t";
    }
    std::cout << std::endl;
    for (auto& pair : items)
    {
        std::cout << "   Cantidad: " << pair.second<<"\t\t\t";
    }
}

