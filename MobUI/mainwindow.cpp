#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QColorDialog>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    shape = new Shape();
    scene = new MobUIScene(this);
    ui->graphicsView->setScene(scene);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_13_clicked()
{



}

void MainWindow::getColor()
{

}

void MainWindow::on_btnFillColor_clicked()
{
    QColorDialog *dialog = new QColorDialog(this);
    col = dialog->getColor();
    scene->fill_color = col;
    //scene->fill_color = col;
    QVariant variant= col;
    QString colcode = variant.toString();
    ui->btnFillColor->setStyleSheet("QPushButton { background-color :"+colcode+" ; color : blue; }");
}


void MainWindow::on_btnBorderColor_clicked()
{
    QColorDialog *dialog = new QColorDialog(this);
    col =  dialog->getColor();
    scene->border_color =col;
    //scene->border_color=col;
    QVariant variant= col;
    QString colcode = variant.toString();
    ui->btnBorderColor->setStyleSheet("QPushButton { background-color :"+colcode+" ; color : white; }");
}

void MainWindow::on_btnItemRemove_clicked()
{
    foreach (QGraphicsItem *item, scene->selectedItems()) {
        scene->removeItem(item);
    }
}

void MainWindow::on_btnRotateLeft_clicked()
{
    itemRotateLeft();
}

void MainWindow::on_btnRotateRight_clicked()
{
   itemRotateRight();
}

void MainWindow::on_btnBringFront_clicked()
{
   itemMoveFront();
}

void MainWindow::on_btnBringBack_clicked()
{
    itemMoveBack();
}

void MainWindow::on_btnUpScale_clicked()
{
   itemScaleUp();
}

void MainWindow::on_btnDownScale_clicked()
{
    itemScaleDown();
}

void MainWindow::itemMoveBack()
{
    if(scene->selectedItems().isEmpty())
        return;

    QGraphicsItem *userSelectItem = scene->selectedItems().first();
    QList<QGraphicsItem *> overlapItems = userSelectItem->collidingItems();

    double zValue = 0;
    foreach (QGraphicsItem *item, overlapItems) {
        if (item->zValue() >= zValue)
                   zValue = item->zValue() + 0.1;
    }
    userSelectItem->setZValue(zValue);
}

void MainWindow::itemMoveFront()
{
    if(scene->selectedItems().isEmpty())
        return;

    QGraphicsItem *userSelectItem = scene->selectedItems().first();
    QList<QGraphicsItem *> overlapItems = userSelectItem->collidingItems();

    double zValue = 0;
    foreach (QGraphicsItem *item, overlapItems) {
        if (item->zValue() >= zValue)
                   zValue = item->zValue() + 0.1;
    }
    userSelectItem->setZValue(zValue);
}

void MainWindow::itemRotateLeft()
{
    qreal currentRotate = 0;
    foreach (QGraphicsItem *item, scene->selectedItems()) {
        currentRotate =  item->rotation();
        item->setRotation(currentRotate-1);
    }
    update();
}

void MainWindow::itemRotateRight()
{
    qreal currentRotate = 0;
    foreach (QGraphicsItem *item, scene->selectedItems()) {
        currentRotate =  item->rotation();

        item->setRotation(currentRotate+1);

    }
    update();
}

void MainWindow::itemScaleUp()
{
   qreal currentScale = 0;
   foreach (QGraphicsItem *item, scene->selectedItems()) {
      currentScale =  item->scale();
      item->setScale(currentScale+0.1);
   }
}

void MainWindow::itemScaleDown()
{
    qreal currentScale = 0;
    foreach (QGraphicsItem *item, scene->selectedItems()) {
       currentScale =  item->scale();
       item->setScale(currentScale - 0.1);
    }

}



void MainWindow::on_btnShapeRect_clicked()
{
    scene->shape_obj.shapeType = "rectangle";

}

void MainWindow::on_btnShapeOval_clicked()
{
    scene->shape_obj.shapeType = "circle";

}

void MainWindow::on_btnShapeText_clicked()
{
    scene->shape_obj.shapeType = "N";
}

void MainWindow::on_actionNew_triggered()
{
    scene->clear();
    ui->graphicsView->items().clear();
}

void MainWindow::on_BtnAddItem_clicked()
{
    scene->shape_obj.shapeType = "rectangle";

}
