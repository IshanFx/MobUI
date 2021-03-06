#ifndef CIRCLE_H
#define CIRCLE_H
#include <QGraphicsItem>
#include <QGraphicsEllipseItem>
#include <QBrush>
#include <QPainter>
#include "shape.h"
class Circle:public Shape,public QGraphicsEllipseItem
{
public:
    Circle();
    QRectF boundingRect() const;

    // QGraphicsItem interface
public:
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

};

#endif // CIRCLE_H
