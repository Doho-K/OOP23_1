#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
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

    Recipe(string name, int CookingTime, vector<string> Ingredients_Name, vector<int> Ingredients_Scale, string Content) {
        setName(name);
        setTime(CookingTime);
        setIngredient(Ingredients_Name, Ingredients_Scale);
        setContents(Content);
    }
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

    /*int getIngrScale(string input_name) {
        int retScale;
        for (int i = 0; i < Ingredients_Name.size(); i++) {
            if (Ingredients_Name[i].compare(input_name)) {
                retScale = Ingredients_Scale[i];
            }
            break;
        }
        return retScale;
    } */

    void deleteIngredient(int num) {
        Ingredients_Name.erase(Ingredients_Name.begin() + (num - 1));
        Ingredients_Scale.erase(Ingredients_Scale.begin() + (num - 1));
    } //erase method로 vector에서 번호에 맞는 항목 제거

    void showRecipe() {
        cout << "레시피: " << Recipename << "\n";
        cout << "필요한 재료: ";
        for (int i = 0; i < Ingredients_Name.size(); i++) {
            cout << Ingredients_Name[i] << ": " << Ingredients_Scale[i] << "\n";
        }
        cout << "조리 시간: " << CookingTime << "\n";
        cout << "조리 방법: " << Content << "\n";
    }
};