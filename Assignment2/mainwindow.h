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

    //void alg_final_grade1();
    //void alg_final_grade2();
    //void on_N_HW1_valueChanged(int arg1);






private:
    int pic_hw1 = 0;
    int pic_hw2 = 0;
    int pic_hw3 = 0;
    int pic_hw4 = 0;
    int pic_hw5 = 0;
    int pic_hw = 0;
    int pic_mt = 0;
    int pic_final = 0;
    int pic_final_prj = 0;
    int pic_grade1 = 0;
    int pic_grade2 = 0;
    bool pic_scheme = true;
    int alg_hw1 = 0;
    int alg_hw2 = 0;
    int alg_hw3 = 0;
    int alg_hw4 = 0;
    int alg_hw5 = 0;
    int alg_hw6 = 0;
    int alg_hw7 = 0;
    int alg_hw8 = 0;
    int alg_mt1 = 0;
    int alg_mt2 = 0;
    int alg_mt3 = 0;
    int alg_grade1 = 0;
    int alg_grade2 = 0;
    int nwk_hw1 = 0;
    int nwk_hw2 = 0;
    int nwk_hw3 = 0;
    int nwk_hw4 = 0;
    int nwk_mt = 0;
    int nwk_final = 0;
    int nwk_grade = 0;

    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
