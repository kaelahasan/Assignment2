#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_P_HW1_valueChanged(int arg1)
{
    pic_final_grade1();
}

/*
void MainWindow::pic_final_grade1()
{
    ui->P_Grade->setNum(pic_grade1);
}


void MainWindow::on_N_HW1_valueChanged(int n_hw1)
{
    nwk_hw1 = &n_hw1;
}
*/

void MainWindow::pic_final_grade1()
{
    ui->P_Grade->setNum(ui->P_HW1->value());
}





