#include "Functions.h"

int main() {

	// define variables to pass along as arguments
	int number1{ 0 };
	int number2{ 0 };
	int bigger{ 0 };

	// call all functions
	WriteHeader();

	// call doWhile loop 

	do {

		// argument is the address of the variable
		AskForTwoNumbers(&number1, &number2);

		// find out which is bigger
		bigger = FindBigOne(number1, number2);
		if (bigger == 0) {
			cout << "The two numbers are the same" << endl;
		}
		else {
			cout << bigger << " is the larger number." << endl;
		}

	} while (DoAnother());

	Goodbye();





	return 0;
}