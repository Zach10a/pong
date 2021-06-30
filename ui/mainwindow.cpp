//
// Created by zacht on 30/06/2021.
//

#include "mainwindow.h"


MainWindow::MainWindow()=default;

void MainWindow::paintEvent(QPaintEvent *event) {

    QPainter painter(this);
    painter.setBrush(Qt::DiagCrossPattern);


    QPen pen;

    pen.setColor(Qt::green);
    pen.setWidth(5);

    painter.setPen(pen);
    painter.drawRect(QRect(80, 120, 200, 100));


}