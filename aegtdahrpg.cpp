#include "source/lib/include/Player.hpp"
#include "source/lib/include/Item.hpp"
#include "source/lib/include/Inventory.hpp"
#include "source/lib/include/Utilities.hpp"

int main()
{
    Printpj pj(10,10);
    pj.printPj();
    pj.CursorHide();
    pj.printLimit();

    bool gameOver = false;
    while (!gameOver)
    {
        pj.movePj();
        Sleep(30);
    }
}
