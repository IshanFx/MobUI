#ifndef SHAPE_H
#define SHAPE_H
#include <QColor>
#include <QPointF>
class Shape
{
public:
    Shape();
    double height_master;
    double width_master;
    QString shapeType;
    QColor fillColor_master;
    QColor borderColor_master;
    QPointF start_position;
    QPointF end_position;

    void setFillColor(const QColor &fillColor );
     QColor getFillColor()const;
    void setBorderColor(const QColor &borderColor);
    QColor getBorderColor()const;

    void setWidth(double width);
    double getWidth()const;
    void setHeight(double height);
    double getHeight()const;
};

#endif // SHAPE_H
