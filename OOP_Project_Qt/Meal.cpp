#include "greeter.h"

Meal::Meal() {
    mealDB = &RecipeDB::getInstance(); // 생성자 내에서 recipeDb에 접근합니다.
    // Meal 생성자 내에서 recipeDb에 대한 초기화 또는 사용 작업 수행 가능
}
string Meal::getMeal_Name() {
    return Meal_Name;
}

Recipe Meal::getMeal_Recipe() {
    return Meal_Recipe;
} //recipe instance return

int Meal::getNum_people() {
    return num_people;
}

vector<string> Meal::getMealIngredient_Name() {
    return MealIngredient_Name;
}

vector<int> Meal::getMealIngredient_Scale() {
    return MealIngredient_Scale;
}

void Meal::setMeal_name(string str) {
    Meal_Name = mealDB->search_recipeName(str);
}

void Meal::setNum_people(int inputNum) {
    num_people = inputNum;
}

void Meal::setMeal_Recipe(string str) {
    Meal_Recipe = mealDB->search_recipe(str);
}

void Meal::setMealIngredient(string str) {
    Meal_Recipe = mealDB->search_recipe(str);
    MealIngredient_Name = Meal_Recipe.getIngredientsName();
    MealIngredient_Scale = Meal_Recipe.getIngredientsScale();

    for (int i = 0; i < MealIngredient_Name.size(); i++) {
        MealIngredient_Scale[i] *= num_people;
    } // 식수 반영한 재료 비율
}