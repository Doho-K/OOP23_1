#pragma once

#include "RecipeDB.h"
#include "Recipe.h"

class Meal
{
private:
    RecipeDB DB;
    Recipe Meal_Recipe;
    vector<string> MealIngredient_Name;
    vector<int> MealIngredient_Scale;
    int num_people;

public:
    Meal() {}

    vector<string> getMeal_Name(string str) {
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
        } // 식수 반영한 재료 비율
    }
};
