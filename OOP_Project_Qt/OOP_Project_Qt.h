#pragma once

#include <QtWidgets/QMainWindow>
#include <qmessagebox.h>

#include "greeter.h"

#include "ui_MainWindow.h"
#include "ui_RecipeListWindow.h"
#include "ui_RecipeInputWindow.h"
#include "ui_RecipeViewWindow.h"
#include "ui_DateListWindow.h"
#include "ui_DateInputWindow.h"
#include "ui_DateViewWindow.h"

class OOP_Project_Qt : public QMainWindow
{
    Q_OBJECT

public:
    OOP_Project_Qt(QWidget *parent = nullptr);
    ~OOP_Project_Qt();

private:
    Greeter greeter;

    //����â
    Ui::MainWindow main;

    //������ ���� â
    Ui::RecipeListWindow recipeList;
    Ui::RecipeViewWindow recipeView;
    Ui::RecipeInputWindow recipeInput;

    //���� ���� â
    Ui::DateInputWindow dateInput;
    Ui::DateListWindow dateList;
    Ui::DateViewWindow dateView;

public slots:
    //����â ����
    void openMainWindow();

    //������ ���� â ����
    void openRecipeInputWindow();
    void openRecipeListWindow();
    void openRecipeViewWindow(QModelIndex);

    //������ ����
    void InputRecipeInfo();
    void openRecipeInputWindowForEdit();
    void deleteRecipeInfo();
    void deleteThisRecipeInfo();
    void setRecipeSearchInfo();

    //���� ���� â ����
    void openDateInputWindow();
    void openDateListWindow();
    void openDateViewWindow();

    //���� ����
    void InputDateInfo();
    void deleteDateInfo();
    void openDateInputWindowForEdit();
    void deleteThisDateInfo();
    void setDateSearchInfo();
};