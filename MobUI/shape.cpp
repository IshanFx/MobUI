#include "shape.h"

Shape::Shape()
{

    height_master=20;
    width_master = 20;
    shapeType = "rectangle";
}

void Shape::setFillColor(const QColor &fillColor)
{
    fillColor_master = fillColor;
}

QColor Shape::getFillColor() const
{
    return fillColor_master;
}

void Shape::setBorderColor(const QColor &borderColor)
{
    borderColor_master = borderColor;
}

QColor Shape::getBorderColor()const
{
    return borderColor_master;
}

void Shape::setWidth(double width)
{
    width_master = width;

}

double Shape::getWidth() const
{
    return width_master;
}

void Shape::setHeight(double height)
{
    height_master = height;
}

double Shape::getHeight() const
{
    return height_master;
}

