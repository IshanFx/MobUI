#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QtCore>
#include <QtGui>
#include "rectangle.h"
#include "circle.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void sendItemFront();
    void sendItemBack();
    void rotateItemLeft();
    void rotateItemRight();
    void increaceItemScale();

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

private:
    Ui::MainWindow *ui;

    QGraphicsScene *scene;
    void getColor();
    QColor col;

};

#endif // MAINWINDOW_H
