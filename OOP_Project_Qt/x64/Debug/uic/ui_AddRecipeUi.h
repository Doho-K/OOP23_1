/********************************************************************************
** Form generated from reading UI file 'AddRecipeUi.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRECIPEUI_H
#define UI_ADDRECIPEUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddRecipe
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *textEdit;
    QScrollBar *verticalScrollBar;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AddRecipe)
    {
        if (AddRecipe->objectName().isEmpty())
            AddRecipe->setObjectName("AddRecipe");
        AddRecipe->resize(450, 361);
        centralwidget = new QWidget(AddRecipe);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        lineEdit->setFont(font);
        lineEdit->setReadOnly(false);

        horizontalLayout_2->addWidget(lineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 430, 239));
        horizontalLayout_3 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        textEdit = new QTextEdit(scrollAreaWidgetContents);
        textEdit->setObjectName("textEdit");

        horizontalLayout_3->addWidget(textEdit);

        verticalScrollBar = new QScrollBar(scrollAreaWidgetContents);
        verticalScrollBar->setObjectName("verticalScrollBar");
        verticalScrollBar->setOrientation(Qt::Vertical);

        horizontalLayout_3->addWidget(verticalScrollBar);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        AddRecipe->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(AddRecipe);
        statusbar->setObjectName("statusbar");
        AddRecipe->setStatusBar(statusbar);

        retranslateUi(AddRecipe);

        QMetaObject::connectSlotsByName(AddRecipe);
    } // setupUi

    void retranslateUi(QMainWindow *AddRecipe)
    {
        AddRecipe->setWindowTitle(QCoreApplication::translate("AddRecipe", "AddRecipe", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AddRecipe", "\354\266\224\352\260\200", nullptr));
        pushButton->setText(QCoreApplication::translate("AddRecipe", "\354\267\250\354\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddRecipe: public Ui_AddRecipe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRECIPEUI_H
