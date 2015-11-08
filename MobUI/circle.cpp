#include "circle.h"
#include <QGraphicsEllipseItem>
Circle::Circle()
{
    setFlag(ItemIsMovable);
}

QRectF Circle::boundingRect() const
{

      return QRectF(20,20,100,100);
}

void Circle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rec = boundingRect();
    QBrush brush(Qt::red);
    painter->setBrush(brush);
    painter->drawEllipse(100,100,100,100);
}

