#include "../include/Utilities.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include "../include/Player.hpp"
#include "../include/Enemy.hpp"

void NuevaPartida();
void Print()
{
    Printpj pj(10, 10);
    pj.printPj();
    pj.CursorHide();
    pj.printLimit();
    bool gameOver = false; 
    char tecla; 
    while (!gameOver)
    {
        tecla = _getch();
        if (_kbhit)
        {
            if (tecla == escape)
            {
                system("cls");
                break;
            }
        }
        pj.movePj();
        Sleep(30);
    }
}
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
        if (tecla == right && x < 92)   ++x;
        if (tecla == up && y > 5 )   --y;
        if (tecla == down && y < 28)   ++y;
    }
}

void Printpj::printLimit()
{
    for (int i = 2; i < 130; i++)
    {
        Gotoxy(i, 3);   printf("%c", 205);
        Gotoxy(i, 33);  printf("%c", 205);
    }
    for (int i = 4; i < 33; i++)
    {
        Gotoxy(2, i);   printf("%c", 186);
        Gotoxy(98, i); printf("%c", 186);
        Gotoxy(130,i);  printf("%c",186);
    }

    Gotoxy(2, 3);   printf("%c", 201);
    Gotoxy(2, 33);  printf("%c", 200);
    Gotoxy(98, 3); printf("%c", 203);
    Gotoxy(98, 33);printf("%c", 202);
    Gotoxy(130, 3); printf("%c", 187);
    Gotoxy(130, 33); printf("%c", 188);
}

static int get_int(void) 
{
    int n = 0;

    std::cout << "\n\tIngrese una opcion: ";
    std::string ingresado;
    std::getline(std::cin, ingresado); 
    std::stringstream ss(ingresado);

    if (ss >> n)    return n;

    std::cout << "\n\tOpcion invalida. Por favor, seleccione una opcion valida." << std::endl;
    return get_int();
}

void Menu()
{

    int opcion = 0;

    do
    {
        std::cout << "\n\n\tMENU PRINCIPAL" << std::endl;
        std::cout << "\t--------------" << std::endl;
        std::cout << "\n\t1. Nueva Partida" << std::endl;
        std::cout << "\t2. SALIR" << std::endl;
        opcion = get_int();
        switch (opcion)
        {
        case 1:
            system("cls");
            NuevaPartida();
            break;

        case 2:
            system("cls");
            std::cout << "\n\tSaliendo del programa..." << std::endl;
            _getch();
            return;

        default:
            system("cls");
            std::cout << "\n\tOpcion invalida. Por favor, seleccione una opcion valida." << std::endl;
        }
    } while (opcion != 2);
}

void NuevaPartida()
{
    int x = rand() % 130 + 3, y = rand() % 33 + 2;
    int opcion;
    Player knight(new Warrior());
    Player mage(new Mage());
    Player elf(new Elf());
    Enemy enemy;
    
    
    do
    {

        std::cout << "\n\n\t\t\tELIJA UN PERSONAJE" << std::endl;
        std::cout << "\t\t\t------------------------" << std::endl;
        std::cout << "\n\t1. Caballero" << std::endl;
        std::cout << "\t2. Mago" << std::endl;
        std::cout << "\t3. Elfo" << std::endl;
        std::cout << "\t4. Volver al Menu Principal" << std::endl;

        opcion = get_int();
        switch (opcion)
        {
        case 1:
            system("cls");
            knight.printClass();
            enemy.print();
            Print();
            break;
        case 2:
            system("cls");
            mage.printClass();
            enemy.print();
            Print();
            break;

        case 3:
            system("cls");
            elf.printClass();
            enemy.print();  
            Print();
            break;

        case 4:
            system("cls");
            break;

        default:
            system("cls");
            std::cout << "\n\tOpcion invalida. Por favor, seleccione una opcion valida." << std::endl;

        }
    } while (opcion != 4);
}






