#include "Functions.h"

void WriteHeader()
{
	cout << "\nProgrammer name: Milo Koleske" << endl;
	cout << "Program title: koleskeComp5Act1" << endl;
	cout << "Program objective: Find the larger number between two integers using pointers." << endl;
	cout << "==============================================================" << endl;
}

void Goodbye()
{
	cout << "Thanks for using the Return Two Numbers program!" << endl << endl;
}

bool DoAnother()
{
	string doAgain;
	cout << "Would you like to compare another set of numbers? y/n: ";
	getline(cin, doAgain);

	if (doAgain == "y" || doAgain == "Y") {
		return true;
	}
	else {
		return false;
	}

}

void AskForTwoNumbers(int* pNum1, int* pNum2)
{
	cout << "Please input two non-zero integers, with a comma between them: ";
	char comma('1');
	cin >> *pNum1 >> comma >> *pNum2;
	cin.ignore();
}

int FindBigOne(int num1, int num2)
{
	cout << "Calculating between your two numbers which is the largest..." << endl;

	if (num1 > num2) {
		return num1;
	}
	else if (num1 < num2) {
		return num2;
	}
	else {
		return 0;
	}
}
