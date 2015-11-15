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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionBringFront;
    QAction *actionBringBack;
    QAction *actionDelete;
    QAction *actionRotate_Left;
    QAction *actionRotate_Right;
    QWidget *centralWidget;
    QGraphicsView *graphicsView;
    QPushButton *btnArrow;
    QPushButton *btnShapeRect;
    QPushButton *btnShapeOval;
    QPushButton *btnShapeLine;
    QPushButton *btnShapeText;
    QPushButton *btnRotateLeft;
    QPushButton *btnRotateRight;
    QPushButton *btnItemRemove;
    QPushButton *btnBringFront;
    QPushButton *btnBringBack;
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
    QPushButton *btnUpScale;
    QPushButton *btnDownScale;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout;
    QLineEdit *shapeWidth;
    QLineEdit *shapeHeight;
    QPushButton *BtnAddItem;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdt;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(847, 670);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QStringLiteral("background:rgb(193, 193, 193)"));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionBringFront = new QAction(MainWindow);
        actionBringFront->setObjectName(QStringLiteral("actionBringFront"));
        actionBringBack = new QAction(MainWindow);
        actionBringBack->setObjectName(QStringLiteral("actionBringBack"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        actionRotate_Left = new QAction(MainWindow);
        actionRotate_Left->setObjectName(QStringLiteral("actionRotate_Left"));
        actionRotate_Right = new QAction(MainWindow);
        actionRotate_Right->setObjectName(QStringLiteral("actionRotate_Right"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setEnabled(true);
        graphicsView->setGeometry(QRect(50, 50, 651, 541));
        graphicsView->setMouseTracking(true);
        graphicsView->setStyleSheet(QStringLiteral("background:rgb(255, 255, 255)"));
        graphicsView->setFrameShape(QFrame::Box);
        graphicsView->setFrameShadow(QFrame::Plain);
        btnArrow = new QPushButton(centralWidget);
        btnArrow->setObjectName(QStringLiteral("btnArrow"));
        btnArrow->setGeometry(QRect(11, 81, 29, 31));
        btnArrow->setCursor(QCursor(Qt::ArrowCursor));
        btnArrow->setAutoFillBackground(false);
        btnArrow->setStyleSheet(QLatin1String("background:rgb(59, 59, 59);\n"
"color:white;\n"
"border:1px solid white;\n"
"border-radius:5px;"));
        btnShapeRect = new QPushButton(centralWidget);
        btnShapeRect->setObjectName(QStringLiteral("btnShapeRect"));
        btnShapeRect->setGeometry(QRect(11, 130, 29, 31));
        btnShapeRect->setStyleSheet(QLatin1String("background:rgb(59, 59, 59);\n"
"color:white;\n"
"border:1px solid white;\n"
"border-radius:5px;"));
        btnShapeOval = new QPushButton(centralWidget);
        btnShapeOval->setObjectName(QStringLiteral("btnShapeOval"));
        btnShapeOval->setGeometry(QRect(11, 179, 29, 31));
        btnShapeOval->setStyleSheet(QLatin1String("background:rgb(59, 59, 59);\n"
"color:white;\n"
"border:1px solid white;\n"
"border-radius:5px;"));
        btnShapeLine = new QPushButton(centralWidget);
        btnShapeLine->setObjectName(QStringLiteral("btnShapeLine"));
        btnShapeLine->setGeometry(QRect(11, 228, 29, 31));
        btnShapeLine->setStyleSheet(QLatin1String("background:rgb(59, 59, 59);\n"
"color:white;\n"
"border:1px solid white;\n"
"border-radius:5px;"));
        btnShapeText = new QPushButton(centralWidget);
        btnShapeText->setObjectName(QStringLiteral("btnShapeText"));
        btnShapeText->setGeometry(QRect(11, 277, 29, 31));
        btnShapeText->setStyleSheet(QLatin1String("  background-color: rgba(58,224,205,1);\n"
"   padding: 13px;\n"
"   color: rgba(255,255,255,1);\n"
"   font-weight: bold;\n"
"cursor: hand;"));
        btnRotateLeft = new QPushButton(centralWidget);
        btnRotateLeft->setObjectName(QStringLiteral("btnRotateLeft"));
        btnRotateLeft->setGeometry(QRect(510, 10, 31, 23));
        btnRotateRight = new QPushButton(centralWidget);
        btnRotateRight->setObjectName(QStringLiteral("btnRotateRight"));
        btnRotateRight->setGeometry(QRect(550, 10, 31, 23));
        btnItemRemove = new QPushButton(centralWidget);
        btnItemRemove->setObjectName(QStringLiteral("btnItemRemove"));
        btnItemRemove->setGeometry(QRect(700, 10, 31, 31));
        btnBringFront = new QPushButton(centralWidget);
        btnBringFront->setObjectName(QStringLiteral("btnBringFront"));
        btnBringFront->setGeometry(QRect(610, 10, 31, 31));
        btnBringBack = new QPushButton(centralWidget);
        btnBringBack->setObjectName(QStringLiteral("btnBringBack"));
        btnBringBack->setGeometry(QRect(650, 10, 31, 31));
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
        label_2->setStyleSheet(QStringLiteral("color:rgb(255, 255, 255)"));

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
        label->setStyleSheet(QStringLiteral("color:rgb(255, 255, 255)"));

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
        label_3->setStyleSheet(QStringLiteral("color:rgb(255, 255, 255)"));

        horizontalLayout_3->addWidget(label_3);

        btnBorderColor = new QPushButton(layoutWidget2);
        btnBorderColor->setObjectName(QStringLiteral("btnBorderColor"));

        horizontalLayout_3->addWidget(btnBorderColor);

        btnUpScale = new QPushButton(centralWidget);
        btnUpScale->setObjectName(QStringLiteral("btnUpScale"));
        btnUpScale->setGeometry(QRect(730, 270, 31, 31));
        btnDownScale = new QPushButton(centralWidget);
        btnDownScale->setObjectName(QStringLiteral("btnDownScale"));
        btnDownScale->setGeometry(QRect(730, 350, 31, 31));
        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(710, 100, 135, 77));
        verticalLayout = new QVBoxLayout(layoutWidget3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        shapeWidth = new QLineEdit(layoutWidget3);
        shapeWidth->setObjectName(QStringLiteral("shapeWidth"));

        verticalLayout->addWidget(shapeWidth);

        shapeHeight = new QLineEdit(layoutWidget3);
        shapeHeight->setObjectName(QStringLiteral("shapeHeight"));

        verticalLayout->addWidget(shapeHeight);

        BtnAddItem = new QPushButton(layoutWidget3);
        BtnAddItem->setObjectName(QStringLiteral("BtnAddItem"));

        verticalLayout->addWidget(BtnAddItem);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 847, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdt = new QMenu(menuBar);
        menuEdt->setObjectName(QStringLiteral("menuEdt"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdt->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuEdt->addAction(actionBringFront);
        menuEdt->addAction(actionBringBack);
        menuEdt->addSeparator();
        menuEdt->addAction(actionRotate_Left);
        menuEdt->addAction(actionRotate_Right);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MobUI", 0));
        actionNew->setText(QApplication::translate("MainWindow", "New", 0));
#ifndef QT_NO_TOOLTIP
        actionNew->setToolTip(QApplication::translate("MainWindow", "Create New View", 0));
#endif // QT_NO_TOOLTIP
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        actionBringFront->setText(QApplication::translate("MainWindow", "BringFront", 0));
#ifndef QT_NO_TOOLTIP
        actionBringFront->setToolTip(QApplication::translate("MainWindow", "Bring item To front", 0));
#endif // QT_NO_TOOLTIP
        actionBringFront->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+F", 0));
        actionBringBack->setText(QApplication::translate("MainWindow", "BringBack", 0));
#ifndef QT_NO_TOOLTIP
        actionBringBack->setToolTip(QApplication::translate("MainWindow", "Bring Item to back", 0));
#endif // QT_NO_TOOLTIP
        actionBringBack->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+B", 0));
        actionDelete->setText(QApplication::translate("MainWindow", "Delete", 0));
#ifndef QT_NO_TOOLTIP
        actionDelete->setToolTip(QApplication::translate("MainWindow", "delete Selected item", 0));
#endif // QT_NO_TOOLTIP
        actionDelete->setShortcut(QApplication::translate("MainWindow", "Del", 0));
        actionRotate_Left->setText(QApplication::translate("MainWindow", "Rotate Left", 0));
#ifndef QT_NO_TOOLTIP
        actionRotate_Left->setToolTip(QApplication::translate("MainWindow", "rotate Item Left", 0));
#endif // QT_NO_TOOLTIP
        actionRotate_Left->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0));
        actionRotate_Right->setText(QApplication::translate("MainWindow", "Rotate Right", 0));
#ifndef QT_NO_TOOLTIP
        actionRotate_Right->setToolTip(QApplication::translate("MainWindow", "Rotate item right", 0));
#endif // QT_NO_TOOLTIP
        actionRotate_Right->setShortcut(QApplication::translate("MainWindow", "Ctrl+W", 0));
        btnArrow->setText(QApplication::translate("MainWindow", "P", 0));
        btnShapeRect->setText(QApplication::translate("MainWindow", "Rex", 0));
        btnShapeOval->setText(QApplication::translate("MainWindow", "oval", 0));
        btnShapeLine->setText(QApplication::translate("MainWindow", "L", 0));
        btnShapeText->setText(QApplication::translate("MainWindow", "T", 0));
        btnRotateLeft->setText(QApplication::translate("MainWindow", "L", 0));
        btnRotateRight->setText(QApplication::translate("MainWindow", "R", 0));
        btnItemRemove->setText(QApplication::translate("MainWindow", "R", 0));
        btnBringFront->setText(QApplication::translate("MainWindow", "Up", 0));
        btnBringBack->setText(QApplication::translate("MainWindow", "Down", 0));
        label_2->setText(QApplication::translate("MainWindow", "Border", 0));
        label->setText(QApplication::translate("MainWindow", "Fill Color", 0));
        btnFillColor->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "Border Colour", 0));
        btnBorderColor->setText(QString());
        btnUpScale->setText(QApplication::translate("MainWindow", "PushButton", 0));
        btnDownScale->setText(QApplication::translate("MainWindow", "PushButton", 0));
        BtnAddItem->setText(QApplication::translate("MainWindow", "Add Item", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuEdt->setTitle(QApplication::translate("MainWindow", "Edt", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
