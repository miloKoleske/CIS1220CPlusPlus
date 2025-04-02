// labCharArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//char arr[20] = "Hello World";
	//std::cout << "Type in two words: ";
	//std::cin >> arr;
	//cin.ignore();
	//std::cout << "Entered string: " << arr << std::endl;
	//std::cout << "\t- What's happening here? Array is only printing out first word" << std::endl;
	//cout << "\t- Because cin only reads until the whitespace break between 'hello' and 'world'" << endl;


	//std::cout << "\nOriginally, C language did not have arrays" << std::endl;
	//std::cout << "\t- Arrays don't always need to have all spaces filled. They will print as a 0 instead if you do a for loop" << std::endl;

	//char myWord[]{ 'H','E','L','L','O','\0' };
	//std::cout << "\t- Null character used to inform C that the character sequence was complete." << std::endl;
	//std::cout << "\t- We don't need to do this in C++, because the c++ string object takes care of it" << std::endl;

	//// declare c-string and initialize
	//char cppLove[10] = "Love C++";

	//// declare and fill individual elements
	//char cstring[10];
	//cstring[0] = 'I';
	//cstring[1] = ' '; // note: you can fill a space with an empty whitespace
	//cstring[2] = 'a';
	//cstring[3] = 'm';
	//cstring[4] = ' ';
	//cstring[5] = 'a';
	//cstring[6] = ' ';
	//cstring[7] = 'c';
	//cstring[8] = 'a';
	//cstring[9] = 't';

	//// declare another c-string
	//char empty[10];

	//string hr = "_________________________[CODE]________________________";
	//cout << endl;
	//cout << hr << endl;
	//cout << "\n\t\tSee the difference: " << endl;
	//cout << "\t\t- Print a character string";
	//cout << "\n\t\t\tC++ love: " << cppLove;
	//cout << "\n\t\t\t\t^Prints correctly";
	//cout << "\n\t\t\tc-string: " << cstring;
	//cout << "\n\t\t\t\t^does not print correctly";
	//cout << "\n\t\t\tEmpty: " << empty;
	//cout << "\n\t\t\t\t^does not print correctly.";
	//cout << endl << hr << endl;

	//cout << "\nWHY?" << endl;



	//char cstringTwo[11];
	//cstringTwo[0] = 'I';
	//cstringTwo[1] = ' '; // note: you can fill a space with an empty whitespace
	//cstringTwo[2] = 'a';
	//cstringTwo[3] = 'm';
	//cstringTwo[4] = ' ';
	//cstringTwo[5] = 'a';
	//cstringTwo[6] = ' ';
	//cstringTwo[7] = 'c';
	//cstringTwo[8] = 'a';
	//cstringTwo[9] = 't';
	//cstringTwo[10] = '\0'; // include null terminator

	//cout << "This should print with the null and end: " << cstringTwo << endl;
	//cout << "\t- Otherwise, cstrings will continue to print until it reaches the end of the string length" << endl;


	//cout << "\nOther reasons for null character" << endl;
	//cout << "\n\t- give length of array " << endl;
	////cout << "\n\t\t\t\t\tThe length of cstring is: " << cstring.length() << endl;

	//cout << "\nHow to read in a char array" << endl;
	//cout << "\n\t- in a string, we read it like this: getline(cin, variable)" << endl;
	//cout << "\n\t- in a char array, we read like this: getline(char* arrayName, int arraySize" << endl;


	char cstr[100];
	cout << "Enter a string: ";
	// read in one word
	cin >> cstr;
	cin.ignore();
	cout << "\t- Using cin, only reads first word until whitespace.\nYou entered: " << cstr << endl;
	cout << "Let's try again, enter a string with at least 2 words";
	cin.getline(cstr, 100);
	cout << "\nReading out what you input: " << cstr << endl;



	/*cout << "Conversion of CString to String or String to CString" << endl;

	cout << "Convert into a string..." << endl;

	string myString = cstr;

	cout << "string conversion: " << myString << endl;

	cout << "And convert back ";*/

	return 0;
}


