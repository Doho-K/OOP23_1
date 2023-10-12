#pragma once

#include <iostream>
#include <string>

#include "greeter.h"

using namespace std;

class ConsoleUI {
private :
	char input;
	string inputString;
	Greeter greeter;

	void recipeBoard();

public :
	void mainBoard();
};