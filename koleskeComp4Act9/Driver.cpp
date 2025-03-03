// koleskeComp4Act9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Functions.h"

int main()
{
	// declare variables
	int var{ 0 };
	int var1{ 0 };
	double var2(0.0);
	double var{ 0.0 };
	string str{ "" };
	// declare playAgain string
	string playAgain{ "" };

	// call WriteHeader function
	WriteHeader();

	// open do-while or while loop
	while (playAgain == "Y" || playAgain == "y") {

		// allow user to display many variables
		cout << "Give me an integer (whole number): ";
		cin >> var;
		cout << "Give me another whole number: ";
		cin >> var1;
		cout << "Give me a number with a decimal: ";
		cin >> var2;
		cout << "Give me another number with a decimal: ";
		cin >> var;
		cout << "Give me a word or phrase: ";

		Display(var); // Display 
		Display(var1,var2); 
		Display(var);
		Display(str);

		cout << "Play Again? (y/n): ";
		cin >> playAgain;

	}

	// call Goodbye function
	Goodbye();

	
	
	
	
	
	
	return 0;
}


