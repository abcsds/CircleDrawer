/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue 20. Aug 20:13:04 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionEdit;
    QAction *actionColor;
    QAction *actionGrid;
    QAction *actionSalir;
    QAction *actionAxis;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuCirculo;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(400, 300));
        MainWindow->setMaximumSize(QSize(1800, 1200));
        MainWindow->setCursor(QCursor(Qt::CrossCursor));
        MainWindow->setStyleSheet(QString::fromUtf8("MainWindow {\n"
"background:rgb(255, 255, 255); }"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon);
        actionEdit = new QAction(MainWindow);
        actionEdit->setObjectName(QString::fromUtf8("actionEdit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEdit->setIcon(icon1);
        actionColor = new QAction(MainWindow);
        actionColor->setObjectName(QString::fromUtf8("actionColor"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/colorwheel.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionColor->setIcon(icon2);
        actionGrid = new QAction(MainWindow);
        actionGrid->setObjectName(QString::fromUtf8("actionGrid"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/res/grid.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGrid->setIcon(icon3);
        actionSalir = new QAction(MainWindow);
        actionSalir->setObjectName(QString::fromUtf8("actionSalir"));
        actionAxis = new QAction(MainWindow);
        actionAxis->setObjectName(QString::fromUtf8("actionAxis"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/res/axis.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        actionAxis->setIcon(icon4);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menuCirculo = new QMenu(menuBar);
        menuCirculo->setObjectName(QString::fromUtf8("menuCirculo"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::RightToolBarArea, toolBar);

        menuBar->addAction(menuCirculo->menuAction());
        menuCirculo->addAction(actionSalir);
        toolBar->addAction(actionExit);
        toolBar->addAction(actionEdit);
        toolBar->addAction(actionColor);
        toolBar->addAction(actionGrid);
        toolBar->addAction(actionAxis);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "exit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionExit->setToolTip(QApplication::translate("MainWindow", "Salir", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionEdit->setText(QApplication::translate("MainWindow", "edit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionEdit->setToolTip(QApplication::translate("MainWindow", "Edita la ecuacion", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionColor->setText(QApplication::translate("MainWindow", "color", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionColor->setToolTip(QApplication::translate("MainWindow", "Editar el color del circulo", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionGrid->setText(QApplication::translate("MainWindow", "grid", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionGrid->setToolTip(QApplication::translate("MainWindow", "Muestra o esconde la cuadricula", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSalir->setText(QApplication::translate("MainWindow", "Salir", 0, QApplication::UnicodeUTF8));
        actionAxis->setText(QApplication::translate("MainWindow", "Axis", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAxis->setToolTip(QApplication::translate("MainWindow", "Ocultar o mostrar los ejes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        menuCirculo->setTitle(QApplication::translate("MainWindow", "Circulo", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
