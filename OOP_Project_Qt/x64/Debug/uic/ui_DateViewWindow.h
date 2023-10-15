/********************************************************************************
** Form generated from reading UI file 'DateViewWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATEVIEWWINDOW_H
#define UI_DATEVIEWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DateViewWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *DateName;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateEdit *dateEdit;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *morningMeal;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QLabel *numOfMorning;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLabel *lunch;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_7;
    QLabel *numOfLunch;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *dinner;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_8;
    QLabel *numOfDinner;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_2;
    QTextBrowser *ingredients;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *editButton;
    QPushButton *deleteButton;
    QPushButton *escButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DateViewWindow)
    {
        if (DateViewWindow->objectName().isEmpty())
            DateViewWindow->setObjectName("DateViewWindow");
        DateViewWindow->resize(608, 352);
        centralwidget = new QWidget(DateViewWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        DateName = new QLabel(centralwidget);
        DateName->setObjectName("DateName");
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        DateName->setFont(font);

        verticalLayout->addWidget(DateName);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setReadOnly(true);

        horizontalLayout->addWidget(dateEdit);


        horizontalLayout_3->addLayout(horizontalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_3);

        morningMeal = new QLabel(centralwidget);
        morningMeal->setObjectName("morningMeal");

        horizontalLayout_2->addWidget(morningMeal);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(label_5);

        numOfMorning = new QLabel(centralwidget);
        numOfMorning->setObjectName("numOfMorning");

        horizontalLayout_9->addWidget(numOfMorning);


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

        lunch = new QLabel(centralwidget);
        lunch->setObjectName("lunch");

        horizontalLayout_6->addWidget(lunch);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_10->addWidget(label_7);

        numOfLunch = new QLabel(centralwidget);
        numOfLunch->setObjectName("numOfLunch");

        horizontalLayout_10->addWidget(numOfLunch);


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

        dinner = new QLabel(centralwidget);
        dinner->setObjectName("dinner");

        horizontalLayout_4->addWidget(dinner);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_11->addWidget(label_8);

        numOfDinner = new QLabel(centralwidget);
        numOfDinner->setObjectName("numOfDinner");

        horizontalLayout_11->addWidget(numOfDinner);


        verticalLayout_5->addLayout(horizontalLayout_11);


        horizontalLayout_3->addLayout(verticalLayout_5);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setFont(font);
        label_9->setTextFormat(Qt::MarkdownText);
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(label_9);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_8);

        ingredients = new QTextBrowser(centralwidget);
        ingredients->setObjectName("ingredients");

        verticalLayout->addWidget(ingredients);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        editButton = new QPushButton(centralwidget);
        editButton->setObjectName("editButton");

        horizontalLayout_5->addWidget(editButton);

        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName("deleteButton");

        horizontalLayout_5->addWidget(deleteButton);

        escButton = new QPushButton(centralwidget);
        escButton->setObjectName("escButton");

        horizontalLayout_5->addWidget(escButton);


        verticalLayout->addLayout(horizontalLayout_5);

        DateViewWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(DateViewWindow);
        statusbar->setObjectName("statusbar");
        DateViewWindow->setStatusBar(statusbar);

        retranslateUi(DateViewWindow);

        QMetaObject::connectSlotsByName(DateViewWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DateViewWindow)
    {
        DateViewWindow->setWindowTitle(QCoreApplication::translate("DateViewWindow", "DateView", nullptr));
        DateName->setText(QCoreApplication::translate("DateViewWindow", "Schedule Name", nullptr));
        label->setText(QCoreApplication::translate("DateViewWindow", "Date:", nullptr));
        label_3->setText(QCoreApplication::translate("DateViewWindow", "Morning", nullptr));
        morningMeal->setText(QString());
        label_5->setText(QCoreApplication::translate("DateViewWindow", "people", nullptr));
        numOfMorning->setText(QString());
        label_6->setText(QCoreApplication::translate("DateViewWindow", "Lunch", nullptr));
        lunch->setText(QString());
        label_7->setText(QCoreApplication::translate("DateViewWindow", "people", nullptr));
        numOfLunch->setText(QString());
        label_4->setText(QCoreApplication::translate("DateViewWindow", "Dinner", nullptr));
        dinner->setText(QString());
        label_8->setText(QCoreApplication::translate("DateViewWindow", "people", nullptr));
        numOfDinner->setText(QString());
        label_9->setText(QCoreApplication::translate("DateViewWindow", "All ingredient", nullptr));
        editButton->setText(QCoreApplication::translate("DateViewWindow", "Edit", nullptr));
        deleteButton->setText(QCoreApplication::translate("DateViewWindow", "Delete", nullptr));
        escButton->setText(QCoreApplication::translate("DateViewWindow", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DateViewWindow: public Ui_DateViewWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATEVIEWWINDOW_H
