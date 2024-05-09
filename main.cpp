#include "UI.hpp"
#include <QtWidgets/QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <pj.hpp>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    QGraphicsScene* scene = new QGraphicsScene();
    Pj* rect = new Pj();
    rect->setRect(0,0,100,100);
    scene->addItem(rect);
    rect->setFlag(QGraphicsItem::ItemIsFocusable);
    rect->setFocus();
    app.setWindowIcon(QIcon(":/resource/image/imagenPrueba"));
    QGraphicsView* view = new QGraphicsView(scene);
    view->show();
    //aegtdahrpg window;
    //window.setWindowState(Qt::WindowFullScreen);
    //window.show();

    return app.exec();
}
