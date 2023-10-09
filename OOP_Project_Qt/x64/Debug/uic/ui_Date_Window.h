/********************************************************************************
** Form generated from reading UI file 'Date_Window.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATE_WINDOW_H
#define UI_DATE_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Date_Window
{
public:
    QWidget *centralwidget;
    QListWidget *listWidget;
    QLabel *label;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Date_Window)
    {
        if (Date_Window->objectName().isEmpty())
            Date_Window->setObjectName("Date_Window");
        Date_Window->resize(800, 600);
        centralwidget = new QWidget(Date_Window);
        centralwidget->setObjectName("centralwidget");
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 50, 771, 521));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 111, 31));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        Date_Window->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Date_Window);
        statusbar->setObjectName("statusbar");
        Date_Window->setStatusBar(statusbar);

        retranslateUi(Date_Window);

        QMetaObject::connectSlotsByName(Date_Window);
    } // setupUi

    void retranslateUi(QMainWindow *Date_Window)
    {
        Date_Window->setWindowTitle(QCoreApplication::translate("Date_Window", "OOP_Proejct", nullptr));
        label->setText(QCoreApplication::translate("Date_Window", "\354\235\274\354\240\225 \352\264\200\353\246\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Date_Window: public Ui_Date_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATE_WINDOW_H
