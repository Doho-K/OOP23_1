/********************************************************************************
** Form generated from reading UI file 'RecipeListWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPELISTWINDOW_H
#define UI_RECIPELISTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_RecipeListWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *MainButton;
    QLineEdit *SearchText;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *AddButton;
    QPushButton *DeleteButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RecipeListWindow)
    {
        if (RecipeListWindow->objectName().isEmpty())
            RecipeListWindow->setObjectName("RecipeListWindow");
        RecipeListWindow->resize(800, 588);
        centralwidget = new QWidget(RecipeListWindow);
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

        SearchText = new QLineEdit(centralwidget);
        SearchText->setObjectName("SearchText");

        verticalLayout->addWidget(SearchText);

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

        RecipeListWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(RecipeListWindow);
        statusbar->setObjectName("statusbar");
        RecipeListWindow->setStatusBar(statusbar);

        retranslateUi(RecipeListWindow);

        QMetaObject::connectSlotsByName(RecipeListWindow);
    } // setupUi

    void retranslateUi(QMainWindow *RecipeListWindow)
    {
        RecipeListWindow->setWindowTitle(QCoreApplication::translate("RecipeListWindow", "OOP_Project", nullptr));
        label->setText(QCoreApplication::translate("RecipeListWindow", "\353\240\210\354\213\234\355\224\274 \353\252\251\353\241\235", nullptr));
        MainButton->setText(QCoreApplication::translate("RecipeListWindow", "\353\251\224\354\235\270\355\231\224\353\251\264\354\234\274\353\241\234 \353\217\214\354\225\204\352\260\200\352\270\260", nullptr));
        AddButton->setText(QCoreApplication::translate("RecipeListWindow", "\354\266\224\352\260\200", nullptr));
        DeleteButton->setText(QCoreApplication::translate("RecipeListWindow", "\354\202\255\354\240\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RecipeListWindow: public Ui_RecipeListWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPELISTWINDOW_H
