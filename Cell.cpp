#include "cell.h"
#include <QVector>
#include <QPointF>
#include <QPolygonF>
#include <QBrush>
#include <QPen>

Cell::Cell(int width, int height, QGraphicsItem *parent)
    : QGraphicsPolygonItem(parent), textItem(nullptr)
{
    QVector<QPointF> rectPoints;
    rectPoints << QPointF(0,0) << QPointF(width,0)
               << QPointF(width,height) << QPointF(0,height);

    QPolygonF rectangle(rectPoints);
    setPolygon(rectangle);

    setBrush(QBrush(Qt::lightGray));
    setPen(QPen(Qt::black));
}

void Cell::setLabel(const QString &label) {
    if (!textItem) {
        textItem = new QGraphicsTextItem(this);
        textItem->setDefaultTextColor(Qt::black);
    }
    textItem->setPlainText(label);
    QRectF br = boundingRect();
    textItem->setPos(br.center().x() - 15, br.center().y() - 10);
}
