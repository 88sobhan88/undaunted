#include "menu.h"
#include "ui_menu.h"

#include <QGuiApplication>
#include <QScreen>
#include <QLabel>



Menu::Menu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);

    QRect screenGeometry = QGuiApplication::primaryScreen()->geometry();
    int width = screenGeometry.width();
    int height = screenGeometry.height();

    QLabel *label = new QLabel(this);
    label->setGeometry(0, 0, width, height);

    QPixmap pixmap(":/new/prefix1/2.png");
    label->setPixmap(pixmap.scaled(label->size(), Qt::KeepAspectRatioByExpanding));
    label->setScaledContents(true);
    label->lower();

    this->showMaximized();
}

Menu::~Menu()
{
    delete ui;
}
