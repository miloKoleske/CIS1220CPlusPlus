// koleskeComp1Act3.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Milo Koleske
// mkoleske@cnm.edu
// 

#include <iostream>
using namespace std;

int main()
{
    cout << "\nName: Milo Koleske\n";
    cout << "Program title: Learning numbers\n";
    cout << "Program objective: Add the sum of 2 numbers\n";

    // declare variables
    int number1 {34};
    int number2{ 56 };
    int sum{ 0 }; // initialize as 0
    
    // calculation
    sum = number1 + number2;
    cout << "The result is: " << sum << "\n";
    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

/*
Write a Visual Studio program named lastnameComp1Act3.

5 pts  Write your name, email address and file name at the top of your source code in a comment.

5 pts Use cout statements to write your name, program title, and program objective to the screen so that it is the first thing seen when your program runs.  This is your course header.

 Write a program in C++ to print the sum of two numbers using variables. Declare and initialize two numbers using uniform initialization.  They should represent the number of students in a class(28) and the number of visitors in the class (3).  Add the two together and cout the sum of students plus visitors.

5 pts Delete the intermediate files, zip your project and upload it to this activity in Brightspace.
*/
