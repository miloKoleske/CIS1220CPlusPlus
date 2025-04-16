preprocessor directives

#include 
    - lines begin w/ hash sign
    - don't end with semicolon
    - <standard C++ formulas> being used go in the carrots <>
    - AKA A library (like Python modules)
    - interpreted before the compilation
    - tell preprocessor that some section of standard C++ code will let us make the query happen

Name statements
    - ends with a semicolon
    - organize the program
    - avoid problems if components have the same name


#define
    - inherited from C
    - a symbol that performs a substitution
    - not a best practice anymore


const
    - tells program that variable will not be changing throughout program
const data_type variable_name=initial_value;


main function
    - special function 
    - where all C++ programs begin
    - calls other program components thru using objects


{and}
    - defines function's body
    - code goes between them 
    {
        code goes here...
    }

c++ statement
    - command that is executed
    - expression that produces result
    - code flow - statements run in same order they appear (top to bottom)
    - all end with a semi-colon


cout 
    - specifies monitor for output

insertion operator >>
    - puts output on screen

("Hello world!")
    - the statement that is printed 


/n
    - escape sequence 
    - output will be printed to the next line


return 0;
    - another C++ statement
    - return 0 = successful execution
    - return 1 / another number = error in execution 