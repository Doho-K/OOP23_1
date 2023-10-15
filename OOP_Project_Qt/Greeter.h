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
        } // ingredient vector의 목록 모두 출력
    }

    void showIngr_Name_scale(string input_name) {
        for (int i = 0; i < Ingredients_Name.size(); i++) {
            if (Ingredients_Name[i].compare(input_name)) {
                cout << "재료 이름 :" << Ingredients_Name[i] << "\n";
                cout << "필요한 용량 :" << Ingredients_Scale[i] << "\n";
                break;
            }
        }
    }
    void deleteIngredient(int num) {
        Ingredients_Name.erase(Ingredients_Name.begin() + (num - 1));
        Ingredients_Scale.erase(Ingredients_Scale.begin() + (num - 1));
    } //erase method로 vector에서 번호에 맞는 항목 제거


    void showRecipe() {
        cout << "레시피: " << getName() << "\n";
        cout << "필요한 재료: ";
        for (int i = 0; i < Ingredients_Name.size(); i++) {
            cout << Ingredients_Name[i] << ": " << Ingredients_Scale[i] << "\n";
        }
        cout << "조리 시간: " << CookingTime << "\n";
        cout << "조리 방법: " << getContent() << "\n";
    }


};

class RecipeDB
{
private:
    vector<Recipe> R_list;
    vector<Recipe> newlist;

public:
    RecipeDB() {};

    static RecipeDB& getInstance() {
        static RecipeDB instance; // 정적 지역 변수로 유일한 인스턴스를 생성합니다.
        return instance;
    }
    void read_DB() {
        ifstream file("RecipeDBfile.txt");
        string line;
        while (getline(file, line)) {
            istringstream iss(line);
            string token;

            if (line.empty()) {
                continue;
            }

            getline(iss, token, '/');
            string name = token;
            //cout << name << "\n";

            getline(iss, token, '/');
            int time = stoi(token);
            //cout << time << "\n";

            getline(iss, token, '/');
            istringstream ingredient_stream(token);

            vector<string> ingredient_name;
            vector<int> ingredient_scale;

            while (getline(ingredient_stream, token, ';')) {
                size_t pos = token.find(':');
                if (pos != string::npos) {
                    string ingr_name = token.substr(0, pos);
                    int ingr_scale = stoi(token.substr(pos + 1));
                    //cout << ingr_name << " " << ingr_scale << "\n";
                    ingredient_name.push_back(ingr_name);
                    ingredient_scale.push_back(ingr_scale);
                }
            }

            getline(iss, token, '/');
            string Contents = token;
            //cout << Contents << "\n";

            Recipe Recipe_added;
            Recipe_added.setName(name);
            Recipe_added.setTime(time);
            Recipe_added.setIngredient(ingredient_name, ingredient_scale);
            Recipe_added.setContents(Contents);

            R_list.push_back(Recipe_added);
        }
    }

    void add(string name, vector<string> ingredients_name, vector<int>ingredients_scale, int time, string contents) {
        Recipe newRecipe;
        newRecipe.setName(name);
        newRecipe.setIngredient(ingredients_name, ingredients_scale);
        newRecipe.setTime(time);
        newRecipe.setContents(contents);
        R_list.push_back(newRecipe);
    }

    void update(string input_Name, string newName, vector<string> inputingredient_Name, vector<int> inputingredient_scale, int time, string content) {
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
        cout << "검색할 레시피(번호): ";
        int list_num; cin >> list_num;
        search_Content(list_num, newlist);

    } // 특정 키워드 (ex. 샐러드) 들어간 레시피 이름 모두 출력 (ex. 1. 참치 샐러드 2. 고구마 샐러드 ...) <- 이건 회의 때 다르게 바꾸기로 했음

    void search_Content(int list_num, vector<Recipe> newlist) {
        newlist[list_num - 1].showRecipe();
    } // 레시피 순서 input 받았을 때 -> 레시피 출력


    vector<Recipe> search_list_2(string inputstr) {
        vector<Recipe> newRecipelist;
        for (int i = 0; i < R_list.size(); i++) {
            if (R_list[i].getName().find(inputstr) != string::npos) { //input으로 받은 string이 RecipeDB의 Recipe 이름 string에 포함되어 있으면
                newRecipelist.push_back(R_list[i]); //newRecipelist (이름 vector)에 저장
            }
        }
        return newRecipelist;
    } // recipe의 vector를 return 한다.

    string search_recipeName(string inputstr) {
        string str;
        for (int i = 0; i < R_list.size(); i++) {
            if (R_list[i].getName() == inputstr) { //input으로 받은 string이 RecipeDB의 Recipe 이름 string에 포함되어 있으면
                str = R_list[i].getName(); // str에 저장
                break;
            }
        }
        return str; //return으로 이름 string을 넘겨준다
    }

    Recipe search_recipe(string inputstr) {
        Recipe newRecipe;
        for (int i = 0; i < R_list.size(); i++) {
            if (R_list[i].getName() == inputstr) { //input으로 받은 문자열 = recipe 문자열 (비교)
                newRecipe = R_list[i]; // newRecipe에 현재 Recipe instance 저장
                break;
            }
        }
        return newRecipe; //return으로 Recipe 자체 정보를 넘겨준다
    }
    void showAll() {
        for (int i = 0; i < R_list.size(); i++) {
            cout << i + 1 << ". " << R_list[i].getName() << "\n";
        }
    }; // 모든 레시피 이름 출력

    void Push_RecipeDB() {
        ofstream outputFile("RecipeDBfile.txt");
        for (int i = 0; i < R_list.size(); i++) {
            outputFile << R_list[i].getName() << '/' << R_list[i].getCookingTime() << '/';
            for (int j = 0; j < R_list[i].getIngredientsName().size(); j++) {
                outputFile << R_list[i].getIngredientsName()[j] << ':' << R_list[i].getIngredientsScale()[j] << ';';
            }
            outputFile << '/' << R_list[i].getContent() << '/' << '\n' << '\n';
        }
        outputFile.close();
        cout << "DB completely saved ";
    }
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
    Meal() {
        mealDB = &RecipeDB::getInstance(); // 생성자 내에서 recipeDb에 접근합니다.
        // Meal 생성자 내에서 recipeDb에 대한 초기화 또는 사용 작업 수행 가능
    }
    string getMeal_Name() {
        return Meal_Name;
    }

    Recipe getMeal_Recipe() {
        return Meal_Recipe;
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

    void setMeal_name(string str) {
        Meal_Name = mealDB->search_recipeName(str);
    }

    void setNum_people(int inputNum) {
        num_people = inputNum;
    }

    void setMeal_Recipe(string str) {
        Meal_Recipe = mealDB->search_recipe(str);
    }

    void setMealIngredient(string str) {
        Meal_Recipe = mealDB->search_recipe(str);
        MealIngredient_Name = Meal_Recipe.getIngredientsName();
        MealIngredient_Scale = Meal_Recipe.getIngredientsScale();

        for (int i = 0; i < MealIngredient_Name.size(); i++) {
            MealIngredient_Scale[i] *= num_people;
        } // 식수 반영한 재료 비율
    }
};
class date {
private:
    string dateName; //Name of the date
    int dateTime; //actual date
    Meal mealArray[3]; //아침[0],점심[1],저녁[2]
    string mealNameArray[3];
public:

    date(string dateName, int dateTime) { //Initialization Function: Requires Name of the date and actual time
        this->dateName = dateName;
        this->dateTime = dateTime;

    }
    bool operator>(const date& datePt) { //정렬을 위한 비교연산자 오버로딩
        return dateTime > datePt.dateTime;
    }
    bool operator<(const date& datePt) { //정렬을 위한 비교연산자 오버로딩
        return dateTime < datePt.dateTime;
    }
    void setMeal(int mealNum, Meal newMeal) { //Meal배열에 meal 저장([0]아침[1]점심[2]저녁
        mealArray[mealNum] = newMeal;
    }
    void addMeal(int mealNum, string Meal_Name,int person) { //아침[0], 점심[1], 저녁[2]에 식사 추가
//사용자로부터 mealNum 받음
//사용자로부터 meal name을 받음
        mealArray[mealNum].setMeal_name(Meal_Name);
        //사용자로부터 식수 인원 data 받음
        mealArray[mealNum].setNum_people(person);
        mealArray[mealNum].setMeal_Recipe(Meal_Name);
        mealArray[mealNum].setMealIngredient(Meal_Name);
    }
    //void addMeal(int mealNum, meal newMeal) { //아침[0], 점심[1], 저녁[2]에 식사 추가
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
    Meal getMeal(int arrayNum) { //아침or 점심or 저녁 반환
    	return mealArray[arrayNum];
    }
    string getmealName(int arrayNum) {// Return Name of meal: Require variable indicate meal number
        return mealNameArray[arrayNum];
    }
};
class Planner {
private:
    list<date> dateList; //Save date as Linked List
public:
    void sort() {
        this->dateList.sort();
    }
    void editPlan(int editDateNum, date editDate) { //planner 수정, editDateNum: 수정할 객체index
        deletePlan(editDateNum);
        addPlan(editDate);
        sort();
    }
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
        sort();
        savePlanFile.close();
    }

    void loadPlan() { //txt파일에서 불러옴.
        fstream loadPlanFile;
        string newDateName; //새로 받아올 date의 이름을 저장할 변수
        int newDateTime; //새로 받아올 날짜를 저장할 변수
        string newMealName[3]; //새로 받아올 3개의 meal을 저장할 변수
        int personNum[3]; //식수인원
        loadPlanFile.open("Planner.txt");

        if (loadPlanFile.is_open()) { //파일이 정상적으로 열렸다면
            while (!loadPlanFile.eof()) { //파일을 끝까지 읽으며, 다 읽으면 반복문 탈출
                loadPlanFile >> newDateName;
                loadPlanFile >> newDateTime;
                loadPlanFile >> newMealName[0];
                loadPlanFile >> personNum[0];

                loadPlanFile >> newMealName[1];
                loadPlanFile >> personNum[1];

                loadPlanFile >> newMealName[2];
                loadPlanFile >> personNum[2];

                //새로운 date객체를 만들어 dateList에 push.
                date newDate(newDateName, newDateTime);

                newDate.addMeal(0, newMealName[0], personNum[0]); //date객체에 meal추가
                newDate.addMeal(1, newMealName[1], personNum[1]);
                newDate.addMeal(2, newMealName[2], personNum[2]);

                this->dateList.push_back(newDate);
            }
        }
        else {
            cout << "Filestream Error";
        }
        sort();
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

    date searchPlan(string dateName) { //Overload searchPlan
        list<date>::iterator dateListIt; //반복자(iterator) 선언, 리스트의 특정 노드를 가리킴

        //dateList 순회(begin->end)하며 특정 이름의 노드(date)를 검색함
        for (dateListIt = this->dateList.begin(); dateListIt != this->dateList.end(); dateListIt++) {
            if (dateName == dateListIt->getDateName()) { //검색하려는 것과 노드가 일치한다면
                return *dateListIt; //반복자가 가리키는 노드를 리턴함.
            }
        }
    }


    void addPlan(date newDate) { //Add date to planner
        this->dateList.push_back(newDate);
        sort();
    }

    void deletePlan(int dateNum) { //Delete dateNum's date
        list<date>::iterator dateListIt = this->dateList.begin();
        for (int i = 0; i < dateNum; i++) {
            dateListIt++;
        }
        this->dateList.erase(dateListIt);
    }

};



class Greeter {
private:
    RecipeDB* Db;
    Planner Pl;
public:
    Greeter() {
        Db = &RecipeDB::getInstance();
    }
    Greeter(Planner pl) {//initialization of Greeter
        Db = &RecipeDB::getInstance();
        Pl = pl;
    }
    void loadEverything() {
        Db->read_DB();
        Pl.loadPlan();
    }
    void saveEverything() {
        Db->Push_RecipeDB();
        Pl.savePlan();
    }
    vector<Recipe> callRecipe() {//Return all Recipe
        return Db->search_list_2("");
    }

    vector<Recipe> callRecipeHaveString(string name) {//Return all recipe including "name"
        return Db->search_list_2(name);
    }
    string stringInfo(string Name) {
        Recipe rp = searchExactRecipe(Name);
        string info = "-재료-\n";
        int ingrNum = rp.get_Ingredient_size();
        for (int i = 0;i < ingrNum;i++) {
            info += rp.getIngredientsName().at(i);
            info += " : ";
            info += std::to_string(rp.getIngredientsScale().at(i)) + "\n";
        }
        info += "\n";
        return info;
    }
    vector<string> randomRecipe(int num) {
        std::random_device rd;
        std::mt19937 gen(rd());
        vector<string> list;
        vector<Recipe> rp = callRecipe();
        std::uniform_int_distribution<int> distribution(0, rp.size());
        for (int i = 0;i < num;i++) {
            list.push_back(rp.at(distribution(gen)).getName());
        }
        return list;
    }
    Recipe searchExactRecipe(string Name) {
        return Db->search_recipe(Name);
    }
    void addRecipe(string name, vector<string> ingredients_name, vector<int>ingredients_scale, int time, string contents) {//Add recipe
        Db->add(name, ingredients_name, ingredients_scale, time, contents);
        saveEverything();
    }

    void editRecipe(string input_Name, string newName, vector<string> inputingredient_Name, vector<int> inputingredient_scale, int time, string content) {
        Db->update(input_Name, newName, inputingredient_Name, inputingredient_scale, time, content);
        saveEverything();
    }
    list<date> callDateList() {
        return Pl.getPlan();
    }
    date callDate(string name) {
        return Pl.searchPlan(name);
    }
    date callDate(int date) {
        return Pl.searchPlan(date);
    }
    list<date> arrangeDate() {
        Pl.sort();
        return Pl.getPlan();
    }

    void addPlan(int dateTime, string dateName, vector<string> mealName, vector<int> person) {
        date dt = date(dateName, dateTime);
        for (int i = 0;i < 3;i++) {
            dt.addMeal(i, mealName.at(i), person.at(i));
        }
        Pl.addPlan(dt);
    }

    list<date> getWeekPlan() {
        list<date> week;
        list<date> all = Pl.getPlan();
        Pl.sort();
        int count = 0;
        for (const date& item : all) {
            week.push_back(item);
            count++;
            if (count == 7) {
                break;
            }
        }
        return week;
    }
    date getPlan(string name) {
        date plan = Pl.searchPlan(name);
        return plan;
    }

    string translateDateType(int date) {
        return std::to_string(date / 10000) + "-" + std::to_string((date % 10000) / 100) + "-" + std::to_string(date % 100);
    }
};

#endif
