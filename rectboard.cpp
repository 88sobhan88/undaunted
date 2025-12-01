#include "rectboard.h"
#include "ui_rectboard.h"

RectBoard::RectBoard(int rows, int oddCols, int evenCols, QWidget *parent)
    : QMainWindow(parent), ui(new Ui::RectBoard)
{
    ui->setupUi(this);

    board = new Board();
    board->createMap(rows, oddCols, evenCols);

    view = new QGraphicsView(board->getScene(), this);
    setCentralWidget(view);
    setWindowTitle("Game Board");
    showMaximized();
}

RectBoard::~RectBoard()
{
    delete ui;
    delete board;
}
