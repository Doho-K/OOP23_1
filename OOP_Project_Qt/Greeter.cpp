#include "greeter.h"

Greeter::Greeter() {
    Db = &RecipeDB::getInstance();
    loadEverything();
}
Greeter::Greeter(Planner pl) {//initialization of Greeter
    Db = &RecipeDB::getInstance();
    Pl = pl;
    loadEverything();
}
void Greeter::loadEverything() {
    Db->read_DB();
    Pl.loadPlan();
}
void Greeter::saveEverything() {
    Db->Push_RecipeDB();
    Pl.savePlan();
}
vector<Recipe> Greeter::callRecipe() {//Return all Recipe
    return Db->search_list_2("");
}

vector<Recipe> Greeter::callRecipeHaveString(string name) {//Return all recipe including "name"
    return Db->search_list_2(name);
}
string Greeter::stringInfo(string Name) {
    Recipe rp = searchExactRecipe(Name);
    string info = "";
    int ingrNum = rp.get_Ingredient_size();
    for (int i = 0; i < ingrNum; i++) {
        info += rp.getIngredientsName().at(i);
        info += " : ";
        info += std::to_string(rp.getIngredientsScale().at(i)) + "\n";
    }
    return info;
}
string Greeter::translateDateType(int date) {
    return std::to_string(date / 10000) + "-" + std::to_string((date % 10000) / 100) + "-" + std::to_string(date % 100);
}
vector<string> Greeter::randomRecipe(int num) {
    std::random_device rd;
    std::mt19937 gen(rd());
    vector<string> list;
    vector<Recipe> rp = callRecipe();
    if (rp.size() == 0) {
        return list;
    }
    std::uniform_int_distribution<int> distribution(0, rp.size() - 1);
    for (int i = 0; i < num; i++) {
        list.push_back(rp.at(distribution(gen)).getName());
    }
    return list;
}
Recipe Greeter::searchExactRecipe(string Name) {
    return Db->search_recipe(Name);
}
void Greeter::addRecipe(string name, vector<string> ingredients_name, vector<int>ingredients_scale, int time, string contents) {//Add recipe
    Db->add(name, ingredients_name, ingredients_scale, time, contents);
    saveEverything();
}

void Greeter::editRecipe(string input_Name, string newName, vector<string> inputingredient_Name, vector<int> inputingredient_scale, int time, string content) {
    Db->update(input_Name, newName, inputingredient_Name, inputingredient_scale, time, content);
    saveEverything();
}
list<date> Greeter::callDateList() {
    return Pl.getPlan();
}
date Greeter::callDate(string name) {
    return Pl.searchPlan(name);
}
date Greeter::callDate(int date) {
    return Pl.searchPlan(date);
}
list<date> Greeter::arrangeDate() {
    Pl.sort();
    return Pl.getPlan();
}

void Greeter::addPlan(int dateTime, string dateName, vector<string> mealName, vector<int> person) {
    date dt = date(dateName, dateTime);
    for (int i = 0; i < 3; i++) {
        dt.addMeal(i, mealName.at(i), person.at(i));
    }
    Pl.addPlan(dt);
    saveEverything();
}

list<date> Greeter::getWeekPlan() {
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
void Greeter::deletePlan(int dateTime) {
    Pl.deletePlan(Pl.dateOrder(dateTime));
    saveEverything();
}
void Greeter::editPlan(int dateTimeOri, int dateTimeNew, string dateName, vector<string> mealName, vector<int> person) {
    date dt = date(dateName, dateTimeNew);
    for (int i = 0; i < 3; i++) {
        dt.addMeal(i, mealName.at(i), person.at(i));
    }
    Pl.editPlan(Pl.dateOrder(dateTimeOri), dt);
    saveEverything();
}
date Greeter::getPlan(string name) {
    date plan = Pl.searchPlan(name);
    return plan;
}
list<date> Greeter::getPlan(int start, int end) {
    return Pl.searchPlan(start, end);
}
string Greeter::allIngredient(date _date) {
    vector<string> ingredientName;
    vector<int> numOfIngredient;

    for (int i = 0; i < 3; i++) {
        //int numOfPeople = _date.getMeal(i).getNum_people();
        vector<string> tmp = _date.getMeal(i).getMealIngredient_Name();
        vector<int> tmpIn = _date.getMeal(i).getMealIngredient_Scale();

        for (int j = 0; j < tmp.size(); j++) {
            bool isExist = false;
            for (int h = 0; h < ingredientName.size(); h++) {
                if (ingredientName.at(h) == tmp.at(j)) {
                    numOfIngredient.at(h) += tmpIn.at(j);
                    isExist = true;
                    break;
                }
            }
            if (!isExist) {
                ingredientName.push_back(tmp.at(j));
                numOfIngredient.push_back(tmpIn.at(j));
            }
        }
    }

    string result = "";
    for (int i = 0; i < ingredientName.size(); i++) {
        result += (i != 0 ? ", " : "") + ingredientName.at(i) + " : " + std::to_string(numOfIngredient.at(i));
    }
    return result;
}

int Greeter::getNowTime() {
    time_t t = std::time(nullptr);
    tm* tt = localtime(&t);
    return (tt->tm_year + 1900) * 10000 + (tt->tm_mon + 1) * 100 + tt->tm_mday;
}