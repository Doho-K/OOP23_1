#pragma once

#include <QtWidgets/QMainWindow>
#include <qmessagebox.h>
#include <string>

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

    //메인창
    Ui::MainWindow main;

    //레시피 관리 창
    Ui::RecipeListWindow recipeList;
    Ui::RecipeViewWindow recipeView;
    Ui::RecipeInputWindow recipeInput;

    //일정 관리 창
    Ui::DateInputWindow dateInput;
    Ui::DateListWindow dateList;
    Ui::DateViewWindow dateView;

public slots:
    //메인창 구성
    void openMainWindow();

    //레시피 관리 창 구성
    void openRecipeInputWindow();
    void openRecipeListWindow();
    void openRecipeViewWindow(QModelIndex);

    //레시피 관리
    void InputRecipeInfo();
    void openRecipeInputWindowForEdit();
    void deleteRecipeInfo();
    void deleteThisRecipeInfo();
    void setRecipeSearchInfo();

    //일정 관리 창 구성
    void openDateInputWindow();
    void openDateListWindow();
    void openDateViewWindow();

    //일정 관리
    void InputDateInfo();
    void deleteDateInfo();
    void openDateInputWindowForEdit();
    void deleteThisDateInfo();
    void setDateSearchInfo();
};