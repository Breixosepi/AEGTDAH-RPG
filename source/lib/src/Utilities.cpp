#include "../include/Utilities.hpp"
#include <iostream>

Printpj::Printpj(int _x, int _y)
{
    x = _x;
    y = _y;
}

void Printpj::Gotoxy(int x, int y)
{
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}

void Printpj::CursorHide()
{
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cci;
    cci.dwSize = 2;
    cci.bVisible = false;
    SetConsoleCursorInfo(hcon, &cci);
}

void Printpj::printPj()
{
    cleanPj();
    Gotoxy(x,y);
    std::cout << "  O" << std::endl;
    Gotoxy(x, y+1);
    std::cout << " \\|/" << std::endl;
    Gotoxy(x, y + 2);
    std::cout << "  | " << std::endl;
    Gotoxy(x, y + 3);
    std::cout << " / \\ " << std::endl;
}

void Printpj::cleanPj()
{
    Gotoxy(x, y-1);
    std::cout << "     " << std::endl;
    Gotoxy(x, y);
    std::cout << "     " << std::endl; 
    Gotoxy(x, y + 1); 
    std::cout << "      " << std::endl; 
    Gotoxy(x, y + 2); 
    std::cout << "      " << std::endl; 
    Gotoxy(x, y + 3); 
    std::cout << "     " << std::endl; 
    Gotoxy(x, y + 4);
    std::cout << "     " << std::endl;
}

void Printpj::movePj()
{
    if (_kbhit())
    {
        char tecla = _getch();
        printPj();
        if (tecla == left && x > 3)   --x;
        if (tecla == right && x < 123)   ++x;
        if (tecla == up && y > 5 )   --y;
        if (tecla == down && y < 28)   ++y;
    }
}

void Printpj::printLimit()
{
    for (int i = 2; i < 130; i++)
    {
        Gotoxy(i, 3);
        printf("%c", 205);
        Gotoxy(i, 33);
        printf("%c", 205);
    }
    for (int i = 4; i < 33; i++)
    {
        Gotoxy(2, i);
        printf("%c", 186);
        Gotoxy(130, i);
        printf("%c", 186);
    }
    Gotoxy(2, 3); printf("%c", 201);
    Gotoxy(2, 33); printf("%c", 200);
    Gotoxy(130, 3); printf("%c", 187);
    Gotoxy(130, 33); printf("%c", 188);
}
