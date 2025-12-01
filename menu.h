#ifndef MENU_H
#define MENU_H

#include "Cell.h"          // اضافه شد


#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QDialog>
#include <QComboBox>

namespace Ui {
class Menu;
}

class Menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

private slots:
    void validatePlayers();
    void openMapDialog();


private:
    Ui::Menu *ui;

    QLineEdit *player1Edit;
    QLineEdit *player2Edit;
    QPushButton *confirmButton;
    QLabel *infoLabel;

    bool isValidName(const QString &name);
};

#endif
