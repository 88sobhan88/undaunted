/********************************************************************************
** Form generated from reading UI file 'boardwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOARDWIDGET_H
#define UI_BOARDWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BoardWidget
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BoardWidget)
    {
        if (BoardWidget->objectName().isEmpty())
            BoardWidget->setObjectName("BoardWidget");
        BoardWidget->resize(800, 600);
        centralwidget = new QWidget(BoardWidget);
        centralwidget->setObjectName("centralwidget");
        BoardWidget->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BoardWidget);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        BoardWidget->setMenuBar(menubar);
        statusbar = new QStatusBar(BoardWidget);
        statusbar->setObjectName("statusbar");
        BoardWidget->setStatusBar(statusbar);

        retranslateUi(BoardWidget);

        QMetaObject::connectSlotsByName(BoardWidget);
    } // setupUi

    void retranslateUi(QMainWindow *BoardWidget)
    {
        BoardWidget->setWindowTitle(QCoreApplication::translate("BoardWidget", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BoardWidget: public Ui_BoardWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOARDWIDGET_H
