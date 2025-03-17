// link in to header
#include "Functions.h"

void WriteHeader()
{
}

void Goodbye()
{
}

bool DoAnother()
{
	return false;
}

// asks user to enter a letter and how many letters are in the series they are making
void AskForLetterAndSeriesLength(char* pointerC, int* pointerStrLength)
{
	cout << "\nWhat letter would you like to start with? Any letter a-z or A-Z: ";
	cin >> *pointerC;
	cin.ignore();
	cout << "\nHow many characters do you want in your string? Whole number: ";
	cin >> *pointerStrLength;
	cin.ignore();
}

bool IsValidLetter(char C)
{
	return false;
}

string BuildSeries(char c, int StrLength)
{
	return string();
}

// validates that letter is A-Z or a-z
// returns true if it is a letter, false if not


