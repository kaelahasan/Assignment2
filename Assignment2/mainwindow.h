#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    //Calculating PIC 10C Grades
    void on_P_HW1_valueChanged(int arg1);
    void on_P_HW2_valueChanged(int arg1);
    void on_P_HW3_valueChanged(int arg1);
    void on_P_HW4_valueChanged(int arg1);
    void on_P_HW5_valueChanged(int arg1);
    void on_P_MT_valueChanged(int arg1);
    void on_P_Final_valueChanged(int arg1);
    void on_P_F_Prj_valueChanged(int arg1);
    void pic_final_grade1();
    void pic_final_grade2();
    void on_p_scheme1_clicked();
    void on_p_scheme2_clicked();

    //Calcualting Math 182 Grades
    void on_A_HW1_valueChanged(int arg1);
    void on_A_HW2_valueChanged(int arg1);
    void on_A_HW3_valueChanged(int arg1);
    void on_A_HW4_valueChanged(int arg1);
    void on_A_HW5_valueChanged(int arg1);
    void on_A_HW6_valueChanged(int arg1);
    void on_A_HW7_valueChanged(int arg1);
    void on_A_HW8_2_valueChanged(int arg1);
    void on_A_MT_valueChanged(int arg1);
    void on_A_Final_valueChanged(int arg1);
    void alg_final_grade1();
    void alg_final_grade2();
    void on_a_scheme1_clicked();
    void on_a_scheme2_clicked();

    //Calculating Math 168 Grades
    void on_N_HW1_valueChanged(int arg1);
    void on_N_HW2_valueChanged(int arg1);
    void on_N_HW3_valueChanged(int arg1);
    void on_N_HW4_valueChanged(int arg1);
    void on_N_MT1_valueChanged(int arg1);
    void on_N_MT2_valueChanged(int arg1);
    void on_N_Final_valueChanged(int arg1);
    void nwk_final_grade();


private:

    //Storing PIC 10C Spinbox Values
    int pic_hw1 = 0;
    int pic_hw2 = 0;
    int pic_hw3 = 0;
    int pic_hw4 = 0;
    int pic_hw5 = 0;
    int pic_hw = 0; //stores sum of all hws
    int pic_mt = 0;
    int pic_final = 0;
    int pic_final_prj = 0;

    //Calculating PIC 10C Final Grades with different schemes
    int pic_grade1 = 0; //scheme1 Homework 20%, Midterm 30%, Final 30%, Final Project 20%
    int pic_grade2 = 0; //scheme2 Homework 20%, Final 50%, Final Project 30%
    bool pic_scheme = true; //scheme 1 automatically chosen, changes when scheme 2 is clicked

    //Storing Math 182 Spinbox Values
    int alg_hw1 = 0;
    int alg_hw2 = 0;
    int alg_hw3 = 0;
    int alg_hw4 = 0;
    int alg_hw5 = 0;
    int alg_hw6 = 0;
    int alg_hw7 = 0;
    int alg_hw8 = 0;
    int alg_hw = 0; //stores sum of all hws
    int alg_mt = 0;
    int alg_final = 0;

    //Calculating Math 182 Final Grades with different schemes
    int alg_grade1 = 0; //scheme 1
    int alg_grade2 = 0; //scheme 2
    bool alg_scheme = true; //scheme 1 automatically chosen, changes when scheme 2 is clicked


    //Storing Math 168 Spinbox Values
    int nwk_hw1 = 0;
    int nwk_hw2 = 0;
    int nwk_hw3 = 0;
    int nwk_hw4 = 0;
    int nwk_hw = 0; //stores sum of all hws
    int nwk_mt1 = 0;
    int nwk_mt2 = 0;
    int nwk_final = 0;

    //There is only one scheme for Math 168
    int nwk_grade = 0;

    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
