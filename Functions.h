//include guards -- define the name of the header file so it can be linked in other files

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

//preprocessor directives -- tell the computer what libraries we will need to access 
#include <iostream> // standard library to run cin, cout
#include <string> // string library to allow access to string functions
#include <vector> // vector library to allow access to vector functions
#include <fstream> // library to read and write data from and to files

//M: in this project, I chose to use vectors because I don't like arrays

using namespace std; // define standard namespace to call string, cin, cout, etc.

// functions prototypes

string ReadLine(vector <string> villagerData);
string PrintLine(vector <string> villagerData);






//close include guard
#endif