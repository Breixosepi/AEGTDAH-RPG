#include "UI.hpp"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    aegtdahrpg window;
    window.show();
    return app.exec();
}
