/********************************************************************************
** Form generated from reading UI file 'rectboard.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECTBOARD_H
#define UI_RECTBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RectBoard
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RectBoard)
    {
        if (RectBoard->objectName().isEmpty())
            RectBoard->setObjectName("RectBoard");
        RectBoard->resize(800, 600);
        centralwidget = new QWidget(RectBoard);
        centralwidget->setObjectName("centralwidget");
        RectBoard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RectBoard);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        RectBoard->setMenuBar(menubar);
        statusbar = new QStatusBar(RectBoard);
        statusbar->setObjectName("statusbar");
        RectBoard->setStatusBar(statusbar);

        retranslateUi(RectBoard);

        QMetaObject::connectSlotsByName(RectBoard);
    } // setupUi

    void retranslateUi(QMainWindow *RectBoard)
    {
        RectBoard->setWindowTitle(QCoreApplication::translate("RectBoard", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RectBoard: public Ui_RectBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECTBOARD_H
