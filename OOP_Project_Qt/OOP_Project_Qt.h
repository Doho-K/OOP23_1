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

    //皋牢芒
    Ui::MainWindow main;

    //饭矫乔 包府 芒
    Ui::RecipeListWindow recipeList;
    Ui::RecipeViewWindow recipeView;
    Ui::RecipeInputWindow recipeInput;

    //老沥 包府 芒
    Ui::DateInputWindow dateInput;
    Ui::DateListWindow dateList;
    Ui::DateViewWindow dateView;

public slots:
    //皋牢芒 备己
    void openMainWindow();

    //饭矫乔 包府 芒 备己
    void openRecipeInputWindow();
    void openRecipeListWindow();
    void openRecipeViewWindow(QModelIndex);

    //饭矫乔 包府
    void InputRecipeInfo();
    void openRecipeInputWindowForEdit();
    void deleteRecipeInfo();
    void deleteThisRecipeInfo();
    void setRecipeSearchInfo();

    //老沥 包府 芒 备己
    void openDateInputWindow();
    void openDateListWindow();
    void openDateViewWindow();

    //老沥 包府
    void InputDateInfo();
    void deleteDateInfo();
    void openDateInputWindowForEdit();
    void deleteThisDateInfo();
    void setDateSearchInfo();
};