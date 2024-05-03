#include "aegtdahrpg.hpp"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    aegtdahrpg w;
    w.show();
    return a.exec();
}
