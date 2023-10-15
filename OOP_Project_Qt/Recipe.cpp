#include "greeter.h"

string Recipe::getName() {
    return Recipename;
}

string Recipe::getContent() {
    return Content;
}

vector<string> Recipe::getIngredientsName() {
    return Ingredients_Name;
}

vector<int> Recipe::getIngredientsScale() {
    return Ingredients_Scale;
}

int Recipe::getCookingTime() {
    return CookingTime;
}

void Recipe::setName(string inputname) {
    Recipename = inputname;
}

void Recipe::setContents(string inputcontent) {
    Content = inputcontent;
}
void Recipe::setTime(int inputtime) {
    CookingTime = inputtime;
}

void Recipe::setIngredient(vector<string> inputingredient_Name, vector<int> inputingredient_scale) {
    Ingredients_Name = inputingredient_Name;
    Ingredients_Scale = inputingredient_scale;
}

void Recipe::addIngredient(string newingredients, int ingr_scale) {
    Ingredients_Name.push_back(newingredients);
    Ingredients_Scale.push_back(ingr_scale);
}

int Recipe::get_Ingredient_size() {
    return Ingredients_Name.size();
}

void Recipe::reset_Ingredient_Scale(int inputnum, int ingr_scale) {
    Ingredients_Scale[inputnum - 1] = ingr_scale;
}

void Recipe::showIngredient_list() {
    for (int i = 0; i < Ingredients_Name.size(); i++) {
        cout << i + 1 << ". " << Ingredients_Name[i] << "\n";
    } // ingredient vector의 목록 모두 출력
}

void Recipe::showIngr_Name_scale(string input_name) {
    for (int i = 0; i < Ingredients_Name.size(); i++) {
        if (Ingredients_Name[i].compare(input_name)) {
            cout << "재료 이름 :" << Ingredients_Name[i] << "\n";
            cout << "필요한 용량 :" << Ingredients_Scale[i] << "\n";
            break;
        }
    }
}
void Recipe::deleteIngredient(int num) {
    Ingredients_Name.erase(Ingredients_Name.begin() + (num - 1));
    Ingredients_Scale.erase(Ingredients_Scale.begin() + (num - 1));
} //erase method로 vector에서 번호에 맞는 항목 제거


void Recipe::showRecipe() {
    cout << "레시피: " << getName() << "\n";
    cout << "필요한 재료: ";
    for (int i = 0; i < Ingredients_Name.size(); i++) {
        cout << Ingredients_Name[i] << ": " << Ingredients_Scale[i] << "\n";
    }
    cout << "조리 시간: " << CookingTime << "\n";
    cout << "조리 방법: " << getContent() << "\n";
}