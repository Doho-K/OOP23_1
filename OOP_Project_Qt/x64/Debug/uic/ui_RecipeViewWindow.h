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
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
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
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *RecipeTextArea;
    QScrollBar *verticalScrollBar;
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

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 430, 225));
        horizontalLayout_2 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        RecipeTextArea = new QTextEdit(scrollAreaWidgetContents);
        RecipeTextArea->setObjectName("RecipeTextArea");
        RecipeTextArea->setReadOnly(true);

        horizontalLayout_2->addWidget(RecipeTextArea);

        verticalScrollBar = new QScrollBar(scrollAreaWidgetContents);
        verticalScrollBar->setObjectName("verticalScrollBar");
        verticalScrollBar->setOrientation(Qt::Vertical);

        horizontalLayout_2->addWidget(verticalScrollBar);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

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
        FoodNameLable->setText(QCoreApplication::translate("RecipeViewWindow", "\354\235\214\354\213\235 \354\235\264\353\246\204", nullptr));
        EditButton->setText(QCoreApplication::translate("RecipeViewWindow", "\354\210\230\354\240\225", nullptr));
        DeleteButton->setText(QCoreApplication::translate("RecipeViewWindow", "\354\202\255\354\240\234", nullptr));
        CloseButton->setText(QCoreApplication::translate("RecipeViewWindow", "\353\213\253\352\270\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RecipeViewWindow: public Ui_RecipeViewWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPEVIEWWINDOW_H
