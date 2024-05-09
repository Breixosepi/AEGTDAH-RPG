#include "UI.hpp"
#include "Widget.hpp"
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
    close();
}

void aegtdahrpg::on_loadBtn_clicked()
{
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}

void aegtdahrpg::KeyPressEvent(QKeyEvent* event)
{

}

