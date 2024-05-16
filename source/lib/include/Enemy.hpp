#pragma once
#include  "Hp.hpp"
#include  "Stats.hpp"
#include <utility>

class Player;

class Enemy: public Hp, public Stats
{
public:
	Enemy(int _x, int _y) : Hp(20,20), Stats(), x(_x),y(_y){}
	void atack(Player &play);
	void print();
	void print(int _x, int _y);
	void clean();
	std::pair<int,int> Getcoordinate() const;

private:
	int x, y;
};

