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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_aegtdahrpgClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *aegtdahrpgClass)
    {
        if (aegtdahrpgClass->objectName().isEmpty())
            aegtdahrpgClass->setObjectName("aegtdahrpgClass");
        aegtdahrpgClass->resize(600, 400);
        menuBar = new QMenuBar(aegtdahrpgClass);
        menuBar->setObjectName("menuBar");
        aegtdahrpgClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(aegtdahrpgClass);
        mainToolBar->setObjectName("mainToolBar");
        aegtdahrpgClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(aegtdahrpgClass);
        centralWidget->setObjectName("centralWidget");
        aegtdahrpgClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(aegtdahrpgClass);
        statusBar->setObjectName("statusBar");
        aegtdahrpgClass->setStatusBar(statusBar);

        retranslateUi(aegtdahrpgClass);

        QMetaObject::connectSlotsByName(aegtdahrpgClass);
    } // setupUi

    void retranslateUi(QMainWindow *aegtdahrpgClass)
    {
        aegtdahrpgClass->setWindowTitle(QCoreApplication::translate("aegtdahrpgClass", "aegtdahrpg", nullptr));
    } // retranslateUi

};

namespace Ui {
    class aegtdahrpgClass: public Ui_aegtdahrpgClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AEGTDAHRPG_H
