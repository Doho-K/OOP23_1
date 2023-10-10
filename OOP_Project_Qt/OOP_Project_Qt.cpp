#include "OOP_Project_Qt.h"
#include "qpushbutton.h"
#include "qstring.h"
using namespace std;

string selectString = "";
map<string, string> a;

OOP_Project_Qt::OOP_Project_Qt(QWidget *parent)
    : QMainWindow(parent)
{
    mainButtonClicked();

    a.insert({ "aa", "150" });
}

OOP_Project_Qt::~OOP_Project_Qt()
{}

//레시피 창 구현
void OOP_Project_Qt::recipe_ButtonClicked() {
    recipe_ui.setupUi(this);
    recipe_ui.listWidget->clear();
    
    for (auto const& [key, val] : a) {
        QListWidgetItem* item = new QListWidgetItem(QString::fromStdString(key));
        recipe_ui.listWidget->addItem(item);
    }

    connect(recipe_ui.MainButton, SIGNAL(clicked()), this, SLOT(mainButtonClicked()));
    connect(recipe_ui.AddButton, SIGNAL(clicked()), this, SLOT(addRecipeInfo()));
    connect(recipe_ui.DeleteButton, SIGNAL(clicked()), this, SLOT(deleteRecipeInfo()));
    connect(recipe_ui.listWidget, SIGNAL(doubleClicked(const QModelIndex)), this, SLOT(callRecipeInfo(QModelIndex)));
}

void OOP_Project_Qt::date_ButtonClicked() {
    date_ui.setupUi(this);
}

void OOP_Project_Qt::mainButtonClicked() {
    main_ui.setupUi(this);

    connect(main_ui.recipeButton, SIGNAL(clicked()), this, SLOT(recipe_ButtonClicked()));
    connect(main_ui.dateButton, SIGNAL(clicked()), this, SLOT(date_ButtonClicked()));
}

void OOP_Project_Qt::callRecipeInfo(QModelIndex index) {
    recipeWindow_ui.setupUi(this);
    recipeWindow_ui.FoodNameLable->setText(recipe_ui.listWidget->itemFromIndex(index)->text());
    recipeWindow_ui.RecipeTextArea->setText(QString::fromStdString(a[recipe_ui.listWidget->itemFromIndex(index)->text().toStdString()]));
    connect(recipeWindow_ui.DeleteButton, SIGNAL(clicked()), this, SLOT(deleteThisRecipeInfo()));
    connect(recipeWindow_ui.CloseButton, SIGNAL(clicked()), this, SLOT(recipe_ButtonClicked()));
    connect(recipeWindow_ui.EditButton, SIGNAL(clicked()), this, SLOT(editRecipeWindow()));
}

void OOP_Project_Qt::addRecipeInfo() {
    addRecipe_ui.setupUi(this);
    addRecipe_ui.lineEdit->setText("");
    addRecipe_ui.textEdit->setText("");

    connect(addRecipe_ui.pushButton_2, SIGNAL(clicked()), this, SLOT(addRecipe()));
    connect(addRecipe_ui.pushButton, SIGNAL(clicked()), this, SLOT(recipe_ButtonClicked()));
}

void OOP_Project_Qt::deleteRecipeInfo() {
    if (recipe_ui.listWidget->currentItem() != NULL) {
        string tmp = recipe_ui.listWidget->currentItem()->text().toStdString();
        recipe_ui.listWidget->takeItem(recipe_ui.listWidget->currentRow());
        a.erase(tmp);
    }
}

void OOP_Project_Qt::deleteThisRecipeInfo() {
    a.erase(recipeWindow_ui.FoodNameLable->text().toStdString());
    recipe_ButtonClicked();
}

void OOP_Project_Qt::editRecipeWindow() {
    selectString = recipeWindow_ui.FoodNameLable->text().toStdString();

    editRecipe_ui.setupUi(this);
    editRecipe_ui.lineEdit->setText(QString::fromStdString(selectString));
    editRecipe_ui.textEdit->setText(QString::fromStdString(a[selectString]));

    connect(editRecipe_ui.pushButton_2, SIGNAL(clicked()), this, SLOT(editRecipeButton()));
    connect(editRecipe_ui.pushButton, SIGNAL(clicked()), this, SLOT(recipe_ButtonClicked()));
}

void OOP_Project_Qt::addRecipe() {
    a.insert({ addRecipe_ui.lineEdit->text().toStdString(), addRecipe_ui.textEdit->toHtml().toStdString() });
    recipe_ButtonClicked();
}

void OOP_Project_Qt::editRecipeButton() {
    if (selectString != "") {
        a.erase(selectString);
        a.insert({ editRecipe_ui.lineEdit->text().toStdString(), editRecipe_ui.textEdit->toHtml().toStdString() });
    }
    recipe_ButtonClicked();
}

void OOP_Project_Qt::escButton() {

}