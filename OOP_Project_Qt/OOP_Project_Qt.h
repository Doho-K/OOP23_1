#pragma once

#include <QtWidgets/QMainWindow>
#include <qmessagebox.h>
#include "ui_MainUI.h"
#include "ui_Recipe_List.h"
#include "ui_RecipeWindow.h"
#include "ui_AddRecipeUi.h"
#include "ui_EditRecipeUi.h"
#include "ui_DateInputWindow.h"

class OOP_Project_Qt : public QMainWindow
{
    Q_OBJECT

public:
    OOP_Project_Qt(QWidget *parent = nullptr);
    ~OOP_Project_Qt();

private:
    Ui::MainUI main_ui;
    Ui::Recipe_List recipe_ui;
    Ui::Recipe recipeWindow_ui;
    Ui::AddRecipe addRecipe_ui;
    Ui::EditRecipe editRecipe_ui;

public slots:
    //���� ���
    void mainButtonClicked();
    void recipe_ButtonClicked();
    void date_ButtonClicked();

    //������ ���� ȭ��
    void callRecipeInfo(QModelIndex index);
    void addRecipeInfo();
    void deleteRecipeInfo();

    //������ ���� ȭ��
    void deleteThisRecipeInfo();
    void editRecipeWindow();

    //������ �߰� ȭ��
    void addRecipe();

    //������ ����ȭ��
    void editRecipeButton();
    void escButton();

    //���� ����Ʈ ȭ��
    void setSearchStartDate();
    void setSearchEndDate();
    void onDateView();
    void deleteDatePlan();
    void onDateInputeWindow();

    //���� �Է� ȭ��
    

    //���� Ȯ�� ȭ��
    void editDateInfo();
};
