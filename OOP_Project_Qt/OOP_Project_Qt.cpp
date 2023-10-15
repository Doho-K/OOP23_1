#include "OOP_Project_Qt.h"
#include "qpushbutton.h"
#include "qstring.h"
#include <sstream>

using namespace std;

string selectString = "";

OOP_Project_Qt::OOP_Project_Qt(QWidget *parent) : QMainWindow(parent)
{
    openMainWindow();
}

OOP_Project_Qt::~OOP_Project_Qt()
{}

//메인 창 구현
void OOP_Project_Qt::openMainWindow() {
    main.setupUi(this);
    greeter.loadEverything();

    list<date> dates = greeter.callDateList();
    QLabel* dateLables[7] = { main.date1, main.date2, main.date3, main.date4, main.date5, main.date6, main.date7 };
    QLabel* dateMorningLables[7] = { main.date1Morning, main.date2Morning, main.date3Morning, main.date4Morning, main.date5Morning, main.date6Morning, main.date7Morning };
    QLabel* dateLunchLables[7] = { main.date1Lunch, main.date2Lunch, main.date3Lunch, main.date4Lunch, main.date5Lunch, main.date6Lunch, main.date7Lunch };
    QLabel* dateDinnerLables[7] = { main.date1Dinner, main.date2Dinner, main.date3Dinner, main.date4Dinner, main.date5Dinner, main.date6Dinner, main.date7Dinner };
    list<date>::iterator iter = dates.begin();
    int i = 0;
    for (iter; iter != dates.end(); iter++) {
        if (i > 6)
            break;

        int day = (*iter).getDateTime();
        string dayString = std::to_string(day / 10000) + "-" + std::to_string((day % 10000) / 100) + "-" + std::to_string(day % 100);
        dateLables[i]->setText(QString::fromStdString(dayString));
        dateMorningLables[i]->setText(QString::fromStdString((*iter).getMeal(0).getMeal_Name()));
        dateLunchLables[i]->setText(QString::fromStdString((*iter).getMeal(1).getMeal_Name()));
        dateDinnerLables[i]->setText(QString::fromStdString((*iter).getMeal(2).getMeal_Name()));
    }

    connect(main.recipeButton, SIGNAL(clicked()), this, SLOT(openRecipeListWindow()));
    connect(main.dateButton, SIGNAL(clicked()), this, SLOT(openDateListWindow()));
}

//레시피 관리 창 구현
void OOP_Project_Qt::openRecipeListWindow() {
    recipeList.setupUi(this);
    recipeList.listWidget->clear();

    setRecipeSearchInfo();

    connect(recipeList.MainButton, SIGNAL(clicked()), this, SLOT(openMainWindow()));

    connect(recipeList.SearchText, SIGNAL(textChanged(const QString)), SLOT(setRecipeSearchInfo()));
    connect(recipeList.listWidget, SIGNAL(doubleClicked(const QModelIndex)), this, SLOT(openRecipeViewWindow(QModelIndex)));

    connect(recipeList.AddButton, SIGNAL(clicked()), this, SLOT(openRecipeInputWindow()));
    connect(recipeList.DeleteButton, SIGNAL(clicked()), this, SLOT(deleteRecipeInfo()));
}

//레시피 정보 입력 창(레시피 추가)
void OOP_Project_Qt::openRecipeInputWindow() {
    recipeInput.setupUi(this);
    recipeInput.lineEdit->setText("");
    recipeInput.textEdit->setText("");

    connect(recipeInput.saveButton, SIGNAL(clicked()), this, SLOT(InputRecipeInfo()));
    connect(recipeInput.escButton, SIGNAL(clicked()), this, SLOT(openRecipeListWindow()));
}

//레시피 확인 창
void OOP_Project_Qt::openRecipeViewWindow(QModelIndex index) {
    QString a = recipeList.listWidget->itemFromIndex(index)->text();
    //Recipe target = greeter.searchExactRecipe(recipeList.listWidget->itemFromIndex(index)->text().toStdString());
    Recipe target = greeter.searchExactRecipe(a.toStdString());

    recipeView.setupUi(this);

    //recipeView.FoodNameLable->setText(QString::fromStdString(target.getName()));
    recipeView.FoodNameLable->setText(a);
    recipeView.RecipeTextArea->setText(QString::fromStdString(greeter.stringInfo(target.getName()) + "소요시간 : " + std::to_string(target.getCookingTime()) + "\n\n-조리법-\n" + target.getContent()));

    connect(recipeView.EditButton, SIGNAL(clicked()), this, SLOT(openRecipeInputWindowForEdit()));
    connect(recipeView.DeleteButton, SIGNAL(clicked()), this, SLOT(deleteThisRecipeInfo()));
    connect(recipeView.CloseButton, SIGNAL(clicked()), this, SLOT(openRecipeListWindow()));
}

//레시피 정보 적용
void OOP_Project_Qt::InputRecipeInfo() {
    if (recipeInput.lineEdit->text() != "") {
        vector<string> ingredient;
        vector<int> numOfIngredient;

        if (recipeInput.nameOfIngredient1->text() != "" && recipeInput.numOfIngredient1->value() > 0) {
            ingredient.push_back(recipeInput.nameOfIngredient1->text().toStdString());
            numOfIngredient.push_back(recipeInput.numOfIngredient1->value());
        }
        if (recipeInput.nameOfIngredient2->text() != "" && recipeInput.numOfIngredient2->value() > 0) {
            ingredient.push_back(recipeInput.nameOfIngredient2->text().toStdString());
            numOfIngredient.push_back(recipeInput.numOfIngredient2->value());
        }
        if (recipeInput.nameOfIngredient3->text() != "" && recipeInput.numOfIngredient3->value() > 0) {
            ingredient.push_back(recipeInput.nameOfIngredient3->text().toStdString());
            numOfIngredient.push_back(recipeInput.numOfIngredient3->value());
        }
        if (recipeInput.nameOfIngredient4->text() != "" && recipeInput.numOfIngredient4->value() > 0) {
            ingredient.push_back(recipeInput.nameOfIngredient4->text().toStdString());
            numOfIngredient.push_back(recipeInput.numOfIngredient4->value());
        }
        if (recipeInput.nameOfIngredient5->text() != "" && recipeInput.numOfIngredient5->value() > 0) {
            ingredient.push_back(recipeInput.nameOfIngredient5->text().toStdString());
            numOfIngredient.push_back(recipeInput.numOfIngredient5->value());
        }

        if (recipeInput.cookTime->value() <= 0) {
            return;
        }

        greeter.addRecipe(recipeInput.lineEdit->text().toStdString(), ingredient, numOfIngredient, recipeInput.cookTime->value(), recipeInput.textEdit->toPlainText().toStdString());
        greeter.saveEverything();

        openRecipeListWindow();
    }
}

//레시피 삭제
void OOP_Project_Qt::deleteRecipeInfo() {
    if (recipeList.listWidget->currentItem() != NULL) {
        string tmp = recipeList.listWidget->currentItem()->text().toStdString();
        recipeList.listWidget->takeItem(recipeList.listWidget->currentRow());
    }
}

//레시피 검색 정보 적용
void OOP_Project_Qt::setRecipeSearchInfo() {
    recipeList.listWidget->clear();
    vector<Recipe> recipes = greeter.callRecipeHaveString(recipeList.SearchText->text().toStdString());
    for (Recipe _recipe : recipes) {
       recipeList.listWidget->addItem(QString::fromStdString(_recipe.getName()));
    }
}

//recipeViewWindow에서 수정 버튼을 클릭 시
void OOP_Project_Qt::openRecipeInputWindowForEdit() {
    Recipe recipe = greeter.searchExactRecipe(recipeView.FoodNameLable->text().toStdString());
    recipeInput.setupUi(this);

    recipeInput.lineEdit->setText(QString::fromStdString(recipe.getName()));
    recipeInput.textEdit->setText(QString::fromStdString(recipe.getContent()));

    QLineEdit *nameOfIngredients[5] = { recipeInput.nameOfIngredient1, recipeInput.nameOfIngredient2, recipeInput.nameOfIngredient3, recipeInput.nameOfIngredient4, recipeInput.nameOfIngredient5 };
    QSpinBox *numOfIngredients[5] = { recipeInput.numOfIngredient1, recipeInput.numOfIngredient2, recipeInput.numOfIngredient3, recipeInput.numOfIngredient4, recipeInput.numOfIngredient5 };
    
    for (int i = 0; i < recipe.get_Ingredient_size(); i++) {
        nameOfIngredients[i]->setText(QString::fromStdString(recipe.getIngredientsName()[i]));
        numOfIngredients[i]->setValue(recipe.getIngredientsScale()[i]);
    }
    

    connect(recipeInput.saveButton, SIGNAL(clicked()), this, SLOT(InputRecipeInfo()));
    connect(recipeInput.escButton, SIGNAL(clicked()), this, SLOT(openRecipeListWindow()));
}

//recipeViewWindow에서 삭제 버튼을 클릭 시
void OOP_Project_Qt::deleteThisRecipeInfo() {
    //greeter.deleteRecipe(recipeInput.lineEdit->text().toStdString());

    openRecipeListWindow();
}

//*****************************************************************************************************************************************************//

//일정 관리 창 구현
void OOP_Project_Qt::openDateListWindow() {
    dateList.setupUi(this);

    setDateSearchInfo();

    connect(dateList.MainButton, SIGNAL(clicked()), this, SLOT(openMainWindow()));

    connect(dateList.StartDate, SIGNAL(dateTimeChanged(const QDateTime)), this, SLOT(setDateSearchInfo()));
    connect(dateList.EndDate, SIGNAL(dateTimeChanged(const QDateTime)), this, SLOT(setDateSearchInfo()));
    connect(dateList.SearchText, SIGNAL(textChanged(const QString)), this, SLOT(setDateSearchInfo()));

    connect(dateList.listWidget, SIGNAL(doubleClicked(const QModelIndex)), this, SLOT(openDateViewWindow()));

    connect(dateList.AddButton, SIGNAL(clicked()), this, SLOT(openDateInputWindow()));
    connect(dateList.DeleteButton, SIGNAL(clicked()), this, SLOT(deleteDateInfo()));
}

//일정 정보 입력 창 구현
void OOP_Project_Qt::openDateInputWindow() {
    dateInput.setupUi(this);

    dateInput.morningMeal->addItem(QString::fromStdString(""));
    dateInput.lunchMeal->addItem(QString::fromStdString(""));
    dateInput.dinnerMeal->addItem(QString::fromStdString(""));
    //목록
    for (Recipe recipe : greeter.callRecipe()) {
        dateInput.morningMeal->addItem(QString::fromStdString(recipe.getName()));
        dateInput.lunchMeal->addItem(QString::fromStdString(recipe.getName()));
        dateInput.dinnerMeal->addItem(QString::fromStdString(recipe.getName()));
    }

    connect(dateInput.saveButton, SIGNAL(clicked()), SLOT(InputDateInfo()));
    connect(dateInput.escButton, SIGNAL(clicked()), SLOT(openDateListWindow()));
}

//일정 정보 확인 창 구현
void OOP_Project_Qt::openDateViewWindow() {
    istringstream s(dateList.listWidget->currentItem()->text().toStdString());
    string t;
    getline(s, t, ':');
    dateView.setupUi(this);
    
    try
    {
        date target = greeter.callDate(stoi(t));

        dateView.DateName->setText(QString::fromStdString(target.getDateName()));
        dateView.dateEdit->setDate(QDate(target.getDateTime() / 10000, (target.getDateTime() % 10000) / 100, target.getDateTime() % 100));

        dateView.morningMeal->setText(QString::fromStdString(target.getMeal(0).getMeal_Name()));
        dateView.numOfMorning->setText(QString::fromStdString(std::to_string(target.getMeal(0).getNum_people())));

        dateView.lunch->setText(QString::fromStdString(target.getMeal(1).getMeal_Name()));
        dateView.numOfLunch->setText(QString::fromStdString(std::to_string(target.getMeal(1).getNum_people())));

        dateView.dinner->setText(QString::fromStdString(target.getMeal(2).getMeal_Name()));
        dateView.numOfDinner->setText(QString::fromStdString(std::to_string(target.getMeal(2).getNum_people())));

        string tmp = "";
        for (int i = 0; i < 3; i++) {
            if (target.getMeal(i).getMeal_Name() != "") {
                tmp += greeter.stringInfo(target.getMeal(i).getMeal_Name());
            }
        }
        dateView.ingredients->setText(QString::fromStdString("tmp"));
    }
    catch (const std::exception& e)
    {
        openDateListWindow();
    }

    connect(dateView.editButton, SIGNAL(clicked()), SLOT(openDateInputWindowForEdit()));
    connect(dateView.deleteButton, SIGNAL(clicked()), SLOT(deleteThisDateInfo()));
    connect(dateView.escButton, SIGNAL(clicked()), SLOT(openDateListWindow()));
}

//일정 정보 적용
void OOP_Project_Qt::InputDateInfo() {
    if (dateInput.dateName->text() == "") {
        return;
    }

    int dateNum = dateInput.dateTime->date().year() * 10000 + dateInput.dateTime->date().month() * 100 + dateInput.dateTime->date().day();
    vector<string> mealInfo;
    mealInfo.push_back(dateInput.morningMeal->currentText().toStdString());
    mealInfo.push_back(dateInput.lunchMeal->currentText().toStdString());
    mealInfo.push_back(dateInput.dinnerMeal->currentText().toStdString());

    vector<int> numOfMeal;
    numOfMeal.push_back(dateInput.morningNumOfHuman->value());
    numOfMeal.push_back(dateInput.lunchNumOfHuman->value());
    numOfMeal.push_back(dateInput.dinnerNumOfHuman->value());

    greeter.addPlan(dateNum, dateInput.dateName->text().toStdString(), mealInfo, numOfMeal);
    greeter.saveEverything();
    openDateListWindow();
}

void OOP_Project_Qt::deleteDateInfo() {
    //
}

void OOP_Project_Qt::openDateInputWindowForEdit() {
    dateInput.setupUi(this);

    //목록

    connect(dateInput.saveButton, SIGNAL(clicked()), SLOT(InputDateInfo()));
    connect(dateInput.escButton, SIGNAL(clicked()), SLOT(openDateListWindow()));

}

void OOP_Project_Qt::deleteThisDateInfo() {
    openDateListWindow();
}

void OOP_Project_Qt::setDateSearchInfo() {
    for (date _date : greeter.callDateList()) {
        dateList.listWidget->addItem(QString::fromStdString(std::to_string(_date.getDateTime()) + ":" + _date.getDateName()));
    }
}