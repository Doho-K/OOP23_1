#pragma once

#include <QtWidgets/QMainWindow>
#include <qmessagebox.h>
#include "ui_OOP_Project_Qt.h"
#include "ui_Recipe_List.h"
#include "ui_Date_Window.h"

class OOP_Project_Qt : public QMainWindow
{
    Q_OBJECT

public:
    OOP_Project_Qt(QWidget *parent = nullptr);
    ~OOP_Project_Qt();

private:
    Ui::OOP_Project_QtClass main_ui;
    Ui::Recipe_List recipe_ui;
    Ui::Date_Window date_ui;

public slots:
    void recipe_ButtonClicked();
    void date_ButtonClicked();
};
