#pragma once

#include <QtWidgets/QMainWindow>
#include <qmessagebox.h>
#include "ui_MainUI.h"
#include "ui_Recipe_List.h"
#include "ui_Date_Window.h"
#include "ui_RecipeWindow.h"
#include "ui_AddRecipeUi.h"
#include "ui_EditRecipeUi.h"

class OOP_Project_Qt : public QMainWindow
{
    Q_OBJECT

public:
    OOP_Project_Qt(QWidget *parent = nullptr);
    ~OOP_Project_Qt();

private:
    Ui::MainUI main_ui;
    Ui::Recipe_List recipe_ui;
    Ui::Date_Window date_ui;
    Ui::Recipe recipeWindow_ui;
    Ui::AddRecipe addRecipe_ui;
    Ui::EditRecipe editRecipe_ui;

public slots:
    //공통 사용
    void mainButtonClicked();
    void recipe_ButtonClicked();
    void date_ButtonClicked();

    //레시피 관리 화면
    void callRecipeInfo(QModelIndex index);
    void addRecipeInfo();
    void deleteRecipeInfo();

    //레시피 정보 화면
    void deleteThisRecipeInfo();
    void editRecipeWindow();

    //레시피 추가 화면
    void addRecipe();

    //레시피 수정화면
    void editRecipeButton();
    void escButton();
};
