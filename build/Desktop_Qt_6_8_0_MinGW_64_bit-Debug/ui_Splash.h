/********************************************************************************
** Form generated from reading UI file 'splash.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPLASH_H
#define UI_SPLASH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Splash
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Splash)
    {
        if (Splash->objectName().isEmpty())
            Splash->setObjectName("Splash");
        Splash->resize(1263, 782);
        centralwidget = new QWidget(Splash);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(732, 618, 101, 51));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        Splash->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Splash);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1263, 26));
        Splash->setMenuBar(menubar);
        statusbar = new QStatusBar(Splash);
        statusbar->setObjectName("statusbar");
        Splash->setStatusBar(statusbar);

        retranslateUi(Splash);
        QObject::connect(pushButton, &QPushButton::clicked, Splash, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(Splash);
    } // setupUi

    void retranslateUi(QMainWindow *Splash)
    {
        Splash->setWindowTitle(QCoreApplication::translate("Splash", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("Splash", "Play", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Splash: public Ui_Splash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPLASH_H
