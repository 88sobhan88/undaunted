#include "menu.h"
#include "ui_menu.h"

#include <QGuiApplication>
#include <QScreen>
#include <QLabel>
#include <QMessageBox>
#include <QVBoxLayout>
#include <QRegularExpression>

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

    QPixmap pixmap(":/4.jpg");
    label->setPixmap(pixmap.scaled(label->size(), Qt::KeepAspectRatioByExpanding));
    label->setScaledContents(true);
    label->lower();

    this->showMaximized();

    player1Edit = new QLineEdit(this);
    player2Edit = new QLineEdit(this);

    player1Edit->setPlaceholderText("Enter Player 1 Name");
    player2Edit->setPlaceholderText("Enter Player 2 Name");

    player1Edit->setStyleSheet("QLineEdit { background-color: #E0F7FA; border: 2px solid #00838F; border-radius: 6px; padding: 6px; }");
    player2Edit->setStyleSheet("QLineEdit { background-color: #E0F7FA; border: 2px solid #00838F; border-radius: 6px; padding: 6px; }");

    confirmButton = new QPushButton("Confirm", this);
    confirmButton->setStyleSheet(
        "QPushButton { "
        "background-color: #4CAF50; "
        "color: white; "
        "border: none; "
        "border-radius: 8px; "
        "padding: 10px 20px; "
        "font-size: 16px; "
        "} "
        "QPushButton:hover { "
        "background-color: #45A049; "
        "}"
        );

    infoLabel = new QLabel("Please enter both player names:", this);

    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(infoLabel);
    layout->addWidget(player1Edit);
    layout->addWidget(player2Edit);
    layout->addWidget(confirmButton);

    QWidget *central = new QWidget(this);
    central->setLayout(layout);
    setCentralWidget(central);

    connect(confirmButton, &QPushButton::clicked, this, &Menu::validatePlayers);

}

Menu::~Menu()
{
    delete ui;
}

bool Menu::isValidName(const QString &name)
{
    if (name.length() < 8) return false;

    if (!name[0].isLetter()) return false;

    QRegularExpression hasDigit("[0-9]");
    if (!name.contains(hasDigit)) return false;

    QRegularExpression hasSpecial("[^a-zA-Z0-9]");
    if (!name.contains(hasSpecial)) return false;

    QRegularExpression hasLower("[a-z]");
    QRegularExpression hasUpper("[A-Z]");
    if (!name.contains(hasLower) || !name.contains(hasUpper)) return false;

    return true;
}
void Menu::validatePlayers()
{
    QString p1 = player1Edit->text();
    QString p2 = player2Edit->text();

    if (!isValidName(p1)) {
        QMessageBox::warning(this, "Invalid Name", "Player 1 name is invalid!");
        return;
    }
    if (!isValidName(p2)) {
        QMessageBox::warning(this, "Invalid Name", "Player 2 name is invalid!");
        return;
    }

    QMessageBox::information(this, "Success", "Both player names are valid!");
}
