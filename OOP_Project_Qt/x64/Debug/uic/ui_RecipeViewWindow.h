/********************************************************************************
** Form generated from reading UI file 'RecipeViewWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPEVIEWWINDOW_H
#define UI_RECIPEVIEWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RecipeViewWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *FoodNameLable;
    QTextEdit *RecipeTextArea;
    QHBoxLayout *horizontalLayout;
    QPushButton *EditButton;
    QPushButton *DeleteButton;
    QPushButton *CloseButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RecipeViewWindow)
    {
        if (RecipeViewWindow->objectName().isEmpty())
            RecipeViewWindow->setObjectName("RecipeViewWindow");
        RecipeViewWindow->setWindowModality(Qt::NonModal);
        RecipeViewWindow->resize(450, 340);
        centralwidget = new QWidget(RecipeViewWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        FoodNameLable = new QLabel(centralwidget);
        FoodNameLable->setObjectName("FoodNameLable");
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        FoodNameLable->setFont(font);

        verticalLayout->addWidget(FoodNameLable);

        RecipeTextArea = new QTextEdit(centralwidget);
        RecipeTextArea->setObjectName("RecipeTextArea");
        RecipeTextArea->setReadOnly(true);

        verticalLayout->addWidget(RecipeTextArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        EditButton = new QPushButton(centralwidget);
        EditButton->setObjectName("EditButton");

        horizontalLayout->addWidget(EditButton);

        DeleteButton = new QPushButton(centralwidget);
        DeleteButton->setObjectName("DeleteButton");

        horizontalLayout->addWidget(DeleteButton);

        CloseButton = new QPushButton(centralwidget);
        CloseButton->setObjectName("CloseButton");

        horizontalLayout->addWidget(CloseButton);


        verticalLayout->addLayout(horizontalLayout);

        RecipeViewWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(RecipeViewWindow);
        statusbar->setObjectName("statusbar");
        RecipeViewWindow->setStatusBar(statusbar);

        retranslateUi(RecipeViewWindow);

        QMetaObject::connectSlotsByName(RecipeViewWindow);
    } // setupUi

    void retranslateUi(QMainWindow *RecipeViewWindow)
    {
        RecipeViewWindow->setWindowTitle(QCoreApplication::translate("RecipeViewWindow", "Recipe", nullptr));
        FoodNameLable->setText(QCoreApplication::translate("RecipeViewWindow", "Recipe Name", nullptr));
        EditButton->setText(QCoreApplication::translate("RecipeViewWindow", "Edit", nullptr));
        DeleteButton->setText(QCoreApplication::translate("RecipeViewWindow", "Delete", nullptr));
        CloseButton->setText(QCoreApplication::translate("RecipeViewWindow", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RecipeViewWindow: public Ui_RecipeViewWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPEVIEWWINDOW_H
