#pragma once
#include  "Hp.hpp"
#include  "Stats.hpp"

class Enemy: public Hp, public Stats
{
public:
	Enemy() : Hp(), Stats(){};
	void atack();
	void print();
private:

};

