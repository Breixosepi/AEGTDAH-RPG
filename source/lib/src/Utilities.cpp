#include "../include/Utilities.hpp"
#include <iostream>

void NuevaPartida();
void CargarPartida();

void Caballero();
void Mago();
void Elfo();

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
        if (tecla == left)   --x;
        if (tecla == right)   ++x;
        if (tecla == up)   --y;
        if (tecla == down)   ++y;
    }
}

void Printpj::printLimit()
{
    for (int i = 2; i < 130; i++)
    {
        Gotoxy(i, 3);
        printf("%c", 205);
        Gotoxy(i, 50);
        printf("%c", 205);
    }
    for (int i = 4; i < 50; i++)
    {
        Gotoxy(2, i);
        printf("%c", 186);
        Gotoxy(130, i);
        printf("%c", 186);
    }
    Gotoxy(2, 3); printf("%c", 201);
    Gotoxy(2, 50); printf("%c", 200);
    Gotoxy(130, 3); printf("%c", 187);
    Gotoxy(130, 50); printf("%c", 188);
}

void Menu() 
{
    
    int opcion;
    
    do
    {
        /*system("cls");*/

        std::cout << "\n\n\tMENU PRINCIPAL" << std::endl;
        std::cout << "\t--------------" << std::endl;
        std::cout << "\n\t1. Nueva Partida" << std::endl;
        std::cout << "\t2. SALIR" << std::endl;

        std::cout << "\n\tIngrese una opcion: ";
        std::cin >> opcion;

        switch (opcion)
        {
        case 1:
            NuevaPartida();
            break;

        case 2:
            std::cout << "\n\tSaliendo del programa..." << std::endl;
            break;

        default:
            std::cout << "\n\tOpcion invalida. Por favor, seleccione una opcion valida." << std::endl;
        
        }
    } while (opcion != 2);
}

void NuevaPartida()
{
    int opcion;
    
    do
    {
        /*system("cls");*/

        std::cout << "\n\n\t\t\tELIJA UN PERSONAJE" << std::endl;
        std::cout << "\t\t\t------------------------" << std::endl;
        std::cout << "\n\t1. Caballero" << std::endl;
        std::cout << "\t2. Mago" << std::endl;
        std::cout << "\t3. Elfo" << std::endl;
        std::cout << "\t4. Volver al Menu Principal" << std::endl;

        std::cout << "\n\tIngrese una opcion: ";
        std::cin >> opcion;

        switch (opcion)
        {
        case 1:
            /*Caballero()*/;
            break;

        case 2:
            /*Mago()*/;
            break;

        case 3:
            /*Elfo()*/;
            break;

        case 4:
            Menu();
            break;

        default:
            std::cout << "\n\tOpcion invalida. Por favor, seleccione una opcion valida." << std::endl;

        }
    } while (opcion != 4);
}





