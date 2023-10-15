/********************************************************************************
** Form generated from reading UI file 'RecipeInputWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPEINPUTWINDOW_H
#define UI_RECIPEINPUTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RecipeInputWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLineEdit *nameOfIngredient1;
    QSpinBox *numOfIngredient1;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *nameOfIngredient2;
    QSpinBox *numOfIngredient2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *nameOfIngredient3;
    QSpinBox *numOfIngredient3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *nameOfIngredient4;
    QSpinBox *numOfIngredient4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *nameOfIngredient5;
    QSpinBox *numOfIngredient5;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_3;
    QLabel *cookTimeLable;
    QSpinBox *cookTime;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *saveButton;
    QPushButton *escButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RecipeInputWindow)
    {
        if (RecipeInputWindow->objectName().isEmpty())
            RecipeInputWindow->setObjectName("RecipeInputWindow");
        RecipeInputWindow->resize(450, 524);
        centralwidget = new QWidget(RecipeInputWindow);
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

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");

        horizontalLayout_7->addWidget(label_5);

        nameOfIngredient1 = new QLineEdit(centralwidget);
        nameOfIngredient1->setObjectName("nameOfIngredient1");

        horizontalLayout_7->addWidget(nameOfIngredient1);

        numOfIngredient1 = new QSpinBox(centralwidget);
        numOfIngredient1->setObjectName("numOfIngredient1");

        horizontalLayout_7->addWidget(numOfIngredient1);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        horizontalLayout_6->addWidget(label_4);

        nameOfIngredient2 = new QLineEdit(centralwidget);
        nameOfIngredient2->setObjectName("nameOfIngredient2");

        horizontalLayout_6->addWidget(nameOfIngredient2);

        numOfIngredient2 = new QSpinBox(centralwidget);
        numOfIngredient2->setObjectName("numOfIngredient2");

        horizontalLayout_6->addWidget(numOfIngredient2);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        horizontalLayout_5->addWidget(label_3);

        nameOfIngredient3 = new QLineEdit(centralwidget);
        nameOfIngredient3->setObjectName("nameOfIngredient3");

        horizontalLayout_5->addWidget(nameOfIngredient3);

        numOfIngredient3 = new QSpinBox(centralwidget);
        numOfIngredient3->setObjectName("numOfIngredient3");

        horizontalLayout_5->addWidget(numOfIngredient3);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        nameOfIngredient4 = new QLineEdit(centralwidget);
        nameOfIngredient4->setObjectName("nameOfIngredient4");

        horizontalLayout_3->addWidget(nameOfIngredient4);

        numOfIngredient4 = new QSpinBox(centralwidget);
        numOfIngredient4->setObjectName("numOfIngredient4");

        horizontalLayout_3->addWidget(numOfIngredient4);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        horizontalLayout_4->addWidget(label);

        nameOfIngredient5 = new QLineEdit(centralwidget);
        nameOfIngredient5->setObjectName("nameOfIngredient5");

        horizontalLayout_4->addWidget(nameOfIngredient5);

        numOfIngredient5 = new QSpinBox(centralwidget);
        numOfIngredient5->setObjectName("numOfIngredient5");

        horizontalLayout_4->addWidget(numOfIngredient5);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);

        cookTimeLable = new QLabel(centralwidget);
        cookTimeLable->setObjectName("cookTimeLable");

        horizontalLayout_8->addWidget(cookTimeLable);

        cookTime = new QSpinBox(centralwidget);
        cookTime->setObjectName("cookTime");

        horizontalLayout_8->addWidget(cookTime);


        verticalLayout_2->addLayout(horizontalLayout_8);


        verticalLayout->addLayout(verticalLayout_2);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName("saveButton");

        horizontalLayout->addWidget(saveButton);

        escButton = new QPushButton(centralwidget);
        escButton->setObjectName("escButton");

        horizontalLayout->addWidget(escButton);


        verticalLayout->addLayout(horizontalLayout);

        RecipeInputWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(RecipeInputWindow);
        statusbar->setObjectName("statusbar");
        RecipeInputWindow->setStatusBar(statusbar);

        retranslateUi(RecipeInputWindow);

        QMetaObject::connectSlotsByName(RecipeInputWindow);
    } // setupUi

    void retranslateUi(QMainWindow *RecipeInputWindow)
    {
        RecipeInputWindow->setWindowTitle(QCoreApplication::translate("RecipeInputWindow", "RecipeInput", nullptr));
        label_5->setText(QCoreApplication::translate("RecipeInputWindow", "\354\236\254\353\243\214\353\252\205 : ", nullptr));
        label_4->setText(QCoreApplication::translate("RecipeInputWindow", "\354\236\254\353\243\214\353\252\205 : ", nullptr));
        label_3->setText(QCoreApplication::translate("RecipeInputWindow", "\354\236\254\353\243\214\353\252\205 : ", nullptr));
        label_2->setText(QCoreApplication::translate("RecipeInputWindow", "\354\236\254\353\243\214\353\252\205 : ", nullptr));
        label->setText(QCoreApplication::translate("RecipeInputWindow", "\354\236\254\353\243\214\353\252\205 : ", nullptr));
        cookTimeLable->setText(QCoreApplication::translate("RecipeInputWindow", "\354\241\260\353\246\254 \354\213\234\352\260\204", nullptr));
        saveButton->setText(QCoreApplication::translate("RecipeInputWindow", "\354\240\200\354\236\245", nullptr));
        escButton->setText(QCoreApplication::translate("RecipeInputWindow", "\354\267\250\354\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RecipeInputWindow: public Ui_RecipeInputWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPEINPUTWINDOW_H
