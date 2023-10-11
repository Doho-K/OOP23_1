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
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DateInput
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateTimeEdit *dateTimeEdit;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QSpinBox *spinBox;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QComboBox *comboBox_4;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_7;
    QSpinBox *spinBox_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *comboBox_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_8;
    QSpinBox *spinBox_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DateInput)
    {
        if (DateInput->objectName().isEmpty())
            DateInput->setObjectName("DateInput");
        DateInput->resize(608, 204);
        centralwidget = new QWidget(DateInput);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");

        horizontalLayout_7->addWidget(label_9);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_7->addWidget(lineEdit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        dateTimeEdit = new QDateTimeEdit(centralwidget);
        dateTimeEdit->setObjectName("dateTimeEdit");

        horizontalLayout->addWidget(dateTimeEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);

        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");

        horizontalLayout_2->addWidget(comboBox);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_5);

        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName("spinBox");

        horizontalLayout_9->addWidget(spinBox);


        verticalLayout_3->addLayout(horizontalLayout_9);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_6);

        comboBox_4 = new QComboBox(centralwidget);
        comboBox_4->setObjectName("comboBox_4");

        horizontalLayout_6->addWidget(comboBox_4);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(label_7);

        spinBox_2 = new QSpinBox(centralwidget);
        spinBox_2->setObjectName("spinBox_2");

        horizontalLayout_10->addWidget(spinBox_2);


        verticalLayout_4->addLayout(horizontalLayout_10);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_4);

        comboBox_2 = new QComboBox(centralwidget);
        comboBox_2->setObjectName("comboBox_2");

        horizontalLayout_4->addWidget(comboBox_2);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(label_8);

        spinBox_3 = new QSpinBox(centralwidget);
        spinBox_3->setObjectName("spinBox_3");

        horizontalLayout_11->addWidget(spinBox_3);


        verticalLayout_5->addLayout(horizontalLayout_11);


        horizontalLayout_3->addLayout(verticalLayout_5);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_5->addWidget(pushButton_2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout_5->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        DateInput->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(DateInput);
        statusbar->setObjectName("statusbar");
        DateInput->setStatusBar(statusbar);

        retranslateUi(DateInput);

        QMetaObject::connectSlotsByName(DateInput);
    } // setupUi

    void retranslateUi(QMainWindow *DateInput)
    {
        DateInput->setWindowTitle(QCoreApplication::translate("DateInput", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("DateInput", "\354\235\274\354\240\225 \354\236\205\353\240\245", nullptr));
        label_9->setText(QCoreApplication::translate("DateInput", "\354\235\274\354\240\225\353\252\205 : ", nullptr));
        label->setText(QCoreApplication::translate("DateInput", "\353\202\240\354\247\234:", nullptr));
        label_3->setText(QCoreApplication::translate("DateInput", "\354\230\244\354\240\204", nullptr));
        label_5->setText(QCoreApplication::translate("DateInput", "\354\235\270\354\233\220\354\210\230 : ", nullptr));
        label_6->setText(QCoreApplication::translate("DateInput", "\354\230\244\355\233\204", nullptr));
        label_7->setText(QCoreApplication::translate("DateInput", "\354\235\270\354\233\220\354\210\230 : ", nullptr));
        label_4->setText(QCoreApplication::translate("DateInput", "\354\240\200\353\205\201", nullptr));
        label_8->setText(QCoreApplication::translate("DateInput", "\354\235\270\354\233\220\354\210\230 : ", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DateInput", "\354\240\200\354\236\245", nullptr));
        pushButton->setText(QCoreApplication::translate("DateInput", "\354\267\250\354\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DateInput: public Ui_DateInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATEINPUTWINDOW_H
