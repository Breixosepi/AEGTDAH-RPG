#include "UI.hpp"
#include "Widget.hpp" //talvez es ui_Widget.h

aegtdahrpg::aegtdahrpg(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

aegtdahrpg::~aegtdahrpg()
{}

void aegtdahrpg::on_exitBtn_clicked()
{
    close();
}

void aegtdahrpg::on_loadBtn_clicked()
{
    Widget widget;
    /*widget.setModal(true); Esta es la idea
    widget.exec();*/
    widget.show();

}

