/********************************************************************************
** Form generated from reading UI file 'OOP_Project_Qt.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OOP_PROJECT_QT_H
#define UI_OOP_PROJECT_QT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OOP_Project_QtClass
{
public:
    QWidget *centralWidget;
    QPushButton *recipeButton;
    QPushButton *dateButton;
    QLabel *label;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *OOP_Project_QtClass)
    {
        if (OOP_Project_QtClass->objectName().isEmpty())
            OOP_Project_QtClass->setObjectName("OOP_Project_QtClass");
        OOP_Project_QtClass->resize(600, 400);
        centralWidget = new QWidget(OOP_Project_QtClass);
        centralWidget->setObjectName("centralWidget");
        recipeButton = new QPushButton(centralWidget);
        recipeButton->setObjectName("recipeButton");
        recipeButton->setGeometry(QRect(100, 250, 120, 50));
        QFont font;
        font.setPointSize(12);
        recipeButton->setFont(font);
        dateButton = new QPushButton(centralWidget);
        dateButton->setObjectName("dateButton");
        dateButton->setGeometry(QRect(350, 250, 120, 50));
        dateButton->setFont(font);
        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setEnabled(true);
        label->setGeometry(QRect(80, 50, 431, 121));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(false);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        font1.setStyleStrategy(QFont::PreferDefault);
        font1.setHintingPreference(QFont::PreferDefaultHinting);
        label->setFont(font1);
        label->setCursor(QCursor(Qt::ArrowCursor));
        label->setAlignment(Qt::AlignCenter);
        OOP_Project_QtClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(OOP_Project_QtClass);
        mainToolBar->setObjectName("mainToolBar");
        OOP_Project_QtClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(OOP_Project_QtClass);
        statusBar->setObjectName("statusBar");
        OOP_Project_QtClass->setStatusBar(statusBar);

        retranslateUi(OOP_Project_QtClass);

        QMetaObject::connectSlotsByName(OOP_Project_QtClass);
    } // setupUi

    void retranslateUi(QMainWindow *OOP_Project_QtClass)
    {
        OOP_Project_QtClass->setWindowTitle(QCoreApplication::translate("OOP_Project_QtClass", "OOP_Project", nullptr));
        recipeButton->setText(QCoreApplication::translate("OOP_Project_QtClass", "\353\240\210\354\213\234\355\224\274 \354\204\244\354\240\225", nullptr));
        dateButton->setText(QCoreApplication::translate("OOP_Project_QtClass", "\354\235\274\354\240\225 \354\204\240\355\203\235", nullptr));
        label->setText(QCoreApplication::translate("OOP_Project_QtClass", "\354\233\220\355\225\230\354\213\234\353\212\224 \353\251\224\353\211\264\353\245\274\n"
"\354\204\240\355\203\235\355\225\230\354\204\270\354\232\224", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OOP_Project_QtClass: public Ui_OOP_Project_QtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OOP_PROJECT_QT_H
