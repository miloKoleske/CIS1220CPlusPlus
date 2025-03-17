// include guards
#ifndef FUNCTIONS_H
#define FUNCTION_H

// preprocessor directives

#include <iostream>
using namespace std;


// function prototypes

void WriteHeader();

void Goodbye();

bool DoAnother();

// asks user to enter a letter and how many letters are in the series they are making
void AskForLetterAndSeriesLength(char* pointerC, int* pointerStrLength);

// validates that letter is A-Z or a-z
// returns true if it is a letter, false if not
bool IsValidLetter(char C);

// build string of characters beginning with user's letter and followed by going through next letters in alphabet for as long as user wants string to be
string BuildSeries(char c, int StrLength);






















#endif
