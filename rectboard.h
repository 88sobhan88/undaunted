#ifndef RECTBOARD_H
#define RECTBOARD_H

#include <QMainWindow>
#include <QGraphicsView>
#include "board.h"

namespace Ui {
class RectBoard;
}

class RectBoard : public QMainWindow
{
    Q_OBJECT

public:
    explicit RectBoard(int rows, int oddCols, int evenCols, QWidget *parent = nullptr);
    ~RectBoard();

private:
    Ui::RectBoard *ui;
    Board* board;
    QGraphicsView* view;
};

#endif
