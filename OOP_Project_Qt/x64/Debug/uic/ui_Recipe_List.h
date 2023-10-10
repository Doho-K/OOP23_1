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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Recipe_List
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *MainButton;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *AddButton;
    QPushButton *DeleteButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Recipe_List)
    {
        if (Recipe_List->objectName().isEmpty())
            Recipe_List->setObjectName("Recipe_List");
        Recipe_List->resize(800, 588);
        centralwidget = new QWidget(Recipe_List);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        MainButton = new QPushButton(centralwidget);
        MainButton->setObjectName("MainButton");

        horizontalLayout_2->addWidget(MainButton);


        verticalLayout->addLayout(horizontalLayout_2);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        AddButton = new QPushButton(centralwidget);
        AddButton->setObjectName("AddButton");

        horizontalLayout->addWidget(AddButton);

        DeleteButton = new QPushButton(centralwidget);
        DeleteButton->setObjectName("DeleteButton");

        horizontalLayout->addWidget(DeleteButton);


        verticalLayout->addLayout(horizontalLayout);

        Recipe_List->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Recipe_List);
        statusbar->setObjectName("statusbar");
        Recipe_List->setStatusBar(statusbar);

        retranslateUi(Recipe_List);

        QMetaObject::connectSlotsByName(Recipe_List);
    } // setupUi

    void retranslateUi(QMainWindow *Recipe_List)
    {
        Recipe_List->setWindowTitle(QCoreApplication::translate("Recipe_List", "OOP_Project", nullptr));
        label->setText(QCoreApplication::translate("Recipe_List", "\353\240\210\354\213\234\355\224\274 \353\252\251\353\241\235", nullptr));
        MainButton->setText(QCoreApplication::translate("Recipe_List", "\353\251\224\354\235\270\355\231\224\353\251\264\354\234\274\353\241\234 \353\217\214\354\225\204\352\260\200\352\270\260", nullptr));
        AddButton->setText(QCoreApplication::translate("Recipe_List", "\354\266\224\352\260\200", nullptr));
        DeleteButton->setText(QCoreApplication::translate("Recipe_List", "\354\202\255\354\240\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Recipe_List: public Ui_Recipe_List {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPE_LIST_H
