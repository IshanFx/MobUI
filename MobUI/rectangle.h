#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsItem>
#include "shape.h"
class RectangleShape:public QGraphicsItem,public Shape
{
public:
    RectangleShape();
    QRectF boundingRect() const;
    bool press;
    double height;
    double width;
    void paint(QPainter *paint,const QStyleOptionGraphicsItem *option ,QWidget *widget);
    QPointF po;
    QString col;
    QColor fillcolor;
    QColor borderColor;
};

#endif // RECTANGLE_H
