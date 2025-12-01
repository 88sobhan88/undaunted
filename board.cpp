#include "board.h"

Board::Board() {
    scene = new QGraphicsScene();
}

void Board::createMap(int rows, int oddCols, int evenCols, int cellWidth, int cellHeight) {
    for (int r = 0; r < rows; ++r) {
        int cols = (r % 2 == 0) ? oddCols : evenCols;
        int offset = 0;

        if (r % 2 == 1) {
            offset = ((oddCols - evenCols) * cellWidth) / 2;
        }

        for (int c = 0; c < cols; ++c) {
            Cell* cell = new Cell(cellWidth, cellHeight);
            cell->setPos(offset + c * cellWidth, r * cellHeight);
            scene->addItem(cell);

            QString prefix = (r % 2 == 0) ? "A" : "B";

            int number = c % 3;

            QString label = QString("%1%2").arg(prefix).arg(number);

            cell->setLabel(label);
        }
    }
}
