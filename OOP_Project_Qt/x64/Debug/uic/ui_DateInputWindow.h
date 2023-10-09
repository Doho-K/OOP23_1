/********************************************************************************
** Form generated from reading UI file 'DateInputWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATEINPUTWINDOW_H
#define UI_DATEINPUTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QFrame *line;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QComboBox *comboBox_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *comboBox_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(473, 154);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 10, 121, 41));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label_2->setFont(font);
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(10, 50, 451, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(10, 70, 440, 51));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(horizontalLayoutWidget_3);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        dateEdit = new QDateEdit(horizontalLayoutWidget_3);
        dateEdit->setObjectName("dateEdit");

        horizontalLayout->addWidget(dateEdit);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(horizontalLayoutWidget_3);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        comboBox = new QComboBox(horizontalLayoutWidget_3);
        comboBox->setObjectName("comboBox");

        horizontalLayout_2->addWidget(comboBox);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(horizontalLayoutWidget_3);
        label_6->setObjectName("label_6");

        horizontalLayout_6->addWidget(label_6);

        comboBox_4 = new QComboBox(horizontalLayoutWidget_3);
        comboBox_4->setObjectName("comboBox_4");

        horizontalLayout_6->addWidget(comboBox_4);


        horizontalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(horizontalLayoutWidget_3);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        comboBox_2 = new QComboBox(horizontalLayoutWidget_3);
        comboBox_2->setObjectName("comboBox_2");

        horizontalLayout_4->addWidget(comboBox_2);


        horizontalLayout_3->addLayout(horizontalLayout_4);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\354\235\274\354\240\225 \354\236\205\353\240\245", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\353\202\240\354\247\234:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\354\230\244\354\240\204", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\354\230\244\355\233\204", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\354\240\200\353\205\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATEINPUTWINDOW_H
