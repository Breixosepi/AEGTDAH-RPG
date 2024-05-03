#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_aegtdahrpg.h"

class aegtdahrpg : public QMainWindow
{
    Q_OBJECT

public:
    aegtdahrpg(QWidget *parent = nullptr);
    ~aegtdahrpg();
private slots:


private:
    Ui::aegtdahrpgClass ui;
};
