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

class Ui_DateInputWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QLineEdit *dateName;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateEdit *dateTime;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *morningMeal;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QSpinBox *morningNumOfHuman;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QComboBox *lunchMeal;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_7;
    QSpinBox *lunchNumOfHuman;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *dinnerMeal;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_8;
    QSpinBox *dinnerNumOfHuman;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *saveButton;
    QPushButton *escButton;
    QSpacerItem *verticalSpacer_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DateInputWindow)
    {
        if (DateInputWindow->objectName().isEmpty())
            DateInputWindow->setObjectName("DateInputWindow");
        DateInputWindow->resize(608, 204);
        centralwidget = new QWidget(DateInputWindow);
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

        dateName = new QLineEdit(centralwidget);
        dateName->setObjectName("dateName");

        horizontalLayout_7->addWidget(dateName);

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

        dateTime = new QDateEdit(centralwidget);
        dateTime->setObjectName("dateTime");

        horizontalLayout->addWidget(dateTime);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);

        morningMeal = new QComboBox(centralwidget);
        morningMeal->setObjectName("morningMeal");

        horizontalLayout_2->addWidget(morningMeal);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_5);

        morningNumOfHuman = new QSpinBox(centralwidget);
        morningNumOfHuman->setObjectName("morningNumOfHuman");

        horizontalLayout_9->addWidget(morningNumOfHuman);


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

        lunchMeal = new QComboBox(centralwidget);
        lunchMeal->setObjectName("lunchMeal");

        horizontalLayout_6->addWidget(lunchMeal);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(label_7);

        lunchNumOfHuman = new QSpinBox(centralwidget);
        lunchNumOfHuman->setObjectName("lunchNumOfHuman");

        horizontalLayout_10->addWidget(lunchNumOfHuman);


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

        dinnerMeal = new QComboBox(centralwidget);
        dinnerMeal->setObjectName("dinnerMeal");

        horizontalLayout_4->addWidget(dinnerMeal);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(label_8);

        dinnerNumOfHuman = new QSpinBox(centralwidget);
        dinnerNumOfHuman->setObjectName("dinnerNumOfHuman");

        horizontalLayout_11->addWidget(dinnerNumOfHuman);


        verticalLayout_5->addLayout(horizontalLayout_11);


        horizontalLayout_3->addLayout(verticalLayout_5);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName("saveButton");

        horizontalLayout_5->addWidget(saveButton);

        escButton = new QPushButton(centralwidget);
        escButton->setObjectName("escButton");

        horizontalLayout_5->addWidget(escButton);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        DateInputWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(DateInputWindow);
        statusbar->setObjectName("statusbar");
        DateInputWindow->setStatusBar(statusbar);

        retranslateUi(DateInputWindow);

        QMetaObject::connectSlotsByName(DateInputWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DateInputWindow)
    {
        DateInputWindow->setWindowTitle(QCoreApplication::translate("DateInputWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("DateInputWindow", "\354\235\274\354\240\225 \354\236\205\353\240\245", nullptr));
        label_9->setText(QCoreApplication::translate("DateInputWindow", "\354\235\274\354\240\225\353\252\205 : ", nullptr));
        label->setText(QCoreApplication::translate("DateInputWindow", "\353\202\240\354\247\234:", nullptr));
        label_3->setText(QCoreApplication::translate("DateInputWindow", "\354\230\244\354\240\204", nullptr));
        label_5->setText(QCoreApplication::translate("DateInputWindow", "\354\235\270\354\233\220\354\210\230 : ", nullptr));
        label_6->setText(QCoreApplication::translate("DateInputWindow", "\354\230\244\355\233\204", nullptr));
        label_7->setText(QCoreApplication::translate("DateInputWindow", "\354\235\270\354\233\220\354\210\230 : ", nullptr));
        label_4->setText(QCoreApplication::translate("DateInputWindow", "\354\240\200\353\205\201", nullptr));
        label_8->setText(QCoreApplication::translate("DateInputWindow", "\354\235\270\354\233\220\354\210\230 : ", nullptr));
        saveButton->setText(QCoreApplication::translate("DateInputWindow", "\354\240\200\354\236\245", nullptr));
        escButton->setText(QCoreApplication::translate("DateInputWindow", "\354\267\250\354\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DateInputWindow: public Ui_DateInputWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATEINPUTWINDOW_H
