#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QColorDialog>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::sendItemFront()
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

void MainWindow::sendItemBack()
{
    if(scene->selectedItems().isEmpty())
        return;

    QGraphicsItem *userSelectItem = scene->selectedItems().first();
    QList<QGraphicsItem *> overlapItems = userSelectItem->collidingItems();

    double zValue = 0;
    foreach (QGraphicsItem *item, overlapItems) {
        if (item->zValue() >= zValue)
                   zValue = item->zValue() - 0.1;
    }
    userSelectItem->setZValue(zValue);

}

void MainWindow::rotateItemLeft()
{
    qreal currentRotate = 0;
    foreach (QGraphicsItem *item, scene->selectedItems()) {
        currentRotate =  item->rotation();
        item->setRotation(currentRotate-1);
    }
    update();
}

void MainWindow::rotateItemRight()
{
    qreal currentRotate = 0;
    foreach (QGraphicsItem *item, scene->selectedItems()) {
        currentRotate =  item->rotation();

        item->setRotation(currentRotate+1);

    }
    update();
}

void MainWindow::increaceItemScale()
{
     qreal currentScale = 0;
    foreach (QGraphicsItem *item, scene->selectedItems()) {
       currentScale =  item->scale();
       item->setScale(currentScale+0.1);
    }
}

void MainWindow::on_pushButton_13_clicked()
{
    RectangleShape *rec = new RectangleShape();
    QString width = ui->shapeWidth->text();
    QString height = ui->shapeHeight->text();
    QVariant v1 = width;
    QVariant v2 = height;

    rec->width = v1.toDouble();
    rec->height = v2.toDouble();
    rec->fillcolor = col;
    scene->addItem(rec);


}

void MainWindow::getColor()
{

}

void MainWindow::on_btnFillColor_clicked()
{
    QColorDialog *dialog = new QColorDialog(this);
    col =  dialog->getColor();
    QVariant variant= col;
    QString colcode = variant.toString();
    ui->btnFillColor->setStyleSheet("QPushButton { background-color :"+colcode+" ; color : blue; }");
}


void MainWindow::on_btnBorderColor_clicked()
{
    QColorDialog *dialog = new QColorDialog(this);
    col =  dialog->getColor();
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
    rotateItemLeft();
}

void MainWindow::on_btnRotateRight_clicked()
{
   rotateItemRight();
}

void MainWindow::on_btnBringFront_clicked()
{
   sendItemFront();
}

void MainWindow::on_btnBringBack_clicked()
{
    sendItemBack();
}

void MainWindow::on_btnUpScale_clicked()
{
    increaceItemScale();
}
