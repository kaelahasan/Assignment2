/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QSplitter *splitter;
    QWidget *widget1;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSlider *horizontalSlider;
    QSpinBox *spinBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSlider *horizontalSlider_2;
    QSpinBox *spinBox_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QSlider *horizontalSlider_3;
    QSpinBox *spinBox_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QSlider *horizontalSlider_4;
    QSpinBox *spinBox_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QSlider *horizontalSlider_9;
    QSpinBox *spinBox_9;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSlider *horizontalSlider_5;
    QSpinBox *spinBox_5;
    QGridLayout *gridLayout;
    QLabel *label_8;
    QLabel *label_7;
    QSpinBox *spinBox_6;
    QSpinBox *spinBox_7;
    QSlider *horizontalSlider_8;
    QLabel *label_9;
    QSpinBox *spinBox_8;
    QSlider *horizontalSlider_6;
    QSlider *horizontalSlider_7;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_11;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(412, 418);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 0, 323, 357));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(widget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        widget1 = new QWidget(splitter);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        gridLayout_2 = new QGridLayout(widget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(widget1);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        radioButton = new QRadioButton(widget1);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout_3->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget1);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        verticalLayout_3->addWidget(radioButton_2);


        gridLayout_2->addLayout(verticalLayout_3, 0, 1, 1, 1);

        splitter->addWidget(widget1);

        gridLayout_3->addWidget(splitter, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSlider = new QSlider(widget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider);

        spinBox = new QSpinBox(widget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout_2->addWidget(spinBox);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSlider_2 = new QSlider(widget);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSlider_2);

        spinBox_2 = new QSpinBox(widget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));

        horizontalLayout_3->addWidget(spinBox_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        horizontalSlider_3 = new QSlider(widget);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSlider_3);

        spinBox_3 = new QSpinBox(widget);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));

        horizontalLayout_4->addWidget(spinBox_3);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        horizontalSlider_4 = new QSlider(widget);
        horizontalSlider_4->setObjectName(QString::fromUtf8("horizontalSlider_4"));
        horizontalSlider_4->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSlider_4);

        spinBox_4 = new QSpinBox(widget);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));

        horizontalLayout_5->addWidget(spinBox_4);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_7->addWidget(label_10);

        horizontalSlider_9 = new QSlider(widget);
        horizontalSlider_9->setObjectName(QString::fromUtf8("horizontalSlider_9"));
        horizontalSlider_9->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(horizontalSlider_9);

        spinBox_9 = new QSpinBox(widget);
        spinBox_9->setObjectName(QString::fromUtf8("spinBox_9"));

        horizontalLayout_7->addWidget(spinBox_9);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        horizontalSlider_5 = new QSlider(widget);
        horizontalSlider_5->setObjectName(QString::fromUtf8("horizontalSlider_5"));
        horizontalSlider_5->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalSlider_5);

        spinBox_5 = new QSpinBox(widget);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));

        horizontalLayout_6->addWidget(spinBox_5);


        verticalLayout_2->addLayout(horizontalLayout_6);


        horizontalLayout_8->addLayout(verticalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 4, 0, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        spinBox_6 = new QSpinBox(widget);
        spinBox_6->setObjectName(QString::fromUtf8("spinBox_6"));

        gridLayout->addWidget(spinBox_6, 8, 0, 1, 1);

        spinBox_7 = new QSpinBox(widget);
        spinBox_7->setObjectName(QString::fromUtf8("spinBox_7"));

        gridLayout->addWidget(spinBox_7, 5, 0, 1, 1);

        horizontalSlider_8 = new QSlider(widget);
        horizontalSlider_8->setObjectName(QString::fromUtf8("horizontalSlider_8"));
        horizontalSlider_8->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_8, 9, 0, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 7, 0, 1, 1);

        spinBox_8 = new QSpinBox(widget);
        spinBox_8->setObjectName(QString::fromUtf8("spinBox_8"));

        gridLayout->addWidget(spinBox_8, 2, 0, 1, 1);

        horizontalSlider_6 = new QSlider(widget);
        horizontalSlider_6->setObjectName(QString::fromUtf8("horizontalSlider_6"));
        horizontalSlider_6->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_6, 3, 0, 1, 1);

        horizontalSlider_7 = new QSlider(widget);
        horizontalSlider_7->setObjectName(QString::fromUtf8("horizontalSlider_7"));
        horizontalSlider_7->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(horizontalSlider_7, 6, 0, 1, 1);


        horizontalLayout_8->addLayout(gridLayout);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_10->addWidget(label_11);

        progressBar = new QProgressBar(widget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        horizontalLayout_10->addWidget(progressBar);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_9->addWidget(lineEdit);


        horizontalLayout_10->addLayout(horizontalLayout_9);


        verticalLayout->addLayout(horizontalLayout_10);


        gridLayout_3->addLayout(verticalLayout, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 412, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Course: ", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "PIC 10 C", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Math 182", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Math 168", nullptr));

        radioButton->setText(QCoreApplication::translate("MainWindow", "Scheme 1", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "Scheme 2", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "HW 1", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "HW 2", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "HW 3", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "HW 4", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "HW 5", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "HW 6", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Final", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Midterm", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Final Project", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Final Grade: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
