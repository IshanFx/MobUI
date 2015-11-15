#include "circle.h"
#include <QGraphicsEllipseItem>
Circle::Circle()
{
    setFlag(ItemIsMovable);
    setFlag(ItemIsSelectable);
}

QRectF Circle::boundingRect() const
{

      return QRectF(start_position.x(),start_position.y(),end_position.x()-start_position.x(),end_position.y()-start_position.y());

}

void Circle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rec = boundingRect();
    QBrush brush(getFillColor());
    painter->setBrush(brush);
    painter->drawEllipse(start_position.x(),start_position.y(),end_position.x()-start_position.x(),end_position.y()-start_position.y());
}

