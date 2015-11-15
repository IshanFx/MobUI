#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QtCore>
#include <QtGui>
#include "mobuiscene.h"
#include "shape.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_pushButton_13_clicked();

    void on_btnFillColor_clicked();

    void on_btnBorderColor_clicked();

    void on_btnItemRemove_clicked();

    void on_btnRotateLeft_clicked();

    void on_btnRotateRight_clicked();

    void on_btnBringFront_clicked();

    void on_btnBringBack_clicked();

    void on_btnUpScale_clicked();

    void on_btnDownScale_clicked();

    void on_btnShapeRect_clicked();

    void on_btnShapeOval_clicked();

    void on_btnShapeText_clicked();

    void on_actionNew_triggered();

    void on_BtnAddItem_clicked();

private:
    Ui::MainWindow *ui;
    void itemMoveBack();
    void itemMoveFront();
    void itemRotateLeft();
    void itemRotateRight();
    void itemScaleUp();
    void itemScaleDown();
    Shape *shape;
    MobUIScene *scene;
    void getColor();
    QColor col;

};

#endif // MAINWINDOW_H
