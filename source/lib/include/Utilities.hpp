#pragma once 
#include <cstdint>
#include <windows.h>
#include <conio.h>
#include <stdio.h>
//#include <graphics.h>

using hptype = std::uint16_t;
using statstype = std::uint16_t;
using xptype = std::uint16_t;
using lvltype = std::uint16_t;
using abilitytype = uint16_t;
static constexpr char left = 75;
static constexpr char right = 77;
static constexpr char down = 80;
static constexpr char up = 72;

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
	void cleanPj();
	void movePj();
	void printLimit();

private:
	int x, y;
};

