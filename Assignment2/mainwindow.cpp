#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui-> comboBox->setCurrentIndex(2); //to ensure the correct class appears when building application
}

MainWindow::~MainWindow()
{
    delete ui;
}


/*
 * Final Grade Calculator
 * I created my own grading schemes
 * Calculating grades for three different classes
 * Math 182 and Pic 10C have two schemes, Math 168 only has one
 * The sliders are connected to the spin boxes, so their valeus update one another
 * After any change in value to the spinbox (which includes changes to the sliders), the private variables are updated and the final grade functions are called
 * This means, after any changes to the GUI, the grades update
 *
 */

//Calculating PIC 10C Grades
void MainWindow::on_P_HW1_valueChanged(int arg1)
{
    pic_hw1 = arg1;
    if(pic_scheme){ //if true, use scheme 1 --> same for all functions
        pic_final_grade1();
    }
    else if(!pic_scheme){ //if false, use scheme 2 --> same for all functions
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
    pic_hw = pic_hw1+pic_hw2+pic_hw3+pic_hw4+pic_hw5; //each hw is worth 20 points, so adding all points together will yield the perceptage out of 100
    pic_grade1 = ((pic_hw)*0.2 + (pic_mt)*2*0.3 + (pic_final)*2*0.3 +(pic_final_prj)*2*0.2); //hw is 20%, midterm is 30% (but worth 50 points so need to multiply by 2 to get full 100 points)
                                                                                               //final is 30%, final project is 20% (same method to convert to 100 points)
    ui->P_Grade->setNum(pic_grade1); //update final grade label
    ui->P_Progress->setValue(pic_grade1); //update final grade status bar

}

void MainWindow::pic_final_grade2() //same method as scheme 1 just not counting the midterm and altering % accourdingly
{
    pic_hw = pic_hw1+pic_hw2+pic_hw3+pic_hw4+pic_hw5;
    pic_grade2 = ((pic_hw)*0.2 + (pic_final)*2*0.5 +(pic_final_prj)*2*0.3);
    ui->P_Grade->setNum(pic_grade2);
    ui->P_Progress->setValue(pic_grade2);
}

//determining which scheme to use based on which radio button is clicked, scheme 1 is used by default, neeed to click scheme 2 to change
void MainWindow::on_p_scheme1_clicked()
{
    pic_scheme = true;
}

void MainWindow::on_p_scheme2_clicked()
{
    pic_scheme = false;
}




//Calculating Math 182 Grades
void MainWindow::on_A_HW1_valueChanged(int arg1) //same implimentation as PIC 10C
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
    alg_hw = (alg_hw1+alg_hw2+alg_hw3+alg_hw4+alg_hw5+alg_hw6+alg_hw7+alg_hw8)*1.25; //each hw is worth 10 points, add them together and multiply by 1.25 to get precent out of 100
    alg_grade1 = ((alg_hw)*0.3 + (alg_mt)*2*0.2 + (alg_final)*0.5 ); //hw is worth 30%, midterm and final are both out of 50 points so we multiply by 2, mt worth 20%, final worth 50%
    ui->A_Grade->setNum(alg_grade1); //update final grade label
    ui->A_Progress->setValue(alg_grade1); //update final grade  status bar
}

void MainWindow::alg_final_grade2() //same method as scheme 1 just not counting the midterm and altering % accourdingly
{
    alg_hw = (alg_hw1+alg_hw2+alg_hw3+alg_hw4+alg_hw5+alg_hw6+alg_hw7+alg_hw8)*1.25;
    alg_grade2 = ((alg_hw)*0.3 + (alg_final)*0.7 );
    ui->A_Grade->setNum(alg_grade2);
    ui->A_Progress->setValue(alg_grade2);
}

void MainWindow::on_a_scheme1_clicked() //same method as PIC 10C
{
    alg_scheme = true;
}

void MainWindow::on_a_scheme2_clicked()
{
    alg_scheme = false;
}



//Calculating Math 168 Grades
void MainWindow::on_N_HW1_valueChanged(int arg1) //same method as PIC 10C
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

void MainWindow::nwk_final_grade(){ //only one scheme
    nwk_hw = (nwk_hw1+nwk_hw2+nwk_hw3+nwk_hw4)/4; //each hw worth 100 points, divide by 4 to get precent out of 100
    nwk_grade = ((nwk_hw)*0.3 + (nwk_mt1)*0.2 + (nwk_mt2)*0.2 + (nwk_final)*0.3 ); //hw is worth 30%, midterms 20% each, and final 30%
    ui->N_Grade->setNum(nwk_grade); //updating final grade label
    ui->N_Progress->setValue(nwk_grade); //updating final grade status bar
}
