/********************************************************************************
** Form generated from reading UI file 'RecipeWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPEWINDOW_H
#define UI_RECIPEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Recipe
{
public:
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextEdit *textEdit;
    QScrollBar *verticalScrollBar;
    QLabel *label;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Recipe)
    {
        if (Recipe->objectName().isEmpty())
            Recipe->setObjectName("Recipe");
        Recipe->setWindowModality(Qt::NonModal);
        Recipe->resize(450, 290);
        centralwidget = new QWidget(Recipe);
        centralwidget->setObjectName("centralwidget");
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(10, 50, 431, 231));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 429, 229));
        textEdit = new QTextEdit(scrollAreaWidgetContents);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(0, 0, 401, 441));
        textEdit->setReadOnly(false);
        verticalScrollBar = new QScrollBar(scrollAreaWidgetContents);
        verticalScrollBar->setObjectName("verticalScrollBar");
        verticalScrollBar->setGeometry(QRect(410, 0, 16, 221));
        verticalScrollBar->setOrientation(Qt::Vertical);
        scrollArea->setWidget(scrollAreaWidgetContents);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 121, 41));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        Recipe->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Recipe);
        statusbar->setObjectName("statusbar");
        Recipe->setStatusBar(statusbar);

        retranslateUi(Recipe);

        QMetaObject::connectSlotsByName(Recipe);
    } // setupUi

    void retranslateUi(QMainWindow *Recipe)
    {
        Recipe->setWindowTitle(QCoreApplication::translate("Recipe", "Recipe", nullptr));
        label->setText(QCoreApplication::translate("Recipe", "\354\235\214\354\213\235 \354\235\264\353\246\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Recipe: public Ui_Recipe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPEWINDOW_H
