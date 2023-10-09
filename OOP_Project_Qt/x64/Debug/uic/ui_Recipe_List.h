/********************************************************************************
** Form generated from reading UI file 'Recipe_List.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPE_LIST_H
#define UI_RECIPE_LIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Recipe_List
{
public:
    QWidget *centralwidget;
    QListView *listView;
    QLabel *label;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *Recipe_List)
    {
        if (Recipe_List->objectName().isEmpty())
            Recipe_List->setObjectName("Recipe_List");
        Recipe_List->resize(800, 600);
        centralwidget = new QWidget(Recipe_List);
        centralwidget->setObjectName("centralwidget");
        listView = new QListView(centralwidget);
        listView->setObjectName("listView");
        listView->setGeometry(QRect(10, 50, 781, 501));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 121, 31));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        Recipe_List->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Recipe_List);
        statusbar->setObjectName("statusbar");
        Recipe_List->setStatusBar(statusbar);
        menubar = new QMenuBar(Recipe_List);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        Recipe_List->setMenuBar(menubar);

        retranslateUi(Recipe_List);

        QMetaObject::connectSlotsByName(Recipe_List);
    } // setupUi

    void retranslateUi(QMainWindow *Recipe_List)
    {
        Recipe_List->setWindowTitle(QCoreApplication::translate("Recipe_List", "OOP_Project", nullptr));
        label->setText(QCoreApplication::translate("Recipe_List", "\353\240\210\354\213\234\355\224\274 \353\252\251\353\241\235", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Recipe_List: public Ui_Recipe_List {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPE_LIST_H
