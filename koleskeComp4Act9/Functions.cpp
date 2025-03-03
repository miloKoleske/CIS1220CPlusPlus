#include "Functions.h"

void WriteHeader() {
	cout << "Programmer name: Milo Koleske" << endl;
	cout << "Program title: koleskeComp4Act9" << endl;
	cout << "Program objective: Practice overloading functions" << endl;
}

void Goodbye() {
	cout << "You've chosen to exit the program. Goodbye!" << endl;
}

// display function
void Display(int var) {
	cout << "\n Integer number: " << var;
}

// overload it
void Display(int var1, double var2) {
	cout << "\n Integer number: " << var1 << " and double number: " << var2;
}

void Display(double var) {
	cout << "\n Double number: " << var;
}

void Display(string str) {
	cout << "String: " << str;
}