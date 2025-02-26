// Milo Koleske
// mkoleske@cnm.edu
// koleskecomp4Act5

#include "Functions.h"

int main()
{
    // declare variables

    int choice{ 0 }, feet{ 0 }, inches{ 0 }, totalInches{ 0 };
    WriteHeader();

    // do while loop will play until user chooses to end 

    do {

        //display the menu function and store choice response into choice variable
        choice = Menu();
        switch (choice) {
        case 1: 
            cout << "Enter the total inches: ";
            // read in the totalInches
            cin >> totalInches;
            // call InchesToFeetAndInches function with totalInches argument)
            InchesToFeetAndInches(totalInches);
            break;
        case 2: 
            cout << "Enter your feet: ";
            cin >> feet;
            cout << "Enter your inches: ";
            cin >> inches;
            FeetAndInchesToDecimalFeet(feet, inches);
            break;
        case 3:
            cout << "Enter your feet: ";
            cin >> feet;
            cout << "Enter your inches: ";
            cin >> inches;
            FeetAndInchesToInches(feet, inches);
            break;
        case 4:
            cout << "You have chosen to exit the program.\n";
            break;
        default:
            cout << "Your choice is out of bounds. Please choose between 1 - 4.\n";
            break;
        }

    } while (choice != 4);

    Goodbye();
}
