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



//Calculating PIC 10C Grades
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
    ui->P_Progress->setValue(pic_grade1);

}

void MainWindow::pic_final_grade2()
{
    pic_hw = pic_hw1+pic_hw2+pic_hw3+pic_hw4+pic_hw5;
    pic_grade2 = ((pic_hw)*0.2 + (pic_final)*2*0.5 +(pic_final_prj)*2*0.3);
    ui->P_Grade->setNum(pic_grade2);
    ui->P_Progress->setValue(pic_grade2);
}


void MainWindow::on_p_scheme1_clicked()
{
    pic_scheme = true;
}

void MainWindow::on_p_scheme2_clicked()
{
    pic_scheme = false;
}




//Calculating Math 182 Grades
void MainWindow::on_A_HW1_valueChanged(int arg1)
{
    alg_hw1 = arg1;
    if(alg_scheme){
        alg_final_grade1();
    }
    else if(!alg_scheme){
        alg_final_grade2();
    }
}

void MainWindow::on_A_HW2_valueChanged(int arg1)
{
    alg_hw2 = arg1;
    if(alg_scheme){
        alg_final_grade1();
    }
    else if(!alg_scheme){
        alg_final_grade2();
    }
}

void MainWindow::on_A_HW3_valueChanged(int arg1)
{
    alg_hw3 = arg1;
    if(alg_scheme){
        alg_final_grade1();
    }
    else if(!alg_scheme){
        alg_final_grade2();
    }
}

void MainWindow::on_A_HW4_valueChanged(int arg1)
{
    alg_hw4 = arg1;
    if(alg_scheme){
        alg_final_grade1();
    }
    else if(!alg_scheme){
        alg_final_grade2();
    }
}

void MainWindow::on_A_HW5_valueChanged(int arg1)
{
    alg_hw5 = arg1;
    if(alg_scheme){
        alg_final_grade1();
    }
    else if(!alg_scheme){
        alg_final_grade2();
    }
}

void MainWindow::on_A_HW6_valueChanged(int arg1)
{
    alg_hw6 = arg1;
    if(alg_scheme){
        alg_final_grade1();
    }
    else if(!alg_scheme){
        alg_final_grade2();
    }
}

void MainWindow::on_A_HW7_valueChanged(int arg1)
{
    alg_hw7 = arg1;
    if(alg_scheme){
        alg_final_grade1();
    }
    else if(!alg_scheme){
        alg_final_grade2();
    }
}

void MainWindow::on_A_HW8_2_valueChanged(int arg1)
{
    alg_hw8 = arg1;
    if(alg_scheme){
        alg_final_grade1();
    }
    else if(!alg_scheme){
        alg_final_grade2();
    }
}

void MainWindow::on_A_MT_valueChanged(int arg1)
{
    alg_mt = arg1;
    if(alg_scheme){
        alg_final_grade1();
    }
    else if(!alg_scheme){
        alg_final_grade2();
    }
}



void MainWindow::on_A_Final_valueChanged(int arg1)
{
    alg_final = arg1;
    if(alg_scheme){
        alg_final_grade1();
    }
    else if(!alg_scheme){
        alg_final_grade2();
    }
}


void MainWindow::alg_final_grade1()
{
    alg_hw = (alg_hw1+alg_hw2+alg_hw3+alg_hw4+alg_hw5+alg_hw6+alg_hw7+alg_hw8)*1.25;
    alg_grade1 = ((alg_hw)*0.3 + (alg_mt)*2*0.2 + (alg_final)*0.5 );
    ui->A_Grade->setNum(alg_grade1);
    ui->A_Progress->setValue(alg_grade1);
}

void MainWindow::alg_final_grade2()
{
    alg_hw = (alg_hw1+alg_hw2+alg_hw3+alg_hw4+alg_hw5+alg_hw6+alg_hw7+alg_hw8)*1.25;
    alg_grade2 = ((alg_hw)*0.3 + (alg_final)*0.7 );
    ui->A_Grade->setNum(alg_grade2);
    ui->A_Progress->setValue(alg_grade2);
}

void MainWindow::on_a_scheme1_clicked()
{
    alg_scheme = true;
}

void MainWindow::on_a_scheme2_clicked()
{
    alg_scheme = false;
}




void MainWindow::on_N_HW1_valueChanged(int arg1)
{
    nwk_hw1 = arg1;
    nwk_final_grade();
}

void MainWindow::on_N_HW2_valueChanged(int arg1)
{
    nwk_hw2 = arg1;
    nwk_final_grade();
}

void MainWindow::on_N_HW3_valueChanged(int arg1)
{
    nwk_hw3 = arg1;
    nwk_final_grade();
}

void MainWindow::on_N_HW4_valueChanged(int arg1)
{
    nwk_hw4 = arg1;
    nwk_final_grade();
}

void MainWindow::on_N_MT1_valueChanged(int arg1)
{
    nwk_mt1 = arg1;
    nwk_final_grade();
}

void MainWindow::on_N_MT2_valueChanged(int arg1)
{
    nwk_mt2 = arg1;
    nwk_final_grade();
}

void MainWindow::on_N_Final_valueChanged(int arg1)
{
    nwk_final = arg1;
    nwk_final_grade();
}

void MainWindow::nwk_final_grade(){
    nwk_hw = (nwk_hw1+nwk_hw2+nwk_hw3+nwk_hw4)/4;
    nwk_grade = ((nwk_hw)*0.3 + (nwk_mt1)*0.2 + (nwk_mt2)*0.2 + (nwk_final)*0.3 );
    ui->N_Grade->setNum(nwk_grade);
    ui->N_Progress->setValue(nwk_grade);
}
