// Milo Koleske
// mkoleske@cnm.edu
// koleskeComp2Act2

#include <iostream>
using namespace std;

int main()
{
    cout << "Programmer name: Milo Koleske\n";
    cout << "Program title: koleskeComp2Act2\n";
    cout << "Program objective: Evaluate if two inputted numbers are within a range.\n";
    cout << "---------------------------------------------------------------------------\n\n";

    // declare variables that will hold user input
    int num1;
    int num2;
    cout << "Enter in first integer: ";
    cin >> num1;
    cout << "Enter in second integer: ";
    cin >> num2;

    // calculate the sum of the two numbers
    int sum = num1 + num2;
    cout << "\nChecking if the sum of " << num1 <<" and " << num2 <<" is within the range...\n\n";
    // display the sum
    
    // check if sum is in range of 10 - 20
    if (sum >= 10 && sum <= 20) {
        cout << "The sum is in the range. The sum is " << sum << "." << endl;
    }
    else {
        cout << "The sum is out of range. The sum is " << sum << ".";
    }
    cout << "\n";
}

