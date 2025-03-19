// include guards
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

// preprocessor directives
#include <iostream>
#include <string>
using namespace std;

// function prototypes
void WriteHeader();
void WriteGameRules();

// pointer goes into params
void AskUserChoice(int* uChoice);

// pointer for string result
bool ValidateUserChoice(int uChoice, string* result);

// pointer params for cChoice and TieCount
void ObtainCompChoice(int uChoice, int* cChoice, int* pTieCount);

// references for userWins and compWins
string DetermineWinner(int uChoice, int cChoice, int& userWins, int& compWins);

// reference for object
void DetermineObject(int choice, string& object);

// params are all variables
void WriteResults(string result, int numGames, int numRounds, int userWins, int compWins, int tieCount);

void WriteResults(string result);







// close guard
#endif