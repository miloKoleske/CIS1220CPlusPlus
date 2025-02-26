#include "Functions.h"

void WriteHeader()
{
	cout << "Programmer name: Milo Koleske\n";
	cout << "Programmer title: Distance Conversions\n";
	cout << "Program objectives: Converting feet to inches and inches to feet\n";
}

int Menu()
{
	int choice;
	cout << "What would you like to do? Select the number next to the action below.\n";
	cout << "(1) \tConversion of inches to feet and inches\n";
	cout << "(2) \tConversion of feet and inches to decimal feet\n";
	cout << "(3) \tConversion of feet and inches into inches\n";
	cout << "(4) \tExit the program\n";

	cout << "Your choice: ";
	cin >> choice;

	return 0;
}

void InchesToFeetAndInches(int totalInches)
{
	int feet = totalInches / 12;
	int inches = totalInches % 12;
	cout << totalInches << " inches is " << feet << " feet, " << inches << " inches." << endl;
}

void FeetAndInchesToDecimalFeet(int feet, int inches)
{
	// decimal, so use a double
	double decimalFeet = feet + inches / 12.0;
	cout << feet << " and " << inches << " is " <<fixed<<setprecision(3) << decimalFeet << " feet." << endl;
}

void FeetAndInchesToInches(int feet, int inches)
{
	int totalInches = (feet * 12) + inches;
	cout << feet << " feet and " << inches << " inches is " << totalInches << " inches." << endl;
}

void Goodbye()
{
	cout << "Thank you for using the Distance Conversion app." << endl;
}

