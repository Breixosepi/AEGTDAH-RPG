#include "Widget.hpp"

Widget::Widget(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

Widget::~Widget()
{}

void Widget::on_returnBtn_clicked()
{
    close();
}