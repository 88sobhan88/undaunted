#ifndef SPLASH_H
#define SPLASH_H

#include <QMainWindow>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QPixmap>

namespace Ui {
class Splash;
}

class Splash : public QMainWindow
{
    Q_OBJECT

public:
    explicit Splash(QWidget *parent = nullptr);
    ~Splash();

signals:
    void playClicked();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Splash *ui;
    QLabel *imageLabel;
    QPushButton *playButton;
};

#endif // SPLASH_H
