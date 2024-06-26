#pragma once 
#include <cstdint>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <utility>

class Item;
class Enemy;
class Player;
using hptype = std::uint16_t;
using statstype = std::uint16_t;
using xptype = std::uint16_t;
using lvltype = std::uint16_t;
using abilitytype = uint16_t;
static constexpr char left = 75;
static constexpr char right = 77;
static constexpr char down = 80;
static constexpr char up = 72;
static constexpr char escape = 27;

enum class ItemType
{
	MpPotion,
	HpPotion,
	StrPotion,
	Explosive
};

class Printpj
{
public:
	Printpj(int _x,int _y);
    void Gotoxy(int x, int y);
    void CursorHide();
	void printPj();
	void printPj(int _x, int _y);
	void cleanPj();
	void cleanPj(int _x, int _y);
	void movePj();
	void printLimit();
	std::pair<int, int>GetCoordinates();
private:
	int x, y;
};

void Menu();

