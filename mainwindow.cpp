#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    eq();
    lp.setColor(Qt::black);
    col = Qt::transparent;
    grid = false;
    A = true;


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::paintEvent(QPaintEvent *e) {
    QPainter painter(this);
    painter.setBackground(Qt::white);

    s = this->size();

    if(grid) {
        hp.setColor(Qt::blue);
        hp.setWidth(1);
        painter.setPen(hp);
        for(int i=0;i<s.width();i+=50) {
            painter.drawLine(i,s.height(),i,0);
        }
        for(int i=(s.height());i>0;i-=50) {
            painter.drawLine(0,i,s.width(),i);
        }
    }


    hp.setColor(Qt::black);
    hp.setWidth(5);
    painter.setPen(hp);

    if(A) {
        for(int i=0;i<s.width();i+=50) {
            painter.drawPoint(i,s.height());
        }
        for(int i=(s.height());i>0;i-=50) {
            painter.drawPoint(0,i);
        }
    }
    p.setY(s.height()-k);
    p.setX(h);

    painter.setPen(lp);


    b.setColor(col);
    b.setStyle(Qt::SolidPattern);
    painter.setBrush(b);


    painter.drawEllipse(p, r, r);


    str.clear();
    str.append("Centro en: (");
    str.append(eqh);
    str.append(",");
    str.append(eqk) ;
    str.append(") y radio = ");
    str.append(QString::number(r));
    statusBar()->showMessage(str);
    this->update();
    e->accept();
}

bool MainWindow::eq() {
    QMessageBox msg(this);
    bool E = true;
    while(E) {
        E = false;
        bool err = true;
        while(err){
            err = false;
            formula = QInputDialog::getText(this, tr("Intrduzca la ecuacion de un circulo en su forma general:"),
                                            tr("(x-h)^2 + (y-k)^2 = r^2"),
                                            QLineEdit::Normal,formula);
            if(formula.isEmpty()) err = true;
            if(formula.isNull()) err = true;
            if(!formula.contains("=")) err = true;
            if(!formula.contains("^")) err = true;
            if(!formula.contains("+")) err = true;
            if(!formula.contains("(x-")) err = true;
            if(!formula.contains(")^2")) err = true;
            if(!formula.contains("(y-")) err = true;
            s = this->size();
        }


        QStringList list;


        list = formula.split("=");
        eqr = list[1];
        list = list[0].split("+");
        eqh = list[0];
        eqk = list[1];

        qDebug() << eqh << eqk << eqr;
        eqh = eqh.left(eqh.length()-3);
        eqk = eqk.left(eqk.length()-3);
        qDebug() << eqh << eqk << eqr;

        eqh = eqh.right(eqh.length()-3);
        eqk = eqk.right(eqk.length()-3);
        qDebug() << eqh << eqk << eqr;

        h = abs(eqh.toInt());
        k = abs(eqk.toInt());
        r = (int)sqrt(eqr.toDouble());
        qDebug() << h << k << r;
        qDebug() << s.height()<<s.width();
        if(h>s.height()) {
            msg.setText(QString("El punto esta fuera de pantalla, elija otra vez."));
            msg.exec();
            E = true;
        }
        if(k>s.width()) {
            msg.setText(QString("El punto esta fuera de pantalla, elija otra vez."));
            msg.exec();
            E = true;
        }
        if(r>s.width()||r>s.height()) {
            msg.setText(QString("El radio es demasiado grande, elija otra vez."));
            msg.exec();
            E = true;
        }
    }
    //k = ;
    p.setY(s.height()-k);
    p.setX(h);

    return E;
}

void MainWindow::on_actionExit_triggered()
{
    this->close();
}

void MainWindow::on_actionEdit_triggered()
{
    eq();
}

void MainWindow::on_actionColor_triggered()
{
    col = QColorDialog::getColor(Qt::white,this);
    qDebug() << col.redF() << col.greenF() << col.blueF();
    //b.setColor(color);
}

void MainWindow::mousePressEvent(QMouseEvent *e) {
    if(e->button()==Qt::LeftButton){
        //p= e->pos();
    }
}

void MainWindow::on_actionGrid_triggered()
{
    grid = !grid;
}

void MainWindow::on_actionSalir_triggered()
{
    this->close();
}

void MainWindow::on_actionAxis_triggered()
{
    A = !A;
}
