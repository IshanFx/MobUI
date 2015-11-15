#include "mobuiscene.h"


MobUIScene::MobUIScene( QObject *parent) : QGraphicsScene(parent)
{


}


void MobUIScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    s = event->scenePos();
}

void MobUIScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    e = event->scenePos();
}

void MobUIScene::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{

  if(shape_obj.shapeType=="circle"){

        Circle_obj = new Circle();
        Circle_obj->start_position = s;
        Circle_obj->end_position = e;
        Circle_obj->setFillColor(fill_color);
        addItem(Circle_obj);

  }
  if(shape_obj.shapeType=="rectangle"){

        Rect_obj = new RectangleShape();
        Rect_obj->start_position = s;
        Rect_obj->end_position = e;
        Rect_obj->setBorderColor(border_color);
        Rect_obj->setFillColor(fill_color);
        addItem(Rect_obj);
  }

  QGraphicsScene::mouseReleaseEvent(event);
}
