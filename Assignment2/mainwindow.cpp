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
    pic_hw1 = arg1;
    if(pic_scheme){
        pic_final_grade1();
    }
    else if(!pic_scheme){
        pic_final_grade2();
    }
}

void MainWindow::on_P_HW2_valueChanged(int arg1)
{
    pic_hw2 = arg1;
    if(pic_scheme){
        pic_final_grade1();
    }
    else if(!pic_scheme){
        pic_final_grade2();
    }
}

void MainWindow::on_P_HW3_valueChanged(int arg1)
{
    pic_hw3 = arg1;
    if(pic_scheme){
        pic_final_grade1();
    }
    else if(!pic_scheme){
        pic_final_grade2();
    }
}

void MainWindow::on_P_HW4_valueChanged(int arg1)
{
    pic_hw4 = arg1;
    if(pic_scheme){
        pic_final_grade1();
    }
    else if(!pic_scheme){
        pic_final_grade2();
    }
}

void MainWindow::on_P_HW5_valueChanged(int arg1)
{
    pic_hw5 = arg1;
    if(pic_scheme){
        pic_final_grade1();
    }
    else if(!pic_scheme){
        pic_final_grade2();
    }
}


void MainWindow::on_P_MT_valueChanged(int arg1)
{
    pic_mt = arg1;
    if(pic_scheme){
        pic_final_grade1();
    }
    else if(!pic_scheme){
        pic_final_grade2();
    }
}

void MainWindow::on_P_Final_valueChanged(int arg1)
{
    pic_final = arg1;
    if(pic_scheme){
        pic_final_grade1();
    }
    else if(!pic_scheme){
        pic_final_grade2();
    }
}


void MainWindow::on_P_F_Prj_valueChanged(int arg1)
{
    pic_final_prj = arg1;
    if(pic_scheme){
        pic_final_grade1();
    }
    else if(!pic_scheme){
        pic_final_grade2();
    }
}

void MainWindow::pic_final_grade1()
{
    pic_hw = pic_hw1+pic_hw2+pic_hw3+pic_hw4+pic_hw5;
    pic_grade1 = ((pic_hw)*0.2 + (pic_mt)*2*0.3 + (pic_final)*2*0.3 +(pic_final_prj)*2*0.2);
    ui->P_Grade->setNum(pic_grade1);

}

void MainWindow::pic_final_grade2()
{
    pic_hw = pic_hw1+pic_hw2+pic_hw3+pic_hw4+pic_hw5;
    pic_grade2 = ((pic_hw)*0.2 + (pic_final)*2*0.5 +(pic_final_prj)*2*0.3);
    ui->P_Grade->setNum(pic_grade2);
}


void MainWindow::on_p_scheme1_clicked()
{
    pic_scheme = true;
}

void MainWindow::on_p_scheme2_clicked()
{
    pic_scheme = false;
}














