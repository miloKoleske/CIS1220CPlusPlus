#include "Functions.h"

using std::chrono::duration_cast;
using std::chrono::seconds;

// variables for the name of the object selected
vector <string> objects = { "ROCK", "PAPER", "SCISSORS" };
vector <int> objectInts = { 1,2,3 };



void WriteHeader()
{
	cout << "Programmer name: Milo KOleske" << endl;
	cout << "Program title: koleskeComp5" << endl;
	cout << "Program objective: Create a game of rock, paper, scissors where user plays against computer. Variables will be accessed cross-functionally by using references and pointers." << endl;
	cout << "-------------------------------------------------------------------------------------------------\n\n";
}

void WriteGameRules()
{
	// write the rules of the program
	cout << "\nYou will be playing ROCK, PAPER, SCISSORS against the computer.\n";
	cout << "\nIf the computer matches your choice, it will automatically re-roll. Therefore, there will be no ties in this game.\n";
}

void AskUserChoice(int* uChoice)
{
	// display menu
	cout << "MENU:\n";
	
	// print out all options
	// print out index next to it
	for (auto elem : objects) {
		for (auto intElem : objectInts) {
			cout << intElem <<": " << elem;
		}

	}
	
}

bool ValidateUserChoice(int uChoice, string* result)
{
	stringstream ss;

	if (uChoice == 1 || uChoice == 2 || uChoice == 3)
	{
		return true;
	}
	else {
		// if choice is invalid(out of range), it will return error
		cout << uChoice << "You made is not a valid object.\n\n";
		*result == ss.str();
		return false;
	}
}

void ObtainCompChoice(int uChoice, int* cChoice, int* pTieCount)
{
	//computer will generate a random number
	
	int timeSend = duration_cast<seconds>;
	// 
	chrono::system_clock::now().time_since_epoch();
	// set the random generator using system time
	
	static mt19937_64 engine(timeSend);
	static uniform_int_distribution<int>dist(1, 3);

	// get random number (1=rock, 2=paper, 3 = scissors)
	// temp will be temporary value of the cChoice
	int temp = dist(engine);
	cout << "\nTemp:" << temp << endl;

	// if tie, computer re-rolls
	while (uChoice = temp) {
		// re-rolls temp
		temp = dist(engine);
		// increment the pointer for tie counter
		(*pTieCount)++;
	}

}

string DetermineWinner(int uChoice, int cChoice, int& userWins, int& compWins)
{
	string winner = "";
	string uObject = "";
	string cObject = "";

	// determine the winner by looking at user object and computer object
	// call determine object
	DetermineObject(uChoice, uObject);
	DetermineObject(cChoice, cObject);

	// display the object each player chose
	winner = "User's choice was: " + uObject +
		"\nComputer's choice was: " + uObject + "\n";

	//maybe you can make an alias?? 

	// check the winning conditions

	// rock beats scissors
	// paper beats rock
	// scissors beat paper

	// USER WINS
	if (uObject == "ROCK" && cObject == "SCISSORS" || uObject == "PAPER" && cObject == "ROCK" || uObject == "SCISSORS" && cObject == "PAPER") {
		//increment user counter
		cout << "User wins this round" << endl;
		userWins++;
		// print winner message
		winner += "\nCongrats!";
	}
	else {
		cout << "Computer wins this round" << endl;
		compWins++;
		winner += "\nSorry user, "; 
	}

	return winner;
}

void DetermineObject(int choice, string& object)
{
	//use a switch case for choice
	int choice = 0;
	switch (choice) {
		case 1:
			object = "ROCK";
		case 2:
			object = "PAPER";
		case 3:
			object = "SCISSORS";
	}
}

void WriteResults(string result, int numGames, int numRounds, int userWins, int compWins, int tieCount)
{
}

void WriteResults(string result)
{
}
