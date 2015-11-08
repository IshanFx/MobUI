/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *btnRotateLeft;
    QPushButton *btnRotateRight;
    QListWidget *listWidget;
    QLabel *label_4;
    QPushButton *btnItemRemove;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *spinBox;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QPushButton *btnFillColor;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QPushButton *btnBorderColor;
    QLineEdit *shapeWidth;
    QLineEdit *shapeHeight;
    QPushButton *pushButton_13;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(844, 752);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setEnabled(true);
        graphicsView->setGeometry(QRect(50, 50, 631, 421));
        graphicsView->setMouseTracking(true);
        graphicsView->setFrameShape(QFrame::Box);
        graphicsView->setFrameShadow(QFrame::Plain);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(11, 81, 29, 31));
        pushButton->setCursor(QCursor(Qt::ArrowCursor));
        pushButton->setAutoFillBackground(false);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(11, 130, 29, 31));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(11, 179, 29, 31));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(11, 228, 29, 31));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(11, 277, 29, 31));
        btnRotateLeft = new QPushButton(centralWidget);
        btnRotateLeft->setObjectName(QStringLiteral("btnRotateLeft"));
        btnRotateLeft->setGeometry(QRect(510, 10, 31, 23));
        btnRotateRight = new QPushButton(centralWidget);
        btnRotateRight->setObjectName(QStringLiteral("btnRotateRight"));
        btnRotateRight->setGeometry(QRect(550, 10, 31, 23));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(690, 50, 151, 371));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(700, 30, 61, 16));
        btnItemRemove = new QPushButton(centralWidget);
        btnItemRemove->setObjectName(QStringLiteral("btnItemRemove"));
        btnItemRemove->setGeometry(QRect(690, 430, 31, 31));
        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(770, 430, 31, 31));
        pushButton_12 = new QPushButton(centralWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(810, 430, 31, 31));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(400, 10, 77, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        horizontalLayout->addWidget(spinBox);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 123, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        btnFillColor = new QPushButton(layoutWidget1);
        btnFillColor->setObjectName(QStringLiteral("btnFillColor"));

        horizontalLayout_2->addWidget(btnFillColor);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(220, 10, 149, 25));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        btnBorderColor = new QPushButton(layoutWidget2);
        btnBorderColor->setObjectName(QStringLiteral("btnBorderColor"));

        horizontalLayout_3->addWidget(btnBorderColor);

        shapeWidth = new QLineEdit(centralWidget);
        shapeWidth->setObjectName(QStringLiteral("shapeWidth"));
        shapeWidth->setGeometry(QRect(50, 490, 113, 20));
        shapeHeight = new QLineEdit(centralWidget);
        shapeHeight->setObjectName(QStringLiteral("shapeHeight"));
        shapeHeight->setGeometry(QRect(170, 490, 113, 20));
        pushButton_13 = new QPushButton(centralWidget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(50, 520, 231, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 844, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton->setText(QApplication::translate("MainWindow", "P", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Rex", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "oval", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "L", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "T", 0));
        btnRotateLeft->setText(QApplication::translate("MainWindow", "L", 0));
        btnRotateRight->setText(QApplication::translate("MainWindow", "R", 0));
        label_4->setText(QApplication::translate("MainWindow", "Item Palate", 0));
        btnItemRemove->setText(QApplication::translate("MainWindow", "R", 0));
        pushButton_11->setText(QApplication::translate("MainWindow", "Up", 0));
        pushButton_12->setText(QApplication::translate("MainWindow", "Down", 0));
        label_2->setText(QApplication::translate("MainWindow", "Border", 0));
        label->setText(QApplication::translate("MainWindow", "Fill Color", 0));
        btnFillColor->setText(QApplication::translate("MainWindow", "Colour", 0));
        label_3->setText(QApplication::translate("MainWindow", "Border Colour", 0));
        btnBorderColor->setText(QApplication::translate("MainWindow", "Colour", 0));
        pushButton_13->setText(QApplication::translate("MainWindow", "Add Item", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
