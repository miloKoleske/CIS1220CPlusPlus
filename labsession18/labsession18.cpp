// labsession18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Functions.h"

// function prototype
void Swap(int& p, int& q);



void AltMain()
{
    //cout << "On references" << endl;

    //cout << "Previously, we learned about pointers: a variable that stores the memory address of another variable, using the dereferencing operator (*) and the addressOf opoerator (&)" << endl;

    //cout << "References are a bit different..." << endl;

    //cout << "\t-create a second name for a variable" << endl;
    //cout << "\t-can access and modify within a different scope" << endl;
    //cout << "\t-consider it as a second name for a variable, like a last name" << endl;

    //cout << "\nGenerally, c++ works by passing by value\n\n";

    //cout << "How to declare a reference: " << endl;

    //cout << "Use an & operator";

    //// creating a variable
    //int a{ 10 };
    //// create a reference variable
    //int& refA = a; // refA is the reference to a and can be used as an alias to a
    //
    //cout << "A: " << a << endl;
    //cout << "REFA: " << refA << endl;

    //// -----------------------------------------------------------------------------
    //cout << "====================================================================" << endl;

    //cout << "References passed as a function param" << endl;

    //// declare integers/ arguments
    //int a2{ 9 };
    //int b{ 0 };

    ////call the function
    //Swap(a2, b);

    //// print out
    //cout << "Swapping two integers by passing references" << endl;

    //cout << "A is now: " << a2 << endl;
    //cout << "B is now: " << b << endl;
    //
    //cout << "==========================================================================" << endl;

    //cout << "Rules of declaring: " << endl;

    //cout << "\t-reference must initialized when declared"
    //
    //
    //
    //
    //
    //
    //return 0;
}

void Swap(int& p, int& q) {
    // variable declaration
    // make temporary variable to swap
    int temp = p;
    p = q;
    q = temp;
}
