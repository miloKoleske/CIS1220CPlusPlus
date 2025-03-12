// labsession17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{


    int a{ 100 };
    double b;
    char l;
    float c;
    bool T;

    cout << "How can we access the value in a?" << endl;
    cout << "cout a: " << a << endl;

    cout << "\nAccess hexa address of a variable by using addressOf operator - &" << endl;
    cout << "\nInt a is equal to " << a << " and can be found at: " << &a << endl;

    cout << "\nWith this, we can assign the address of a variable to another variable" << endl;

    cout << "\nA variable that stores the address of another variable is a POINTER." << endl;

    int myVar = 25; // value of myVar = 25
    int* ptr; // you can also declare and initialize at the same time
    int* ptr2{ &myVar };

    cout << "\t- Declare a pointer by defining the type, and put a * before the variable's name, like this: int *pointer" << endl;

    cout << "\t- The * designates the variable is a pointer." << endl;

    cout << "\t- All pointers take up the same amount of memory - 4 bytes" << endl;

    cout << "\nInitializing a pointer: int* ptr = &myVar" << endl;
    cout << "\t- The pointer will hold the address of myVar by using the addressOf Operator" << endl;

    ptr = &myVar;
    cout << "\nPointer value is " << ptr << endl;
    cout << "\nWhat happens if we de-reference the pointer (cout *ptr)? " << endl;
    cout << "\n" << * ptr << endl;
    cout << "\nYou access the value of myVar!";

    cout << "==========================================================================" << endl;

    cout << "\nSo, why use POINTERS?" << endl;

    cout << "\t- functions only return 1 piece of data, sometimes you need more" << endl;
    cout << "\t- local variables in functions aren't accessible to the calling function (in a different scope)" << endl;
    cout << "\t- passing a pointer with local variable's address in calling function is called a PASS BY REFERENCE." << endl;
    cout << "\t\t* copies the address and passes value to the calling function" << endl;
    cout << "\t\t* redeclares the original and makes no copies" << endl;
    cout << "\t\t* use pass by ref as often as possible" << endl;

    cout <<"\t- PASSING BY VALUE makes a copy" << endl;

    cout << "\t- Dynamic memory management" << endl;
    cout << "\t";
    
    //addressMyVar = &myVar;

    return 0;


}