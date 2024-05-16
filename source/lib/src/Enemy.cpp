#include "../include/Enemy.hpp"
#include "../include/Player.hpp"

void Enemy::atack(Player& play)
{
	play.takeDamage((rand() % 3) + 1);
}

void Enemy::print()
{
	print(x,y);
}

void Enemy::print(int _x, int _y)
{
	Printpj enemy(x, y);
	enemy.cleanPj();
	enemy.Gotoxy(_x, _y);
	enemy.printPj(_x,_y);
}

void Enemy::clean()
{
	Printpj enemy(x, y);
	enemy.cleanPj();
}

std::pair<int, int> Enemy::Getcoordinate() const
{
	return std::make_pair(x, y);
}

