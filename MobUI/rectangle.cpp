#include "rectangle.h"

RectangleShape::RectangleShape()
{

    press = false;
    height = 12;
    width = 12;
    setFlag(ItemIsMovable);
    setFlag(ItemIsSelectable);
}

QRectF RectangleShape::boundingRect() const
{

    return QRectF(start_position.x(),start_position.y(),end_position.x()-start_position.x(),end_position.y()-start_position.y());
}

void RectangleShape::paint(QPainter *paint,const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rec = boundingRect();
    QBrush brush(getFillColor());


    paint->fillRect(rec,brush);
    paint->drawRect(rec);
}
