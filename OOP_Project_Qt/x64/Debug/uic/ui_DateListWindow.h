/********************************************************************************
** Form generated from reading UI file 'DateListWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATELISTWINDOW_H
#define UI_DATELISTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DateListWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *MainButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QDateEdit *StartDate;
    QLabel *label_2;
    QDateEdit *EndDate;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *SearchText;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *AddButton;
    QPushButton *DeleteButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DateListWindow)
    {
        if (DateListWindow->objectName().isEmpty())
            DateListWindow->setObjectName("DateListWindow");
        DateListWindow->resize(800, 600);
        centralwidget = new QWidget(DateListWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        MainButton = new QPushButton(centralwidget);
        MainButton->setObjectName("MainButton");

        horizontalLayout->addWidget(MainButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        QFont font1;
        font1.setPointSize(15);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        StartDate = new QDateEdit(centralwidget);
        StartDate->setObjectName("StartDate");

        horizontalLayout_2->addWidget(StartDate);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        EndDate = new QDateEdit(centralwidget);
        EndDate->setObjectName("EndDate");

        horizontalLayout_2->addWidget(EndDate);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(verticalLayout_2);

        SearchText = new QLineEdit(centralwidget);
        SearchText->setObjectName("SearchText");

        verticalLayout->addWidget(SearchText);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");

        verticalLayout->addWidget(listWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        AddButton = new QPushButton(centralwidget);
        AddButton->setObjectName("AddButton");

        horizontalLayout_3->addWidget(AddButton);

        DeleteButton = new QPushButton(centralwidget);
        DeleteButton->setObjectName("DeleteButton");

        horizontalLayout_3->addWidget(DeleteButton);


        verticalLayout->addLayout(horizontalLayout_3);

        DateListWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(DateListWindow);
        statusbar->setObjectName("statusbar");
        DateListWindow->setStatusBar(statusbar);

        retranslateUi(DateListWindow);

        QMetaObject::connectSlotsByName(DateListWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DateListWindow)
    {
        DateListWindow->setWindowTitle(QCoreApplication::translate("DateListWindow", "DateListWindow", nullptr));
        label->setText(QCoreApplication::translate("DateListWindow", "\354\235\274\354\240\225 \352\264\200\353\246\254", nullptr));
        MainButton->setText(QCoreApplication::translate("DateListWindow", "\353\251\224\354\235\270\355\231\224\353\251\264\354\234\274\353\241\234 \353\217\214\354\225\204\352\260\200\352\270\260", nullptr));
        label_3->setText(QCoreApplication::translate("DateListWindow", "\353\202\240\354\247\234 \352\262\200\354\203\211", nullptr));
        label_2->setText(QCoreApplication::translate("DateListWindow", "~", nullptr));
        AddButton->setText(QCoreApplication::translate("DateListWindow", "\354\266\224\352\260\200", nullptr));
        DeleteButton->setText(QCoreApplication::translate("DateListWindow", "\354\202\255\354\240\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DateListWindow: public Ui_DateListWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATELISTWINDOW_H
