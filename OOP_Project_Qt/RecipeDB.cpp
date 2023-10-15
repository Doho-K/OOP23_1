#include "greeter.h"

RecipeDB& RecipeDB::getInstance() {
    static RecipeDB instance; // 정적 지역 변수로 유일한 인스턴스를 생성합니다.
    return instance;
}
void RecipeDB::read_DB() {
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

void RecipeDB::add(string name, vector<string> ingredients_name, vector<int>ingredients_scale, int time, string contents) {
    Recipe newRecipe;
    newRecipe.setName(name);
    newRecipe.setIngredient(ingredients_name, ingredients_scale);
    newRecipe.setTime(time);
    newRecipe.setContents(contents);
    R_list.push_back(newRecipe);
}

void RecipeDB::update(string input_Name, string newName, vector<string> inputingredient_Name, vector<int> inputingredient_scale, int time, string content) {
    for (int i = 0; i < R_list.size(); i++) {
        if (R_list[i].getName().compare(input_Name)) {
            R_list[i].setName(newName);
            R_list[i].setIngredient(inputingredient_Name, inputingredient_scale);
            R_list[i].setTime(time);
            R_list[i].setContents(content);

        }
    }
}

void RecipeDB::search_list(string inputstr) {
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

void RecipeDB::search_Content(int list_num, vector<Recipe> newlist) {
    newlist[list_num - 1].showRecipe();
} // 레시피 순서 input 받았을 때 -> 레시피 출력


vector<Recipe> RecipeDB::search_list_2(string inputstr) {
    vector<Recipe> newRecipelist;
    for (int i = 0; i < R_list.size(); i++) {
        if (R_list[i].getName().find(inputstr) != string::npos) { //input으로 받은 string이 RecipeDB의 Recipe 이름 string에 포함되어 있으면
            newRecipelist.push_back(R_list[i]); //newRecipelist (이름 vector)에 저장
        }
    }
    return newRecipelist;
} // recipe의 vector를 return 한다.

string RecipeDB::search_recipeName(string inputstr) {
    string str;
    for (int i = 0; i < R_list.size(); i++) {
        if (R_list[i].getName() == inputstr) { //input으로 받은 string이 RecipeDB의 Recipe 이름 string에 포함되어 있으면
            str = R_list[i].getName(); // str에 저장
            break;
        }
    }
    return str; //return으로 이름 string을 넘겨준다
}

Recipe RecipeDB::search_recipe(string inputstr) {
    Recipe newRecipe;
    for (int i = 0; i < R_list.size(); i++) {
        if (R_list[i].getName() == inputstr) { //input으로 받은 문자열 = recipe 문자열 (비교)
            newRecipe = R_list[i]; // newRecipe에 현재 Recipe instance 저장
            break;
        }
    }
    return newRecipe; //return으로 Recipe 자체 정보를 넘겨준다
}
void RecipeDB::showAll() {
    for (int i = 0; i < R_list.size(); i++) {
        cout << i + 1 << ". " << R_list[i].getName() << "\n";
    }
}; // 모든 레시피 이름 출력

void RecipeDB::Push_RecipeDB() {
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