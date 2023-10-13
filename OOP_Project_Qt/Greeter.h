#pragma once
#ifndef Planner_H
#define Planner_H
#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

/*
class date {
private:
    string dateName; //Name of the date
    int dateTime; //actual date
    //meal mealArray[3]; //��ħ[0],����[1],����[2]
    string mealNameArray[3];//String Array that saves Meal: Breakfast[0],Lunch[1],Dinner[2]
public:
    date(string dateName, int dateTime) { //Initialization Function: Requires Name of the date and actual time
        this->dateName = dateName;
        this->dateTime = dateTime;
    }
    //void addMeal(int mealNum, meal newMeal) { //��ħ[0], ����[1], ����[2]�� �Ļ� �߰�
    //	mealArray[mealNum] = newMeal;
    //}
    void setMealName(int mealNum, string newMealName) {//Set Name of the Meal in Array
        mealNameArray[mealNum] = newMealName;
    }
    string getDateName() { //Return dateName as String
        return dateName;
    }
    int getDateTime() { //Return date Time as Int
        return dateTime;
    }
    //meal getMeal(int arrayNum) { //��ħor ����or ���� ��ȯ
    //	return mealArray[arrayNum];
    //}
    string getmealName(int arrayNum) {// Return Name of meal: Require variable indicate meal number
        return mealNameArray[arrayNum];
    }
};

class Planner {
private:
    list<date> dateList; //Save date as Linked List


public:
    void savePlan() { //Save plan in Txt File
        fstream savePlanFile;
        list<date>::iterator dateListIt; //iterator decleration
        savePlanFile.open("Planner.txt", ios::trunc); //Delete original file and save new(Because of repitition)
        if (savePlanFile.is_open()) { //When file is opened
            for (dateListIt = this->dateList.begin(); dateListIt != this->dateList.end(); dateListIt++) { //Loop until end of list
                //Read dateName, dateTime, Menu
                savePlanFile << dateListIt->getDateName() << "\n"; //Save Name
                savePlanFile << dateListIt->getDateTime() << "\n"; //Save date(yyyymmdd)
                savePlanFile << dateListIt->getmealName(0) << "\n"; //Breakfast
                savePlanFile << dateListIt->getmealName(1) << "\n"; //Lunch
                savePlanFile << dateListIt->getmealName(2) << "\n"; //Dinner
            }
        }
        else {
            cout << "Filestream Error";
        }
        sortPlan();
        savePlanFile.close();
    }

    void loadPlan() { //Load Plan from Txt File
        fstream loadPlanFile;

        string newDateName; //String variable for save new dateName
        int newDateTime; //Int variable for save new DateTime
        string newMealName[3]; //String array for save new meals
        loadPlanFile.open("Planner.txt");//Read Planner.txt

        if (loadPlanFile.is_open()) { //When file is opened
            while (!loadPlanFile.eof()) { //Until end of file
                loadPlanFile >> newDateName;
                loadPlanFile >> newDateTime;
                loadPlanFile >> newMealName[0];
                loadPlanFile >> newMealName[1];
                loadPlanFile >> newMealName[2];

                //Make new date object and push to dateList
                date newDate(newDateName, newDateTime);
                newDate.setMealName(1, newMealName[0]);
                newDate.setMealName(1, newMealName[1]);
                newDate.setMealName(1, newMealName[2]);

                this->dateList.push_back(newDate);
            }
        }
        else {
            cout << "Filestream Error";
        }
        loadPlanFile.close();
    }

    void reviewPlan() { //Show whole Plan
        list<date>::iterator dateListIt; //Iterator declare
        this->dateList.sort(); //Sorting plan
        //Print everything looping whole list
        for (dateListIt = this->dateList.begin(); dateListIt != this->dateList.end(); dateListIt++) {
            cout << "Plan Name: " << dateListIt->getDateName() << "\n";
            cout << "Plan Date: " << dateListIt->getDateTime() << "\n";
            cout << "breakfast: " << dateListIt->getmealName(0) << "\n";
            cout << "breakfast: " << dateListIt->getmealName(1) << "\n";
            cout << "breakfast: " << dateListIt->getmealName(2) << "\n";
        }
    }

    list<date> getPlan() {
        return dateList;
    }

    date searchPlan(int dateTime) { //Search plan and return actual date
        list<date>::iterator dateListIt; //Declare iterator, indicate node in list

        //Search node for certain date(dateTime)
        for (dateListIt = this->dateList.begin(); dateListIt != this->dateList.end(); dateListIt++) {
            if (dateTime == dateListIt->getDateTime()) { //When node is matched
                return *dateListIt; //Return Node
            }
        }
    }

    void sortPlan() {
        this->dateList.sort();
    }
    date searchPlan(string dateName) { //Overload searchPlan
        list<date>::iterator dateListIt; //�ݺ���(iterator) ����, ����Ʈ�� Ư�� ��带 ����Ŵ

        //dateList ��ȸ(begin->end)�ϸ� Ư�� �̸��� ���(date)�� �˻���
        for (dateListIt = this->dateList.begin(); dateListIt != this->dateList.end(); dateListIt++) {
            if (dateName == dateListIt->getDateName()) { //�˻��Ϸ��� �Ͱ� ��尡 ��ġ�Ѵٸ�
                return *dateListIt; //�ݺ��ڰ� ����Ű�� ��带 ������.
            }
        }
    }


    void addPlan(date newDate) { //Add date to planner
        this->dateList.push_back(newDate);
        sortPlan();
    }

    void deletePlan(int dateNum) { //Delete dateNum's date
        list<date>::iterator dateListIt = this->dateList.begin();
        for (int i = 0; i < dateNum; i++) {
            dateListIt++;
        }
        this->dateList.erase(dateListIt);
    }
};
*/
class Recipe
{
private:
    string Recipename;
    string Content;
    vector<string> Ingredients_Name;
    vector<int> Ingredients_Scale;
    int CookingTime;

public:
    Recipe() {}
    string getName() {
        return Recipename;
    }

    string getContent() {
        return Content;
    }

    vector<string> getIngredientsName() {
        return Ingredients_Name;
    }

    vector<int> getIngredientsScale() {
        return Ingredients_Scale;
    }

    int getCookingTime() {
        return CookingTime;
    }

    void setName(string inputname) {
        Recipename = inputname;
    }

    void setContents(string inputcontent) {
        Content = inputcontent;
    }
    void setTime(int inputtime) {
        CookingTime = inputtime;
    }

    void setIngredient(vector<string> inputingredient_Name, vector<int> inputingredient_scale) {
        Ingredients_Name = inputingredient_Name;
        Ingredients_Scale = inputingredient_scale;
    }

    void addIngredient(string newingredients, int ingr_scale) {
        Ingredients_Name.push_back(newingredients);
        Ingredients_Scale.push_back(ingr_scale);
    }

    int get_Ingredient_size() {
        return Ingredients_Name.size();
    }

    void reset_Ingredient_Scale(int inputnum, int ingr_scale) {
        Ingredients_Scale[inputnum - 1] = ingr_scale;
    }

    void showIngredient_list() {
        for (int i = 0; i < Ingredients_Name.size(); i++) {
            cout << i + 1 << ". " << Ingredients_Name[i] << "\n";
        } // ingredient vector�� ��� ��� ���
    }

    void showIngr_Name_scale(string input_name) {
        for (int i = 0; i < Ingredients_Name.size(); i++) {
            if (Ingredients_Name[i].compare(input_name)) {
                cout << "��� �̸� :" << Ingredients_Name[i] << "\n";
                cout << "�ʿ��� �뷮 :" << Ingredients_Scale[i] << "\n";
                break;
            }
        }
    }
    void deleteIngredient(int num) {
        Ingredients_Name.erase(Ingredients_Name.begin() + (num - 1));
        Ingredients_Scale.erase(Ingredients_Scale.begin() + (num - 1));
    } //erase method�� vector���� ��ȣ�� �´� �׸� ����


    void showRecipe() {
        cout << "������: " << getName() << "\n";
        cout << "�ʿ��� ���: ";
        for (int i = 0; i < Ingredients_Name.size(); i++) {
            cout << Ingredients_Name[i] << ": " << Ingredients_Scale[i] << "\n";
        }
        cout << "���� �ð�: " << CookingTime << "\n";
        cout << "���� ���: " << getContent() << "\n";
    }
};

class RecipeDB
{
private:
    vector<Recipe> R_list;
    vector<Recipe> newlist;

public:
    RecipeDB() {};
    void add(string name, vector<string> ingredients_name,vector<int>ingredients_scale,int time,string contents) {
        Recipe newRecipe;
        newRecipe.setName(name);
        newRecipe.setIngredient(ingredients_name,ingredients_scale);        
        newRecipe.setTime(time);
        newRecipe.setContents(contents);
        R_list.push_back(newRecipe);
    }

    void update(string input_Name,string newName, vector<string> inputingredient_Name, vector<int> inputingredient_scale,int time,string content) {
        for (int i = 0; i < R_list.size(); i++) {
            if (R_list[i].getName().compare(input_Name)) {
                R_list[i].setName(newName);
                R_list[i].setIngredient(inputingredient_Name, inputingredient_scale);
                R_list[i].setTime(time);
                R_list[i].setContents(content);
                
            }
        }
    }

    void search_list(string inputstr) {
        for (int i = 0; i < R_list.size(); i++) {
            int j = 1;
            if (R_list[i].getName().find(inputstr) != string::npos) {
                newlist.push_back(R_list[i]);
                cout << j << ". " << R_list[i].getName() << "\n";
                j++;
            }
        }
        cout << "�˻��� ������(��ȣ): ";
        int list_num; cin >> list_num;
        search_Content(list_num, newlist);

    } // Ư�� Ű���� (ex. ������) �� ������ �̸� ��� ��� (ex. 1. ��ġ ������ 2. ���� ������ ...) <- �̰� ȸ�� �� �ٸ��� �ٲٱ�� ����

    void search_Content(int list_num, vector<Recipe> newlist) {
        newlist[list_num - 1].showRecipe();
    } // ������ ���� input �޾��� �� -> ������ ���


    vector<Recipe> search_list_2(string inputstr) {
        vector<Recipe> newRecipelist;
        for (int i = 0; i < R_list.size(); i++) {
            if (R_list[i].getName().find(inputstr) != string::npos) { //input���� ���� string�� RecipeDB�� Recipe �̸� string�� ���ԵǾ� ������
                newRecipelist.push_back(R_list[i]); //newRecipelist (�̸� vector)�� ����
            }
        }
        return newRecipelist;
    } // recipe�� vector�� return �Ѵ�.

    string search_recipeName(string inputstr) {
        string str;
        for (int i = 0; i < R_list.size(); i++) {
            if (R_list[i].getName().compare(inputstr)) { //input���� ���� ���ڿ� = recipe ���ڿ� (��)
                str = R_list[i].getName(); // str�� ���� Recipe�� �̸� string ����
                break;
            }
        }
        return str; //return���� �̸� string�� �Ѱ��ش�
    }

    Recipe search_recipe(string inputstr) {
        Recipe newRecipe;
        for (int i = 0; i < R_list.size(); i++) {
            if (R_list[i].getName() == inputstr) { //input���� ���� ���ڿ� = recipe ���ڿ� (��)
                newRecipe = R_list[i]; // newRecipe�� ���� Recipe instance ����
                break;
            }
        }
        return newRecipe; //return���� Recipe ��ü ������ �Ѱ��ش�
    }
    void showAll() {
        for (int i = 0; i < R_list.size(); i++) {
            cout << i + 1 << ". " << R_list[i].getName() << "\n";
        }
    }; // ��� ������ �̸� ���
};

class Greeter {
private:
    RecipeDB Db;
    //Planner Pl;
public:
    /*
    Greeter(RecipeDB db, Planner pl) {//initialization of Greeter
        Db = db;
        Pl = pl;
    }*/
    Greeter() {
    }

    Recipe searchExactRecipe(string name) {
        return Db.search_recipe(name);
    }

    vector<Recipe> callRecipe() {//Return all Recipe
        return Db.search_list_2("");
    }

    vector<Recipe> callRecipeHaveString(string name) {//Return all recipe including "name"
        return Db.search_list_2(name);
    }

    void addRecipe(string name, vector<string> ingredients_name, vector<int>ingredients_scale, int time, string contents) {//Add recipe
        Db.add(name, ingredients_name, ingredients_scale, time,contents);
    }

    void editRecipe(string input_Name, string newName, vector<string> inputingredient_Name, vector<int> inputingredient_scale, int time, string content) {
        Db.update(input_Name,newName, inputingredient_Name, inputingredient_scale, time, content);
    }
    void deleteRecipe(string input_Name) {
        //Not yet
    }
    /*
    list<date> callDateList() {
        return Pl.getPlan();
    }
    date callDate(string name) {
        return Pl.searchPlan(name);
    }*/

    void createPlan() {

    }
    

};
/*
class Meal
{
private:
    RecipeDB DB;
    Recipe Meal_Recipe;//Recipe of Meal
    vector<string> MealIngredient_Name;//Name of Ingredient
    vector<int> MealIngredient_Scale;//Scale of Ingredient
    int num_people;//Number of people who eat meal

public:
    Meal() {}

    string getMeal_Name(string str) {
        return DB.search_recipeName(str);
    }

    Recipe getMeal_Recipe(string str) {
        return DB.search_recipe(str);
    } //recipe instance return

    int getNum_people() {
        return num_people;
    }

    vector<string> getMealIngredient_Name() {
        return MealIngredient_Name;
    }

    vector<int> getMealIngredient_Scale() {
        return MealIngredient_Scale;
    }

    void setNum_people(int inputNum) {
        num_people = inputNum;
    }

    void setMealIngredient(string str) {
        Meal_Recipe = getMeal_Recipe(str);
        MealIngredient_Name = Meal_Recipe.getIngredientsName();
        MealIngredient_Scale = Meal_Recipe.getIngredientsScale();

        for (int i = 0; i < MealIngredient_Name.size(); i++) {
            MealIngredient_Scale[i] *= num_people;
        } // �ļ� �ݿ��� ��� ����
    }
};
*/
#endif
