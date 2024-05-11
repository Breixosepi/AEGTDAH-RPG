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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
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
    QLabel *pjLbl;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *aegtdahrpgClass)
    {
        if (aegtdahrpgClass->objectName().isEmpty())
            aegtdahrpgClass->setObjectName("aegtdahrpgClass");
        aegtdahrpgClass->resize(606, 369);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(aegtdahrpgClass->sizePolicy().hasHeightForWidth());
        aegtdahrpgClass->setSizePolicy(sizePolicy);
        aegtdahrpgClass->setMinimumSize(QSize(606, 369));
        aegtdahrpgClass->setMaximumSize(QSize(606, 369));
        centralWidget = new QWidget(aegtdahrpgClass);
        centralWidget->setObjectName("centralWidget");
        beginBtn = new QPushButton(centralWidget);
        beginBtn->setObjectName("beginBtn");
        beginBtn->setGeometry(QRect(300, 70, 80, 25));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(beginBtn->sizePolicy().hasHeightForWidth());
        beginBtn->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(12);
        font.setBold(true);
        beginBtn->setFont(font);
        beginBtn->setCursor(QCursor(Qt::ArrowCursor));
        beginBtn->setContextMenuPolicy(Qt::ContextMenuPolicy::NoContextMenu);
        beginBtn->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        loadBtn = new QPushButton(centralWidget);
        loadBtn->setObjectName("loadBtn");
        loadBtn->setGeometry(QRect(300, 160, 80, 25));
        sizePolicy1.setHeightForWidth(loadBtn->sizePolicy().hasHeightForWidth());
        loadBtn->setSizePolicy(sizePolicy1);
        loadBtn->setFont(font);
        loadBtn->setContextMenuPolicy(Qt::ContextMenuPolicy::NoContextMenu);
        exitBtn = new QPushButton(centralWidget);
        exitBtn->setObjectName("exitBtn");
        exitBtn->setGeometry(QRect(300, 250, 80, 25));
        exitBtn->setFont(font);
        exitBtn->setContextMenuPolicy(Qt::ContextMenuPolicy::NoContextMenu);
        pjLbl = new QLabel(centralWidget);
        pjLbl->setObjectName("pjLbl");
        pjLbl->setGeometry(QRect(120, 10, 521, 311));
        pjLbl->setPixmap(QPixmap(QString::fromUtf8(":/resource/image/imagenPrueba.ico")));
        pjLbl->setScaledContents(false);
        pjLbl->setOpenExternalLinks(false);
        aegtdahrpgClass->setCentralWidget(centralWidget);
        pjLbl->raise();
        beginBtn->raise();
        loadBtn->raise();
        exitBtn->raise();
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
        pjLbl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class aegtdahrpgClass: public Ui_aegtdahrpgClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AEGTDAHRPG_H
