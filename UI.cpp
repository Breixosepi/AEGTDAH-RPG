#include "UI.hpp"
#include <Qprocess>

aegtdahrpg::aegtdahrpg(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

aegtdahrpg::~aegtdahrpg()
{}

void aegtdahrpg::on_exitBtn_clicked()
{
    this->close();
}

void aegtdahrpg::on_loadBtn_clicked()
{
    this->hide();
    widget = new Widget(this);
    widget->showFullScreen();
}

void aegtdahrpg::keyPressEvent(QKeyEvent* event)
{
    if (event->key() == Qt::Key_A )
    {
        int x = ui.beginBtn->x();
        int y = ui.beginBtn->y();
        ui.beginBtn->move(QPoint(x-3,y));
    }

    if (event->key() == Qt::Key_D)
    {
        int x = ui.beginBtn->x();
        int y = ui.beginBtn->y();
        ui.beginBtn->move(QPoint(x + 3, y));
    }

    if (event->key() == Qt::Key_S )
    {
        int x = ui.beginBtn->x();
        int y = ui.beginBtn->y();
        ui.beginBtn->move(QPoint(x, y + 3));
    }

    if (event->key() == Qt::Key_W )
    {
        int x = ui.beginBtn->x();
        int y = ui.beginBtn->y();
        ui.beginBtn->move(QPoint(x, y - 3));
    }

}

