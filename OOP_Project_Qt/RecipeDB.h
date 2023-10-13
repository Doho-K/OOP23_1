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
    vector<Recipe> newlist; //�̰� search_content�� ���� ���, �ʿ� ������ ���� ����

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
                ingredients_scale.push_back(n); // ingredient�� �뷮 �޾Ƽ� push
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
            if (R_list[i].getName().compare(input_Name)) { //input_Name�� Recipe Name�� ��ġ�� ��.
                int select_number; // ���� �׸� �̸� �Է� ����
                cout << "�����ϰ� ���� �׸� ���� (1. �̸� / 2. �ʿ��� ��� / 3. ���� �ð� / 4. ���� ���): ";
                cin >> select_number;

                if (select_number == 1) {
                    cout << "���ο� ������ �̸�: ";
                    string s;
                    cin >> s;
                    R_list[i].setName(s);
                }
                else if (select_number == 2) {
                    cout << "1. ��� �߰� / 2. ��� ���� / 3. ��� �뷮 ����";
                    int ingr_num;
                    cin >> ingr_num;

                    if (ingr_num == 1) {
                        cout << "�߰��� ��� �̸�: ";
                        string s_ingr;
                        cin >> s_ingr;
                        cin.ignore();
                        cout << "��� �뷮: ";
                        int n_ingr;
                        cin >> n_ingr;
                        R_list[i].addIngredient(s_ingr, n_ingr);
                        R_list[i].showIngredient_list();
                    }
                    else if (ingr_num == 2) {
                        R_list[i].showIngredient_list();
                        cout << "������ ��� (����): ";
                        int num_ingr;
                        cin >> num_ingr;
                        R_list[i].deleteIngredient(num_ingr);
                        R_list[i].showIngredient_list();
                    }
                    else if (ingr_num == 3) {
                        R_list[i].showIngredient_list();
                        cout << "������ ���: (����)";
                        int n_ingr;
                        cin >> n_ingr;
                        cout << "�󸶷� �����ұ��? : (����)";
                        int ingr_input;
                        cin >> ingr_input;
                        R_list[i].reset_Ingredient_Scale(n_ingr, ingr_input);
                    }
                }
                else if (select_number == 3) {
                    cout << "���ο� ���� �ð�: (��)";
                    int input_time;
                    cin >> input_time;
                    R_list[i].setTime(input_time);
                }
                else if (select_number == 4) {
                    cout << "���ο� ���� ���: ";
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
        cout << "�˻��� ������(��ȣ): ";
        int list_num; cin >> list_num;
        search_Content(list_num, newlist);

    } // Ư�� Ű���� (ex. ������) �� ������ �̸� ��� ��� (ex. 1. ��ġ ������ 2. ���� ������ ...) <- �̰� ȸ�� �� �ٸ��� �ٲٱ�� ����

    void search_Content(int list_num, vector<Recipe> newlist) {
        newlist[list_num - 1].showRecipe();
    } // ������ ���� input �޾��� �� -> ������ ���


    vector<Recipe> search_list_recipe(string inputstr) {
        vector<Recipe> newRecipelist;
        for (int i = 0; i < R_list.size(); i++) {
            if (R_list[i].getName().find(inputstr) != string::npos) { //input���� ���� string�� RecipeDB�� Recipe �̸� string�� ���ԵǾ� ������
                newRecipelist.push_back(R_list[i]); //newRecipelist (�̸� vector)�� ����
            }
        }
        return newRecipelist;
    } // recipe�� vector�� return �Ѵ�.

    vector<string> search_recipeName(string inputstr) {
        vector<string> str;
        for (int i = 0; i < R_list.size(); i++) {
            if (R_list[i].getName().find(inputstr) != string::npos) { //input���� ���� string�� RecipeDB�� Recipe �̸� string�� ���ԵǾ� ������
                str.push_back(R_list[i].getName()); // str (�̸� vector)�� ����
            }
        }
        return str; //return���� �̸� string vector�� �Ѱ��ش�
    }

    Recipe search_recipe(string inputstr) {
        Recipe newRecipe;
        for (int i = 0; i < R_list.size(); i++) {
            if (R_list[i].getName().compare(inputstr)) { //input���� ���� ���ڿ� = recipe ���ڿ� (��)
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