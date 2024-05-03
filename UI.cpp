#include "UI.hpp"

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

