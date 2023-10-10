/********************************************************************************
** Form generated from reading UI file 'MainUI.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINUI_H
#define UI_MAINUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainUI
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *recipeButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *dateButton;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainUI)
    {
        if (MainUI->objectName().isEmpty())
            MainUI->setObjectName("MainUI");
        MainUI->resize(600, 400);
        centralWidget = new QWidget(MainUI);
        centralWidget->setObjectName("centralWidget");
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label = new QLabel(centralWidget);
        label->setObjectName("label");
        label->setEnabled(true);
        QFont font;
        font.setPointSize(30);
        font.setBold(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setStyleStrategy(QFont::PreferDefault);
        font.setHintingPreference(QFont::PreferDefaultHinting);
        label->setFont(font);
        label->setCursor(QCursor(Qt::ArrowCursor));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        recipeButton = new QPushButton(centralWidget);
        recipeButton->setObjectName("recipeButton");
        QFont font1;
        font1.setPointSize(12);
        recipeButton->setFont(font1);

        horizontalLayout->addWidget(recipeButton);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        dateButton = new QPushButton(centralWidget);
        dateButton->setObjectName("dateButton");
        dateButton->setFont(font1);

        horizontalLayout->addWidget(dateButton);

        horizontalSpacer_3 = new QSpacerItem(30, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        MainUI->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainUI);
        statusBar->setObjectName("statusBar");
        MainUI->setStatusBar(statusBar);

        retranslateUi(MainUI);

        QMetaObject::connectSlotsByName(MainUI);
    } // setupUi

    void retranslateUi(QMainWindow *MainUI)
    {
        MainUI->setWindowTitle(QCoreApplication::translate("MainUI", "OOP_Project", nullptr));
        label->setText(QCoreApplication::translate("MainUI", "\354\233\220\355\225\230\354\213\234\353\212\224 \353\251\224\353\211\264\353\245\274\n"
"\354\204\240\355\203\235\355\225\230\354\204\270\354\232\224", nullptr));
        recipeButton->setText(QCoreApplication::translate("MainUI", "\353\240\210\354\213\234\355\224\274 \352\264\200\353\246\254", nullptr));
        dateButton->setText(QCoreApplication::translate("MainUI", "\354\235\274\354\240\225 \352\264\200\353\246\254", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainUI: public Ui_MainUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINUI_H
