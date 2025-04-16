#include "Functions.h"

//link to vector list file
fstream myFile;

int main()
{

    //open file
    myFile.open("VillagersData.txt");
    string line = "";
    string result2 = "";
    vector <string> villagersData;


    if (myFile.is_open()) {
        cout << "File is open!\n";
        // the line that will be inserted into villagerData string
        string s;


        while (getline(myFile, s)) {
            villagersData.push_back(s);
        }

        myFile.close();

        //// fill the string vector villagerData
        //while (getline(myFile, s)) {
        //    villagerData.push_back(s);
        //}

        ////check if villagerData is empty
        //if (villagerData.empty())
        //{
        //    cout << "Vector is empty" << endl;
        //}
        //else {
        //    for (int i = 0; i < villagerData.size(); ++i) {
        //        cout << "Line 1: " << villagerData[i] << endl;
        //    }
        //}
    }
    cout << "Elements are: " << endl;
    for (int i = 0; i < villagersData.size();i++) {
        //print just the first line:
        for (int j = 0; j < 1; j++) {
            cout << j << endl;
        }
        cout << villagersData[i] << endl;
    }



    myFile.close();




        //nested loop to check each vector and return line by line


 /*   line = ReadLine(villagerData);
    cout << "\nResult of ReadLine function in main: " << line << endl;
    result2 = PrintLine(villagerData);
    cout << "\nResult of PrintLine function in main: " << result2 << endl;*/
}
