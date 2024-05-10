#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Widget.h"
#include <QkeyEvent>

class Widget : public QMainWindow
{
    Q_OBJECT

public:
    Widget(QWidget* parent = nullptr);
    ~Widget();
private slots:
    void on_returnBtn_clicked();
    void keyPressEvent(QKeyEvent* event);

private:

    Ui::Widget ui;
    QPixmap state;
    QPixmap left;
    QPixmap right;
    QPixmap up;
    QPixmap down;

};