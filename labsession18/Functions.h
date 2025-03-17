// guards
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

// preprocessor directives
#include <iostream>
#include <string>
using namespace std;


// function prototypes

void WriteHeader();
void Goodbye();
bool DoAnother();

// use pointers as params
void AskForTwoNumbers(int* pNum1, int* pNum2);

//compare the two integers and find and return the larger value
int FindBigOne(int num1, int num2);


#endif

