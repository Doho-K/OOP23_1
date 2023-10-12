#include "ConsoleUI.h"
/*
void ConsoleUI::mainBoard() {
	while (true) {
		cout << "원하시는 메뉴를 선택하세요.\n1.레시피 관리\n2. 일정 관리" << endl;
		cin.get(input);
		switch (input)
		{
		case '1':
			recipeBoard();
			break;
		case '2':

			break;
		default:
			cout << "다시 제대로 입력해주세요" << endl;
			break;
		}
	}
}

void ConsoleUI::recipeBoard() {
	vector<Recipe> recipes = greeter.callRecipe();
	if (recipes.size() <= 0)
		return;
	while (true) {
		recipes = greeter.callRecipe();
		for (Recipe _recipe : recipes) {
			cout << _recipe.getName() << endl;
		}

		cout << "원하시는 메뉴를 선택하세요.\n1.레시피 추가\n2. 레시피 삭제\n3. 레시피 자세히 보기\n4.메인 화면으로 돌아가기" << endl;
		cin.get(input);
		switch (input)
		{
		case '1':

			break;
		case '2':

			break;
		case '3':
			while(true) {
				cout << "확인할 레시피를 선택해주세요 : ";
				cin >> inputString;
				Recipe tmp = greeter.searchExactRecipe(inputString);
				if (tmp.getName() != "") {
					cout << tmp.getName() << endl << tmp.getContent() << endl;
					cout << "원하시는 메뉴를 선택하세요.\n1. 해당 레시피 삭제\n2.돌아가기";
					break;
				}
				else {
					cout << "다시 제대로 입력해주세요" << endl;
				}
			}
			while (true) {
				cin.get(input);
				if (input == '1') {
					greeter.deleteRecipe("");
					break;
				}
				else if (input == '2') {
					break;
				}
				else {
					cout << "다시 제대로 입력해주세요" << endl;
				}
			}
		case '4':
			return;
		default:
			cout << "다시 제대로 입력해주세요" << endl;
			break;
		}
	}
}//*/