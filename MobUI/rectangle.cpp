#include "rectangle.h"

RectangleShape::RectangleShape()
{

    press = false;
    height = 0;
    width = 0;
    setFlag(ItemIsMovable);
    setFlag(ItemIsSelectable);
}

QRectF RectangleShape::boundingRect() const
{

    return QRectF(0,0,height,width);
}

void RectangleShape::paint(QPainter *paint,const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    QRectF rec = boundingRect();
    QBrush brush(fillcolor);

    if(press){
        brush.setColor(Qt::red);
    }
    else{
        brush.setColor(fillcolor);
    }
    paint->fillRect(rec,brush);
    paint->drawRect(rec);
}
