#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QtCore>
#include <QDebug>
#include <QMessageBox>
#include <QInputDialog>

using namespace std;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    bool eq();
    
private:
    Ui::MainWindow *ui;
    QPoint p;
    QSize s;
    QInputDialog id;
    QString formula,str;
    QPen lp,hp;
    QBrush b;
    QColor col;
    bool grid, A;

    QString eqr, eqh, eqk;

    int hi[3],ki[3],ri[3];
    int r,h,k;


protected:
    void paintEvent(QPaintEvent *e);
    void mousePressEvent(QMouseEvent *e);

private slots:
    void on_actionExit_triggered();
    void on_actionEdit_triggered();
    void on_actionColor_triggered();
    void on_actionGrid_triggered();
    void on_actionSalir_triggered();
    void on_actionAxis_triggered();
};

#endif // MAINWINDOW_H
