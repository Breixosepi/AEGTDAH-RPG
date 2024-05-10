#include "Widget.hpp"

Widget::Widget(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

Widget::~Widget()
{}

void Widget::keyPressEvent(QKeyEvent * event)
{
    if (event->key() == Qt::Key_A)
    {
        int x = ui.pjLbl->x();
        int y = ui.pjLbl->y();
        ui.pjLbl->move(QPoint(x - 3, y));
    }

    if (event->key() == Qt::Key_D)
    {
        int x = ui.pjLbl->x();
        int y = ui.pjLbl->y();
        ui.pjLbl->move(QPoint(x + 3, y));
    }

    if (event->key() == Qt::Key_S)
    {
        int x = ui.pjLbl->x();
        int y = ui.pjLbl->y();
        ui.pjLbl->move(QPoint(x, y + 3));
    }

    if (event->key() == Qt::Key_W)
    {
        int x = ui.pjLbl->x();
        int y = ui.pjLbl->y();
        ui.pjLbl->move(QPoint(x, y - 3));
    }
}

void Widget::on_returnBtn_clicked()
{
    close();
}