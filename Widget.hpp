#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Widget.h"

class Widget : public QMainWindow
{
    Q_OBJECT

public:
    Widget(QWidget* parent = nullptr);
    ~Widget();
private slots:
    void on_returnBtn_clicked();

private:
    Ui::Widget ui;
};