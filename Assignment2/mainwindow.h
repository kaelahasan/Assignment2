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

    void on_P_HW1_valueChanged(int arg1);
    void pic_final_grade1();
    //void pic_final_grade2();
    //void alg_final_grade1();
    //void alg_final_grade2();
    //void on_N_HW1_valueChanged(int arg1);

private:
    /*int pic_hw1;
    int pic_hw2;
    int pic_hw3;
    int pic_hw4;
    int pic_hw6;
    int pic_mt;
    int pic_final;
    int pic_final_prj;
    int pic_grade1;
    int pic_grade2;
    int alg_hw1;
    int alg_hw2;
    int alg_hw3;
    int alg_hw4;
    int alg_hw5;
    int alg_hw6;
    int alg_hw7;
    int alg_hw8;
    int alg_mt1;
    int alg_mt2;
    int alg_mt3;
    int alg_grade1;
    int alg_grade2;
    int *nwk_hw1;
    int nwk_hw2;
    int nwk_hw3;
    int nwk_hw4;
    int nwk_mt;
    int nwk_final;
    int nwk_grade;*/

    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
