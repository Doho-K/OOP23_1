#pragma once
#ifndef Planner_H
#define Planner_H
#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <random>
#include <time.h>

using namespace std;

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

    string getName();
    string getContent();
    vector<string> getIngredientsName();
    vector<int> getIngredientsScale();

    int getCookingTime();
    void setName(string inputname);
    void setContents(string inputcontent);
    void setTime(int inputtime);
    void setIngredient(vector<string> inputingredient_Name, vector<int> inputingredient_scale);
    void addIngredient(string newingredients, int ingr_scale);
    int get_Ingredient_size();
    void reset_Ingredient_Scale(int inputnum, int ingr_scale);
    void showIngredient_list();
    void showIngr_Name_scale(string input_name);
    void deleteIngredient(int num); //erase method로 vector에서 번호에 맞는 항목 제거
    void showRecipe();
};

class RecipeDB
{
private:
    vector<Recipe> R_list;
    vector<Recipe> newlist;

public:
    RecipeDB() {};

    static RecipeDB& getInstance();
    void read_DB();

    void add(string name, vector<string> ingredients_name, vector<int>ingredients_scale, int time, string contents);

    void update(string input_Name, string newName, vector<string> inputingredient_Name, vector<int> inputingredient_scale, int time, string content);

    void search_list(string inputstr); // 특정 키워드 (ex. 샐러드) 들어간 레시피 이름 모두 출력 (ex. 1. 참치 샐러드 2. 고구마 샐러드 ...) <- 이건 회의 때 다르게 바꾸기로 했음

    void search_Content(int list_num, vector<Recipe> newlist); // 레시피 순서 input 받았을 때 -> 레시피 출력


    vector<Recipe> search_list_2(string inputstr); // recipe의 vector를 return 한다.

    string search_recipeName(string inputstr);

    Recipe search_recipe(string inputstr);
    void showAll(); // 모든 레시피 이름 출력

    void Push_RecipeDB();
};

class Meal
{
private:
    RecipeDB* mealDB;
    Recipe Meal_Recipe;//Recipe of Meal
    vector<string> MealIngredient_Name;//Name of Ingredient
    vector<int> MealIngredient_Scale;//Scale of Ingredient
    int num_people;//Number of people who eat meal
    string Meal_Name;
public:
    Meal();
    string getMeal_Name();
    Recipe getMeal_Recipe(); //recipe instance return

    int getNum_people();

    vector<string> getMealIngredient_Name();

    vector<int> getMealIngredient_Scale();

    void setMeal_name(string str);

    void setNum_people(int inputNum);

    void setMeal_Recipe(string str);

    void setMealIngredient(string str);
};
class date {
private:
    string dateName; //Name of the date
    int dateTime; //actual date
    Meal mealArray[3]; //아침[0],점심[1],저녁[2]
    string mealNameArray[3];
public:
    date();
    date(string dateName, int dateTime); //Initialization Function: Requires Name of the date and actual time
    bool operator>(const date& datePt); //정렬을 위한 비교연산자 오버로딩
    bool operator<(const date& datePt);//정렬을 위한 비교연산자 오버로딩
    void setMeal(int mealNum, Meal newMeal); //Meal배열에 meal 저장([0]아침[1]점심[2]저녁
    void addMeal(int mealNum, string Meal_Name, int person); //아침[0], 점심[1], 저녁[2]에 식사 추가
    //void addMeal(int mealNum, meal newMeal); //아침[0], 점심[1], 저녁[2]에 식사 추가
    void setMealName(int mealNum, string newMealName);//Set Name of the Meal in Array
    string getDateName(); //Return dateName as String
    int getDateTime(); //Return date Time as Int
    Meal getMeal(int arrayNum); //아침or 점심or 저녁 반환
    string getmealName(int arrayNum);// Return Name of meal: Require variable indicate meal number
};
class Planner {
private:
    list<date> dateList; //Save date as Linked List
public:
    void sort();
    void editPlan(int editDateNum, date editDate); //planner 수정, editDateNum: 수정할 객체index
    void savePlan(); //Save plan in Txt File

    void loadPlan(); //txt파일에서 불러옴.

    void reviewPlan(); //Show whole Plan

    list<date> getPlan();

    date searchPlan(int dateTime); //Search plan and return actual date

    date searchPlan(string dateName); //Overload searchPlan

    list<date> searchPlan(int startDateTime, int endDateTime); //특정 기간 내에 속하는 모든 dateList 반환
    int dateOrder(int dateTime); //datetime에 해당하는 date가 몇 번째 리스트에 있는지 반환.
    void addPlan(date newDate); //Add date to planner

    void deletePlan(int dateNum); //Delete dateNum's date

};



class Greeter {
private:
    RecipeDB* Db;
    Planner Pl;
public:
    Greeter();
    Greeter(Planner pl);//initialization of Greeter
    void loadEverything();
    void saveEverything();
    vector<Recipe> callRecipe();//Return all Recipe

    vector<Recipe> callRecipeHaveString(string name);//Return all recipe including "name"
    string stringInfo(string Name);
    string translateDateType(int date);
    vector<string> randomRecipe(int num);
    Recipe searchExactRecipe(string Name);
    void addRecipe(string name, vector<string> ingredients_name, vector<int>ingredients_scale, int time, string contents);//Add recipe

    void editRecipe(string input_Name, string newName, vector<string> inputingredient_Name, vector<int> inputingredient_scale, int time, string content);
    list<date> callDateList();
    date callDate(string name);
    date callDate(int date);
    list<date> arrangeDate();

    void addPlan(int dateTime, string dateName, vector<string> mealName, vector<int> person);

    list<date> getWeekPlan();
    void deletePlan(int dateTime);
    void editPlan(int dateTimeOri, int dateTimeNew, string dateName, vector<string> mealName, vector<int> person);
    date getPlan(string name);
    list<date> getPlan(int start, int end);
    string allIngredient(date _date);
    int getNowTime();
};

#endif
