#ifndef CELL_H
#define CELL_H

#include <QGraphicsPolygonItem>
#include <QGraphicsTextItem>

class Cell : public QGraphicsPolygonItem {
public:
    Cell(int width = 60, int height = 40, QGraphicsItem *parent = nullptr);
    void setLabel(const QString &label);

private:
    QGraphicsTextItem* textItem;
};

#endif
