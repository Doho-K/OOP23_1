#include "ConsoleUI.h"
/*
void ConsoleUI::mainBoard() {
	while (true) {
		cout << "���Ͻô� �޴��� �����ϼ���.\n1.������ ����\n2. ���� ����" << endl;
		cin.get(input);
		switch (input)
		{
		case '1':
			recipeBoard();
			break;
		case '2':

			break;
		default:
			cout << "�ٽ� ����� �Է����ּ���" << endl;
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

		cout << "���Ͻô� �޴��� �����ϼ���.\n1.������ �߰�\n2. ������ ����\n3. ������ �ڼ��� ����\n4.���� ȭ������ ���ư���" << endl;
		cin.get(input);
		switch (input)
		{
		case '1':

			break;
		case '2':

			break;
		case '3':
			while(true) {
				cout << "Ȯ���� �����Ǹ� �������ּ��� : ";
				cin >> inputString;
				Recipe tmp = greeter.searchExactRecipe(inputString);
				if (tmp.getName() != "") {
					cout << tmp.getName() << endl << tmp.getContent() << endl;
					cout << "���Ͻô� �޴��� �����ϼ���.\n1. �ش� ������ ����\n2.���ư���";
					break;
				}
				else {
					cout << "�ٽ� ����� �Է����ּ���" << endl;
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
					cout << "�ٽ� ����� �Է����ּ���" << endl;
				}
			}
		case '4':
			return;
		default:
			cout << "�ٽ� ����� �Է����ּ���" << endl;
			break;
		}
	}
}//*/