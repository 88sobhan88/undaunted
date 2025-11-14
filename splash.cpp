#include "splash.h"
#include "ui_splash.h"
#include "menu.h"

#include <QScreen>

Splash::Splash(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Splash)
{
    ui->setupUi(this);


    QRect screenGeometry = QGuiApplication::primaryScreen()->geometry();
    int width = screenGeometry.width();
    int height = screenGeometry.height();


    QLabel *label = new QLabel(this);
    label->setGeometry(0, 0, width, height);

    QPixmap pixmap(":/new/prefix1/1.jpg");
    label->setPixmap(pixmap.scaled(label->size(), Qt::KeepAspectRatioByExpanding));
    label->setScaledContents(true);
    label->lower();
    this->showMaximized();

}

Splash::~Splash()
{
    delete ui;
}

void Splash::on_pushButton_clicked()
{
    Menu *m = new Menu ;
    m ->show();
    m ->setWindowTitle("Menu");
}

