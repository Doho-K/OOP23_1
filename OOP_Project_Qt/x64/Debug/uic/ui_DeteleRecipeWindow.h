/********************************************************************************
** Form generated from reading UI file 'DeteleRecipeWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETELERECIPEWINDOW_H
#define UI_DETELERECIPEWINDOW_H

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

class Ui_DeleteRecipeWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DeleteRecipeWindow)
    {
        if (DeleteRecipeWindow->objectName().isEmpty())
            DeleteRecipeWindow->setObjectName("DeleteRecipeWindow");
        DeleteRecipeWindow->resize(366, 148);
        centralwidget = new QWidget(DeleteRecipeWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout);

        DeleteRecipeWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(DeleteRecipeWindow);
        statusbar->setObjectName("statusbar");
        DeleteRecipeWindow->setStatusBar(statusbar);

        retranslateUi(DeleteRecipeWindow);

        QMetaObject::connectSlotsByName(DeleteRecipeWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DeleteRecipeWindow)
    {
        DeleteRecipeWindow->setWindowTitle(QCoreApplication::translate("DeleteRecipeWindow", "Relly?", nullptr));
        label->setText(QCoreApplication::translate("DeleteRecipeWindow", "\354\240\225\353\247\220 \355\225\264\353\213\271 \353\240\210\354\213\234\355\224\274\353\245\274\n"
"\354\202\255\354\240\234\355\225\230\354\213\234\352\262\240\354\212\265\353\213\210\352\271\214?", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DeleteRecipeWindow", "\354\202\255\354\240\234\355\225\230\352\270\260", nullptr));
        pushButton->setText(QCoreApplication::translate("DeleteRecipeWindow", "\354\267\250\354\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteRecipeWindow: public Ui_DeleteRecipeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETELERECIPEWINDOW_H
