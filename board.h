#ifndef BOARD_H
#define BOARD_H

#include <QGraphicsScene>
#include <QList>
#include "cell.h"

class Board {
public:
    Board();
    QGraphicsScene* getScene() { return scene; }

    void createMap(int rows, int oddCols, int evenCols, int cellWidth = 40, int cellHeight = 60);

private:
    QGraphicsScene* scene;
    QList<Cell*> cells;
};

#endif
