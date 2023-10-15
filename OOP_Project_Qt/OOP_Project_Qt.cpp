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

    time_t t = std::time(nullptr);
    tm* tt = localtime(&t);
    int n = (tt->tm_year + 1900) * 10000 + (tt->tm_mon + 1) * 100 + tt->tm_mday;

    list<date> dates = greeter.callDateList();
    QLabel* dateLables[7] = { main.date1, main.date2, main.date3, main.date4, main.date5, main.date6, main.date7 };
    QLabel* dateMorningLables[7] = { main.date1Morning, main.date2Morning, main.date3Morning, main.date4Morning, main.date5Morning, main.date6Morning, main.date7Morning };
    QLabel* dateLunchLables[7] = { main.date1Lunch, main.date2Lunch, main.date3Lunch, main.date4Lunch, main.date5Lunch, main.date6Lunch, main.date7Lunch };
    QLabel* dateDinnerLables[7] = { main.date1Dinner, main.date2Dinner, main.date3Dinner, main.date4Dinner, main.date5Dinner, main.date6Dinner, main.date7Dinner };
    
    list<date>::iterator iter = dates.begin();
    int i = 0;
    for (iter; iter != dates.end(); iter++) {
        int day = (*iter).getDateTime();
        if (i > 6)
            break;

        if (day >= n) {
            //string dayString = std::to_string(day / 10000) + "-" + std::to_string((day % 10000) / 100) + "-" + std::to_string(day % 100);
            //dateLables[i]->setText(QString::fromStdString(dayString));
            dateLables[i]->setText(QString::fromStdString(std::to_string(day)));
            dateMorningLables[i]->setText(QString::fromStdString((*iter).getMeal(0).getMeal_Name()));
            dateLunchLables[i]->setText(QString::fromStdString((*iter).getMeal(1).getMeal_Name()));
            dateDinnerLables[i]->setText(QString::fromStdString((*iter).getMeal(2).getMeal_Name()));
            i++;
        }
    }
    
    try
    {
        string recom = "How about this menu? - ";
        ///*
        for (string t : greeter.randomRecipe(1)) {
            recom += t;
        }//*/
        //recom += "떡볶이";
        main.recommendLable->setText(QString::fromStdString(recom));
    }
    catch (const std::exception&)
    {
        main.recommendLable->setText(QString::fromStdString("-Error-"));
    }    

    connect(main.recipeButton, SIGNAL(clicked()), this, SLOT(openRecipeListWindow()));
    connect(main.dateButton, SIGNAL(clicked()), this, SLOT(openDateListWindow()));
}

//레시피 관리 창 구현
void OOP_Project_Qt::openRecipeListWindow() {
    selectString = "";
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
    try
    {
        QString a = recipeList.listWidget->itemFromIndex(index)->text();
        //Recipe target = greeter.searchExactRecipe(recipeList.listWidget->itemFromIndex(index)->text().toStdString());
        Recipe target = greeter.searchExactRecipe(a.toStdString());

        recipeView.setupUi(this);

        //recipeView.FoodNameLable->setText(QString::fromStdString(target.getName()));
        recipeView.FoodNameLable->setText(a);
        recipeView.RecipeTextArea->setText(QString::fromStdString("-Ingredient-\n" + greeter.stringInfo(target.getName()) + "\n-Cooking Time : " + std::to_string(target.getCookingTime()) + "\n\n-Recipe-\n" + target.getContent()));
    }
    catch (const std::exception&)
    {
        QMessageBox box;
        box.setText("-Error-");
        recipeList.setupUi(this);
    }

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

        if (selectString != "") {
            greeter.addRecipe(recipeInput.lineEdit->text().toStdString(), ingredient, numOfIngredient, recipeInput.cookTime->value(), recipeInput.textEdit->toPlainText().toStdString());
        }
        else {
            greeter.editRecipe(selectString, recipeInput.lineEdit->text().toStdString(), ingredient, numOfIngredient, recipeInput.cookTime->value(), recipeInput.textEdit->toPlainText().toStdString());
        }
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
    try
    {
        Recipe recipe = greeter.searchExactRecipe(recipeView.FoodNameLable->text().toStdString());
        selectString = recipe.getName();
        recipeInput.setupUi(this);

        recipeInput.lineEdit->setText(QString::fromStdString(recipe.getName()));
        recipeInput.textEdit->setText(QString::fromStdString(recipe.getContent()));

        QLineEdit* nameOfIngredients[5] = { recipeInput.nameOfIngredient1, recipeInput.nameOfIngredient2, recipeInput.nameOfIngredient3, recipeInput.nameOfIngredient4, recipeInput.nameOfIngredient5 };
        QSpinBox* numOfIngredients[5] = { recipeInput.numOfIngredient1, recipeInput.numOfIngredient2, recipeInput.numOfIngredient3, recipeInput.numOfIngredient4, recipeInput.numOfIngredient5 };

        recipeInput.cookTime->setValue(recipe.getCookingTime());

        for (int i = 0; i < recipe.get_Ingredient_size() && i < 5; i++) {
            nameOfIngredients[i]->setText(QString::fromStdString(recipe.getIngredientsName().at(i)));
            numOfIngredients[i]->setValue(recipe.getIngredientsScale().at(i));
        }
    }
    catch (const std::exception&)
    {
        QMessageBox::information(this, "Error", "Unknown Error occurred");
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
    selectString = "";
    dateList.setupUi(this);

    setDateSearchInfo();

    connect(dateList.MainButton, SIGNAL(clicked()), this, SLOT(openMainWindow()));

    time_t t = std::time(nullptr);
    tm* tt = localtime(&t);

    dateList.StartDate->setDate(QDate(tt->tm_year + 1900, tt->tm_mon + 1, tt->tm_mday));
    dateList.EndDate->setDate(QDate(tt->tm_year + 1900 + (tt->tm_mon + 4 > 11 ? 1 : 0), (tt->tm_mon + 4) % 12, tt->tm_mday));

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

    dateInput.dateName->setText("");
    time_t t = std::time(nullptr);
    tm *tt = localtime(&t);
    
    dateInput.dateTime->setDate(QDate(tt->tm_year + 1900, tt->tm_mon + 1, tt->tm_mday));

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
    selectString = dateList.listWidget->currentItem()->text().toStdString();
    istringstream s(selectString);
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

        dateView.ingredients->setText(QString::fromStdString(greeter.allIngredient(target)));
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

    if (selectString != "") {
        greeter.editPlan(stoi(selectString), dateNum, dateInput.dateName->text().toStdString(), mealInfo, numOfMeal);
    }
    else {
        greeter.addPlan(dateNum, dateInput.dateName->text().toStdString(), mealInfo, numOfMeal);
    }
    greeter.saveEverything();
    openDateListWindow();
}

void OOP_Project_Qt::deleteDateInfo() {
    //
}

void OOP_Project_Qt::openDateInputWindowForEdit() {
    dateInput.setupUi(this);
    date target = greeter.callDate(stoi(selectString));

    dateInput.dateName->setText(QString::fromStdString(target.getDateName()));
    dateInput.dateTime->setDate(QDate(target.getDateTime() / 10000, (target.getDateTime() % 10000) / 100, target.getDateTime() % 100));

    dateInput.morningMeal->addItem(QString::fromStdString(""));
    dateInput.lunchMeal->addItem(QString::fromStdString(""));
    dateInput.dinnerMeal->addItem(QString::fromStdString(""));

    for (Recipe recipe : greeter.callRecipe()) {
        dateInput.morningMeal->addItem(QString::fromStdString(recipe.getName()));
        dateInput.lunchMeal->addItem(QString::fromStdString(recipe.getName()));
        dateInput.dinnerMeal->addItem(QString::fromStdString(recipe.getName()));
    }

    dateInput.morningMeal->setCurrentIndex(dateInput.morningMeal->findText(QString::fromStdString(target.getMeal(0).getMeal_Name())));
    dateInput.morningNumOfHuman->setValue(target.getMeal(0).getNum_people());

    dateInput.lunchMeal->setCurrentIndex(dateInput.morningMeal->findText(QString::fromStdString(target.getMeal(1).getMeal_Name())));
    dateInput.lunchNumOfHuman->setValue(target.getMeal(0).getNum_people());

    dateInput.dinnerMeal->setCurrentIndex(dateInput.morningMeal->findText(QString::fromStdString(target.getMeal(2).getMeal_Name())));
    dateInput.dinnerNumOfHuman->setValue(target.getMeal(0).getNum_people());

    connect(dateInput.saveButton, SIGNAL(clicked()), SLOT(InputDateInfo()));
    connect(dateInput.escButton, SIGNAL(clicked()), SLOT(openDateListWindow()));
}

void OOP_Project_Qt::deleteThisDateInfo() {
    greeter.deletePlan(stoi(selectString));
    selectString = "";

    openDateListWindow();
    greeter.saveEverything();
}

void OOP_Project_Qt::setDateSearchInfo() {
    for (date _date : greeter.callDateList()) {
        dateList.listWidget->addItem(QString::fromStdString(std::to_string(_date.getDateTime()) + ":" + _date.getDateName()));
    }
}