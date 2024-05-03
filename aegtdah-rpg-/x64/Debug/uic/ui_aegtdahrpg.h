/********************************************************************************
** Form generated from reading UI file 'aegtdahrpg.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AEGTDAHRPG_H
#define UI_AEGTDAHRPG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_aegtdahrpgClass
{
public:
    QWidget *centralWidget;
    QPushButton *beginBtn;
    QPushButton *loadBtn;
    QPushButton *exitBtn;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *aegtdahrpgClass)
    {
        if (aegtdahrpgClass->objectName().isEmpty())
            aegtdahrpgClass->setObjectName("aegtdahrpgClass");
        aegtdahrpgClass->resize(478, 341);
        centralWidget = new QWidget(aegtdahrpgClass);
        centralWidget->setObjectName("centralWidget");
        beginBtn = new QPushButton(centralWidget);
        beginBtn->setObjectName("beginBtn");
        beginBtn->setGeometry(QRect(250, 60, 80, 24));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(12);
        font.setBold(true);
        beginBtn->setFont(font);
        beginBtn->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        loadBtn = new QPushButton(centralWidget);
        loadBtn->setObjectName("loadBtn");
        loadBtn->setGeometry(QRect(250, 150, 80, 24));
        loadBtn->setFont(font);
        loadBtn->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        exitBtn = new QPushButton(centralWidget);
        exitBtn->setObjectName("exitBtn");
        exitBtn->setGeometry(QRect(250, 240, 80, 24));
        exitBtn->setFont(font);
        exitBtn->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        aegtdahrpgClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(aegtdahrpgClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 478, 21));
        aegtdahrpgClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(aegtdahrpgClass);
        statusBar->setObjectName("statusBar");
        aegtdahrpgClass->setStatusBar(statusBar);

        retranslateUi(aegtdahrpgClass);

        QMetaObject::connectSlotsByName(aegtdahrpgClass);
    } // setupUi

    void retranslateUi(QMainWindow *aegtdahrpgClass)
    {
        aegtdahrpgClass->setWindowTitle(QCoreApplication::translate("aegtdahrpgClass", "aegtdahrpg", nullptr));
        beginBtn->setText(QCoreApplication::translate("aegtdahrpgClass", "Inicio", nullptr));
        loadBtn->setText(QCoreApplication::translate("aegtdahrpgClass", "Cargar", nullptr));
        exitBtn->setText(QCoreApplication::translate("aegtdahrpgClass", "Salir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class aegtdahrpgClass: public Ui_aegtdahrpgClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AEGTDAHRPG_H
