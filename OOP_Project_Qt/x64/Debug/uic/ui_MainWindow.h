/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *recommendLable;
    QGridLayout *gridLayout;
    QLabel *date1Dinner;
    QLabel *date4Lunch;
    QLabel *date2;
    QLabel *date2Lunch;
    QLabel *date;
    QLabel *date4Morning;
    QLabel *date3;
    QLabel *date5;
    QLabel *date6Lunch;
    QLabel *date2Dinner;
    QLabel *date1Lunch;
    QLabel *dinnerLabel;
    QLabel *date6Morning;
    QLabel *date6;
    QLabel *morningLable;
    QLabel *date5Morning;
    QLabel *date1;
    QLabel *date6Dinner;
    QLabel *date1Morning;
    QLabel *date7Dinner;
    QLabel *date3Morning;
    QLabel *date5Lunch;
    QLabel *date7Lunch;
    QLabel *date3Dinner;
    QLabel *date7;
    QLabel *date4Dinner;
    QLabel *date4;
    QLabel *lunchLabel;
    QLabel *date5Dinner;
    QLabel *date2Morning;
    QLabel *date3Lunch;
    QLabel *date7Morning;
    QLabel *dateListLabel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *recipeButton;
    QPushButton *dateButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(600, 400);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName("verticalLayout_2");
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

        verticalLayout_2->addWidget(label);

        recommendLable = new QLabel(centralWidget);
        recommendLable->setObjectName("recommendLable");
        QFont font1;
        font1.setPointSize(12);
        recommendLable->setFont(font1);
        recommendLable->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(recommendLable);


        verticalLayout->addLayout(verticalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName("gridLayout");
        date1Dinner = new QLabel(centralWidget);
        date1Dinner->setObjectName("date1Dinner");
        QFont font2;
        font2.setPointSize(10);
        date1Dinner->setFont(font2);
        date1Dinner->setFrameShape(QFrame::Box);
        date1Dinner->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date1Dinner, 4, 3, 1, 1);

        date4Lunch = new QLabel(centralWidget);
        date4Lunch->setObjectName("date4Lunch");
        date4Lunch->setFont(font2);
        date4Lunch->setFrameShape(QFrame::Box);
        date4Lunch->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date4Lunch, 3, 6, 1, 1);

        date2 = new QLabel(centralWidget);
        date2->setObjectName("date2");
        date2->setFont(font2);
        date2->setFrameShape(QFrame::Box);
        date2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date2, 1, 4, 1, 1);

        date2Lunch = new QLabel(centralWidget);
        date2Lunch->setObjectName("date2Lunch");
        date2Lunch->setFont(font2);
        date2Lunch->setFrameShape(QFrame::Box);
        date2Lunch->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date2Lunch, 3, 4, 1, 1);

        date = new QLabel(centralWidget);
        date->setObjectName("date");
        date->setFont(font2);
        date->setFrameShape(QFrame::Box);
        date->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date, 1, 2, 1, 1);

        date4Morning = new QLabel(centralWidget);
        date4Morning->setObjectName("date4Morning");
        date4Morning->setFont(font2);
        date4Morning->setFrameShape(QFrame::Box);
        date4Morning->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date4Morning, 2, 6, 1, 1);

        date3 = new QLabel(centralWidget);
        date3->setObjectName("date3");
        date3->setFont(font2);
        date3->setFrameShape(QFrame::Box);
        date3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date3, 1, 5, 1, 1);

        date5 = new QLabel(centralWidget);
        date5->setObjectName("date5");
        date5->setFont(font2);
        date5->setFrameShape(QFrame::Box);
        date5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date5, 1, 7, 1, 1);

        date6Lunch = new QLabel(centralWidget);
        date6Lunch->setObjectName("date6Lunch");
        date6Lunch->setFont(font2);
        date6Lunch->setFrameShape(QFrame::Box);
        date6Lunch->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date6Lunch, 3, 8, 1, 1);

        date2Dinner = new QLabel(centralWidget);
        date2Dinner->setObjectName("date2Dinner");
        date2Dinner->setFont(font2);
        date2Dinner->setFrameShape(QFrame::Box);
        date2Dinner->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date2Dinner, 4, 4, 1, 1);

        date1Lunch = new QLabel(centralWidget);
        date1Lunch->setObjectName("date1Lunch");
        date1Lunch->setFont(font2);
        date1Lunch->setFrameShape(QFrame::Box);
        date1Lunch->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date1Lunch, 3, 3, 1, 1);

        dinnerLabel = new QLabel(centralWidget);
        dinnerLabel->setObjectName("dinnerLabel");
        dinnerLabel->setFont(font2);
        dinnerLabel->setFrameShape(QFrame::Box);
        dinnerLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(dinnerLabel, 3, 2, 1, 1);

        date6Morning = new QLabel(centralWidget);
        date6Morning->setObjectName("date6Morning");
        date6Morning->setFont(font2);
        date6Morning->setFrameShape(QFrame::Box);
        date6Morning->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date6Morning, 2, 8, 1, 1);

        date6 = new QLabel(centralWidget);
        date6->setObjectName("date6");
        date6->setFont(font2);
        date6->setFrameShape(QFrame::Box);
        date6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date6, 1, 8, 1, 1);

        morningLable = new QLabel(centralWidget);
        morningLable->setObjectName("morningLable");
        morningLable->setFont(font2);
        morningLable->setFrameShape(QFrame::Box);
        morningLable->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(morningLable, 2, 2, 1, 1);

        date5Morning = new QLabel(centralWidget);
        date5Morning->setObjectName("date5Morning");
        date5Morning->setFont(font2);
        date5Morning->setFrameShape(QFrame::Box);
        date5Morning->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date5Morning, 2, 7, 1, 1);

        date1 = new QLabel(centralWidget);
        date1->setObjectName("date1");
        date1->setFont(font2);
        date1->setFrameShape(QFrame::Box);
        date1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date1, 1, 3, 1, 1);

        date6Dinner = new QLabel(centralWidget);
        date6Dinner->setObjectName("date6Dinner");
        date6Dinner->setFont(font2);
        date6Dinner->setFrameShape(QFrame::Box);
        date6Dinner->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date6Dinner, 4, 8, 1, 1);

        date1Morning = new QLabel(centralWidget);
        date1Morning->setObjectName("date1Morning");
        date1Morning->setFont(font2);
        date1Morning->setFrameShape(QFrame::Box);
        date1Morning->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date1Morning, 2, 3, 1, 1);

        date7Dinner = new QLabel(centralWidget);
        date7Dinner->setObjectName("date7Dinner");
        date7Dinner->setFont(font2);
        date7Dinner->setFrameShape(QFrame::Box);
        date7Dinner->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date7Dinner, 4, 9, 1, 1);

        date3Morning = new QLabel(centralWidget);
        date3Morning->setObjectName("date3Morning");
        date3Morning->setFont(font2);
        date3Morning->setFrameShape(QFrame::Box);
        date3Morning->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date3Morning, 2, 5, 1, 1);

        date5Lunch = new QLabel(centralWidget);
        date5Lunch->setObjectName("date5Lunch");
        date5Lunch->setFont(font2);
        date5Lunch->setFrameShape(QFrame::Box);
        date5Lunch->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date5Lunch, 3, 7, 1, 1);

        date7Lunch = new QLabel(centralWidget);
        date7Lunch->setObjectName("date7Lunch");
        date7Lunch->setFont(font2);
        date7Lunch->setFrameShape(QFrame::Box);
        date7Lunch->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date7Lunch, 3, 9, 1, 1);

        date3Dinner = new QLabel(centralWidget);
        date3Dinner->setObjectName("date3Dinner");
        date3Dinner->setFont(font2);
        date3Dinner->setFrameShape(QFrame::Box);
        date3Dinner->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date3Dinner, 4, 5, 1, 1);

        date7 = new QLabel(centralWidget);
        date7->setObjectName("date7");
        date7->setFont(font2);
        date7->setFrameShape(QFrame::Box);
        date7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date7, 1, 9, 1, 1);

        date4Dinner = new QLabel(centralWidget);
        date4Dinner->setObjectName("date4Dinner");
        date4Dinner->setFont(font2);
        date4Dinner->setFrameShape(QFrame::Box);
        date4Dinner->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date4Dinner, 4, 6, 1, 1);

        date4 = new QLabel(centralWidget);
        date4->setObjectName("date4");
        date4->setFont(font2);
        date4->setFrameShape(QFrame::Box);
        date4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date4, 1, 6, 1, 1);

        lunchLabel = new QLabel(centralWidget);
        lunchLabel->setObjectName("lunchLabel");
        lunchLabel->setFont(font2);
        lunchLabel->setFrameShape(QFrame::Box);
        lunchLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lunchLabel, 4, 2, 1, 1);

        date5Dinner = new QLabel(centralWidget);
        date5Dinner->setObjectName("date5Dinner");
        date5Dinner->setFont(font2);
        date5Dinner->setFrameShape(QFrame::Box);
        date5Dinner->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date5Dinner, 4, 7, 1, 1);

        date2Morning = new QLabel(centralWidget);
        date2Morning->setObjectName("date2Morning");
        date2Morning->setFont(font2);
        date2Morning->setFrameShape(QFrame::Box);
        date2Morning->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date2Morning, 2, 4, 1, 1);

        date3Lunch = new QLabel(centralWidget);
        date3Lunch->setObjectName("date3Lunch");
        date3Lunch->setFont(font2);
        date3Lunch->setFrameShape(QFrame::Box);
        date3Lunch->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date3Lunch, 3, 5, 1, 1);

        date7Morning = new QLabel(centralWidget);
        date7Morning->setObjectName("date7Morning");
        date7Morning->setFont(font2);
        date7Morning->setFrameShape(QFrame::Box);
        date7Morning->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(date7Morning, 2, 9, 1, 1);

        dateListLabel = new QLabel(centralWidget);
        dateListLabel->setObjectName("dateListLabel");
        dateListLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(dateListLabel, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        recipeButton = new QPushButton(centralWidget);
        recipeButton->setObjectName("recipeButton");
        recipeButton->setFont(font1);

        horizontalLayout->addWidget(recipeButton);

        dateButton = new QPushButton(centralWidget);
        dateButton->setObjectName("dateButton");
        dateButton->setFont(font1);

        horizontalLayout->addWidget(dateButton);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "OOP_Project", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Iiteractive Iintelligent\n"
"Kitchen Helper", nullptr));
        recommendLable->setText(QCoreApplication::translate("MainWindow", "Today's Menu : _____", nullptr));
        date1Dinner->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        date4Lunch->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        date2->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        date2Lunch->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        date->setText(QCoreApplication::translate("MainWindow", "Date", nullptr));
        date4Morning->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        date3->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        date5->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        date6Lunch->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        date2Dinner->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        date1Lunch->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        dinnerLabel->setText(QCoreApplication::translate("MainWindow", "Lunch", nullptr));
        date6Morning->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        date6->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        morningLable->setText(QCoreApplication::translate("MainWindow", "Morning", nullptr));
        date5Morning->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        date1->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        date6Dinner->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        date1Morning->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        date7Dinner->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        date3Morning->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        date5Lunch->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        date7Lunch->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        date3Dinner->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        date7->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        date4Dinner->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        date4->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        lunchLabel->setText(QCoreApplication::translate("MainWindow", "Dinner", nullptr));
        date5Dinner->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        date2Morning->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        date3Lunch->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        date7Morning->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        dateListLabel->setText(QCoreApplication::translate("MainWindow", "-Schedule-", nullptr));
        recipeButton->setText(QCoreApplication::translate("MainWindow", "Recipe Management", nullptr));
        dateButton->setText(QCoreApplication::translate("MainWindow", "Schedule Management", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
