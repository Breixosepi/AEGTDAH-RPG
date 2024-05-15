#include "../include/Enemy.hpp"

void Enemy::atack()
{

}

void Enemy::print()
{
	int x = rand() % 90 + 3;
	int y = rand()% 25 + 4 ;
	Printpj enemy(x,y);
	enemy.Gotoxy(x,y);
	enemy.printPj();
}
