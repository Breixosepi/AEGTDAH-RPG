#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_aegtdahrpg.h"
#include <QGraphicsRectItem>
#include "Widget.hpp"
#include <QPixmap> 
#include <QKeyEvent>


class aegtdahrpg : public QMainWindow
{
    Q_OBJECT

public:
    aegtdahrpg(QWidget *parent = nullptr);
    ~aegtdahrpg();
private slots:
    void on_exitBtn_clicked();
    void on_loadBtn_clicked();
    void keyPressEvent(QKeyEvent* event);


private:
    Ui::aegtdahrpgClass ui;
    Widget* widget;
};
