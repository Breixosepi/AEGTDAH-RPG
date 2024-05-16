#include "../include/Utilities.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include "../include/Player.hpp"
#include "../include/Enemy.hpp"
#include "../include/Item.hpp"
#include "../include/Inventory.hpp"

void NuevaPartida();
bool IsColliding(std::pair<int,int>player, std::pair<int, int>enemy);
void clear()
{
    Printpj screen(10,10);
    screen.Gotoxy(3,35);
}
void Print(Player &player)
{

    int x = rand() % 90 + 3;
    int y = rand() % 25 + 4;
    Enemy enemy(x,y);
    Printpj pj(10, 10);
    pj.printPj();
    pj.CursorHide();
    enemy.print();
    Inventory inven;
    Item item1("Explosivo"," 4 damage",ItemType::Explosive);
    Item item2("Pocion de vida","Hp + 4",ItemType::HpPotion);
    Item item3("Pocion de mana","Mana + 2",ItemType::MpPotion);
    Item item4("Pocion de fuerza", "Fuerza + 2", ItemType::StrPotion);
    inven.addItem(item1);
    inven.addItem(item2);
    inven.addItem(item3);
    inven.addItem(item4);
    int item1_amount = 1;
    int item2_amount = 1;
    int item3_amount = 1;
    int item4_amount = 1;
    pj.Gotoxy(3,35);
    inven.printInventory();
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
        if (IsColliding(pj.GetCoordinates(), enemy.Getcoordinate()))
        {
            pj.printPj(3,28);
            enemy.print(92,5);
            bool inCombat = (enemy.getCurrentHp()>0 && player.getCurrentHP()>0);
            bool isPlayerTurn = true;
            while (inCombat)
            {
                if (!isPlayerTurn)
                {
                    enemy.atack(player);
                    isPlayerTurn = true;
                    player.printClass();
                    inCombat = (enemy.getCurrentHp() > 0 && player.getCurrentHP() > 0);
                    continue;
                }
                tecla = _getch();
                if (_kbhit)
                {
                    if (tecla == '1') // explosion
                    {
                        if (inven.getItemAmount(item1) == 0)
                        {
                            enemy.takeDamage((rand() % player.getStrength()) + 1);
                        }
                        else
                        {
                            item1.Consume(player);
                            inven.removeItem(item1, 1);
                            enemy.takeDamage(15);
                        }
                        
                    }
                    else if (tecla == '2') // pocion de vida
                    {
                        if (inven.getItemAmount(item2) == 0)
                        {
                            enemy.takeDamage((rand() % player.getStrength()) + 1);
                        }
                        else
                        {
                            item2.Consume(player);
                            inven.removeItem(item2,1);
                        }
                    }
                    else if (tecla == '3') // pocion de mana
                    {
                        if (inven.getItemAmount(item3) == 0)
                        {
                            enemy.takeDamage((rand() % player.getStrength()) + 1);
                        }
                        else
                        {
                            item3.Consume(player);
                            inven.removeItem(item3,1);
                        }
                    }
                    else if (tecla == '4') // fuerza
                    {
                        if (inven.getItemAmount(item4) == 0)
                        {
                            enemy.takeDamage((rand() % player.getStrength()) + 1);
                        }
                        else
                        {
                            item4.Consume(player);
                            inven.removeItem(item4,1);
                        }
                    }
                    else if (tecla == 'x') 
                    {
                        if (player.getMana() < 3)
                        {
                            enemy.takeDamage((rand() % player.getStrength()) + 1);
                        }
                        else
                        {
                            enemy.takeDamage((player.getIntellect() / 2) + 1);
                            player.increaseMana(-3);
                        }
                    }
                    else if(tecla == 'c')
                    {
                       enemy.takeDamage((rand() % player.getStrength()) + 1);
                    }
                    else
                    {
                        continue;
                    }

                    isPlayerTurn = false;
                    inCombat = (enemy.getCurrentHp() > 0 && player.getCurrentHP() > 0);
                    player.printClass();
                    clear();
                    pj.Gotoxy(3, 35);
                    inven.printInventory();

                }
            }
            if (player.getCurrentHP() == 0)
            {
                gameOver = true;
            }
            else
            {
                pj.cleanPj(92,5);
                pj.cleanPj(3,28);
                enemy = Enemy(rand() % 90 + 3, rand() % 25 + 4);
                enemy.print();
                player.gainEXP(10);
                player.printClass();
            }
        }
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
    printPj(x,y);
}

void Printpj::printPj(int _x, int _y)
{
    cleanPj();
    Gotoxy(_x, _y);
    std::cout << "  O" << std::endl;
    Gotoxy(_x, _y + 1);
    std::cout << " \\|/" << std::endl;
    Gotoxy(_x, _y + 2);
    std::cout << "  | " << std::endl;
    Gotoxy(_x, _y + 3);
    std::cout << " / \\ " << std::endl;
}

void Printpj::cleanPj()
{
    cleanPj(x,y);
}

void Printpj::cleanPj(int _x, int _y)
{
    Gotoxy(_x, _y - 1);
    std::cout << "     " << std::endl;
    Gotoxy(_x, _y);
    std::cout << "     " << std::endl;
    Gotoxy(_x, _y + 1);
    std::cout << "      " << std::endl;
    Gotoxy(_x, _y + 2);
    std::cout << "      " << std::endl;
    Gotoxy(_x, _y + 3);
    std::cout << "     " << std::endl;
    Gotoxy(_x, _y + 4);
    std::cout << "     " << std::endl;
}

void Printpj::movePj()
{
    if (_kbhit())
    {
        char tecla = _getch();
        printPj();
        if (tecla == left && x > 3 )   --x;
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
        Gotoxy(i, 38);  printf("%c", 205);
    }
    for (int i = 4; i < 38; i++)
    {
        Gotoxy(2, i);   printf("%c", 186);
        if (i<33)
        {
            Gotoxy(98, i); printf("%c", 186);
        }
        Gotoxy(130,i);  printf("%c",186);
    }

    Gotoxy(2, 3);   printf("%c", 201);
    Gotoxy(2, 33);  printf("%c", 204);
    Gotoxy(2, 38);  printf("%c", 200);
    Gotoxy(98, 3); printf("%c", 203);
    Gotoxy(98, 33);printf("%c", 202);
    Gotoxy(130, 3); printf("%c", 187);
    Gotoxy(130, 33); printf("%c", 188);
    Gotoxy(130, 38); printf("%c", 188);
}

std::pair<int, int> Printpj::GetCoordinates()
{
    return std::make_pair(x,y);
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
    int opcion;
    Player knight(new Warrior());
    Player mage(new Mage());
    Player elf(new Elf());
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
            Print(knight);
            opcion = 4;
            system("cls");
            std::cout << "Moriste" << std::endl;
            _getch();
            break;
        case 2:
            system("cls");
            mage.printClass();
            Print(mage);
            opcion = 4;
            system("cls");
            _getch();
            break;

        case 3:
            system("cls");
            elf.printClass();
            Print(elf);
            opcion = 4;
            system("cls");
            _getch();
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

bool IsColliding(std::pair<int, int> player, std::pair<int, int> enemy)
{ 

    int x = player.first;
    int y = player.second;
    int eneX = enemy.first;
    int eneY = enemy.second;
    bool isCollidingX = (x >= eneX - 3 && x <= eneX + 3);
    bool isCollidingY = (y >= eneY - 2 && y <= eneY + 2);
    return isCollidingX && isCollidingY;
}






