#ifndef MOBUISCENE_H
#define MOBUISCENE_H
#include <QGraphicsScene>
#include <QObject>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsEllipseItem>
#include "shape.h"
#include "circle.h"
#include "rectangle.h"
class MobUIScene:public QGraphicsScene
{
    Q_OBJECT
public:
    MobUIScene(QObject * parent=0);
    QGraphicsEllipseItem *elipe;
    QColor fill_color;
    QColor border_color;
    QPointF s;
    QPointF e;
    Shape shape_obj;
    Circle *Circle_obj;
    RectangleShape *Rect_obj;

signals:


protected:
  void mousePressEvent(QGraphicsSceneMouseEvent *event);
  void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
  void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

};

#endif // MOBUISCENE_H
