#include "Functions.h"

void WriteHeader()
{
	cout << "Programmer name: Milo KOleske" << endl;
	cout << "Program title: koleskeComp5" << endl;
	cout << "Program objective: Create a game of rock, paper, scissors where user plays against computer. Variables will be accessed cross-functionally by using references and pointers." << endl;
	cout << "-------------------------------------------------------------------------------------------------\n\n";
}

void WriteGameRules()
{
}

void AskUserChoice(int* uChoice)
{
}

bool ValidateUserChoice(int uChoice, string* result)
{
	return false;
}

void ObtainCompChoice(int uChoice, int* cChoice, int* pTieCount)
{
}

string DetermineWinner(int uChoice, int cChoice, int& userWins, int& compWins)
{
	return string();
}

void DetermineObject(int choice, string& object)
{
}

void WriteResults(string result, int numGames, int numRounds, int userWins, int compWins, int tieCount)
{
}

void WriteResults(string result)
{
}
