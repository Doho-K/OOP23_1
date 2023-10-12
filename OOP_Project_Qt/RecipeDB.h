#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "Recipe.h"
using namespace std;

class RecipeDB
{
private:
    vector<Recipe> R_list;
    vector<Recipe> newlist; //이건 search_content를 위한 멤버, 필요 없으면 삭제 가능

public:
    RecipeDB() {};

    void read_DB() {
        Recipe Recipe_added;
        ifstream file("RecipeDBfile.txt");
        string line;

        while (getline(file, line)) {
            istringstream iss(line);
            string token;

            getline(iss, token, '/');
            string name = token;
            Recipe_added.setName(name);
            cout << token << "\n";

            getline(iss, token, '/');
            int time = stoi(token);
            cout << token << "\n";

            getline(iss, token, '/');
            cout << token << "\n";
            vector<string> ingredient_name;
            vector<int> ingredient_scale;

            while (getline(iss, token, ';')) {
                size_t pos = token.find(':');
                if (pos != string::npos) {
                    string ingr_name = token.substr(0, pos);
                    int ingr_scale = stoi(token.substr(pos + 1));
                    cout << ingr_name << " " << ingr_scale << "\n";
                    ingredient_name.push_back(ingr_name);
                    ingredient_scale.push_back(ingr_scale);
                }
            }

            getline(iss, token, '/');
            string Contents = token;
            cout << token << "\n";

            Recipe Recipe_added(name, time, ingredient_name, ingredient_scale, Contents);
        }
    }

    void add() {
        Recipe newRecipe;
        cout << "name: ";
        string name; cin >> name;
        newRecipe.setName(name);

        vector<string> ingredients_name;
        vector<int> ingredients_scale;
        while (1) {
            cout << "ingredients: (input \"break\" to break)";
            string s;
            cin >> s;
            if (s.compare("break")) {
                break;
            }
            else {
                ingredients_name.push_back(s);
                cout << "scale: ";
                int n;
                cin >> n;
                ingredients_scale.push_back(n); // ingredient의 용량 받아서 push
            }
        }
        newRecipe.setIngredient(ingredients_name, ingredients_scale);
        cout << "time: ";
        int time; cin >> time;
        newRecipe.setTime(time);


        cout << "contents: ";
        string contents; cin >> contents;
        newRecipe.setContents(contents);

        R_list.push_back(newRecipe);
    }

    void update(string input_Name) {
        for (int i = 0; i < R_list.size(); i++) {
            if (R_list[i].getName().compare(input_Name)) { //input_Name과 Recipe Name이 일치할 때.
                int select_number; // 선택 항목 이름 입력 받음
                cout << "수정하고 싶은 항목 선택 (1. 이름 / 2. 필요한 재료 / 3. 조리 시간 / 4. 조리 방법): ";
                cin >> select_number;

                if (select_number == 1) {
                    cout << "새로운 레시피 이름: ";
                    string s;
                    cin >> s;
                    R_list[i].setName(s);
                }
                else if (select_number == 2) {
                    cout << "1. 재료 추가 / 2. 재료 삭제 / 3. 재료 용량 수정";
                    int ingr_num;
                    cin >> ingr_num;

                    if (ingr_num == 1) {
                        cout << "추가할 재료 이름: ";
                        string s_ingr;
                        cin >> s_ingr;
                        cin.ignore();
                        cout << "재료 용량: ";
                        int n_ingr;
                        cin >> n_ingr;
                        R_list[i].addIngredient(s_ingr, n_ingr);
                        R_list[i].showIngredient_list();
                    }
                    else if (ingr_num == 2) {
                        R_list[i].showIngredient_list();
                        cout << "삭제할 재료 (숫자): ";
                        int num_ingr;
                        cin >> num_ingr;
                        R_list[i].deleteIngredient(num_ingr);
                        R_list[i].showIngredient_list();
                    }
                    else if (ingr_num == 3) {
                        R_list[i].showIngredient_list();
                        cout << "수정할 재료: (숫자)";
                        int n_ingr;
                        cin >> n_ingr;
                        cout << "얼마로 변경할까요? : (숫자)";
                        int ingr_input;
                        cin >> ingr_input;
                        R_list[i].reset_Ingredient_Scale(n_ingr, ingr_input);
                    }
                }
                else if (select_number == 3) {
                    cout << "새로운 조리 시간: (초)";
                    int input_time;
                    cin >> input_time;
                    R_list[i].setTime(input_time);
                }
                else if (select_number == 4) {
                    cout << "새로운 조리 방법: ";
                    string s_contents;
                    cin >> s_contents;
                    R_list[i].setContents(s_contents);
                }
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


    vector<Recipe> search_list_recipe(string inputstr) {
        vector<Recipe> newRecipelist;
        for (int i = 0; i < R_list.size(); i++) {
            if (R_list[i].getName().find(inputstr) != string::npos) { //input으로 받은 string이 RecipeDB의 Recipe 이름 string에 포함되어 있으면
                newRecipelist.push_back(R_list[i]); //newRecipelist (이름 vector)에 저장
            }
        }
        return newRecipelist;
    } // recipe의 vector를 return 한다.

    vector<string> search_recipeName(string inputstr) {
        vector<string> str;
        for (int i = 0; i < R_list.size(); i++) {
            if (R_list[i].getName().find(inputstr) != string::npos) { //input으로 받은 string이 RecipeDB의 Recipe 이름 string에 포함되어 있으면
                str.push_back(R_list[i].getName()); // str (이름 vector)에 저장
            }
        }
        return str; //return으로 이름 string vector을 넘겨준다
    }

    Recipe search_recipe(string inputstr) {
        Recipe newRecipe;
        for (int i = 0; i < R_list.size(); i++) {
            if (R_list[i].getName().compare(inputstr)) { //input으로 받은 문자열 = recipe 문자열 (비교)
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
};