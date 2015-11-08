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

    QBrush redBrush(Qt::red);
    QPen redPen(Qt::red);
    redPen.setWidth(10);

   // elipe = scene->addEllipse(10,10,100,100,redPen,redBrush);
}

MainWindow::~MainWindow()
{
    delete ui;
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
    ui->btnFillColor->setStyleSheet("QPushButton { background-color :"+colcode+" ; color : blue; }");
}

void MainWindow::on_btnItemRemove_clicked()
{
    foreach (QGraphicsItem *item, scene->selectedItems()) {
        scene->removeItem(item);
    }
}

void MainWindow::on_btnRotateLeft_clicked()
{
    foreach (QGraphicsItem *item, scene->selectedItems()) {
        item->setRotation(1);
    }
    update();
}

void MainWindow::on_btnRotateRight_clicked()
{
    foreach (QGraphicsItem *item, scene->selectedItems()) {
        item->setRotation(-1);
    }
    update();
}
