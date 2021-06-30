//
// Created by zacht on 30/06/2021.
//

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QPainter>


class MainWindow : public QMainWindow {
Q_OBJECT


public:
    int h;
    int w;
    MainWindow();


    void paintEvent(QPaintEvent *event);

};

#endif // MAINWINDOW_H