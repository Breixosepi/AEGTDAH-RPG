#include "UI.hpp"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    app.setWindowIcon(QIcon(":/resource/image/imagenPrueba"));
    aegtdahrpg window;
    window.setWindowState(Qt::WindowFullScreen);
    window.show();
    return app.exec();
}
