Calling a function from another function

    main functions can house multiple functions, and functions can be called within each other
    how to call function:
        - pass required arguments in () after the function name
        - if function is not void (returns a value), assign the returned value to a variable inside of the calling function

    DO NOT
        - pass type into calling function 
        - in main, you won't say "AddSum(int a, int b)"
        - instead, just input argument - "AddSum(1, 2)"
        - int a will be = 1, int b = 2 
        - then those arguments will be pushed through the function 

    THE PROCESS
        - 

    IN ORDER TO CALL A FUNCTION, MAKE SURE:
        - function being called if declared before function doing the calling


Overloaded Functions 

    allows 2+ functions to have the same name but different params (what is called in the definition)

        - would allow you to have something like this: 
            - int Num (int a, int b)
            - double Num (double a, double b)
            - float Num (float a, float b)
        - but can you make them the same datatype? like int Num (int a, int b) and int Num (int c, int d)?

    advantages of overload
        - assists in readability, you know what each function is doing 
        - reusability
        - saves memory space, only has to read one function name (?) 
    
    an overloaded function in a library
        - pow (power) in CMath library

    rules: What is okay?
        - different params datatypes
        - different number of params
        - different sequence of params




// executable code will go in this file
#include "Functions.h";

int main() {
	int result = AddNum(23, 26);
	cout << "Result is: " << result << endl;

	int x = 10;
	FunctA(x);

	Print(1); // call function to print integer
	Print(1.0); // call function to print double
	
	return 0;
}