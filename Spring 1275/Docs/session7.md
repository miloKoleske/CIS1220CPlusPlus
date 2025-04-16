Ternary Operator

Perform conditional expressions quicker

Syntax:
    condition ? expression 1 if true : expression 2 if false


Best use cases for braces

    if(condition)?                        if(condition)?
    statement_1:                          statement_1;
    statement_2;                          statement_2:
    statement_3;                          statement_3
    

    Dangling else statements

        many ifs, and only 1 else
        the ELSE doesn't know who its IF parent is


    Functions and Braces
        code of a function is enclosed in set of braces
            int main() {code goes here...}
        need to be both opened and closed


Using the cmath library
    access by #include <cmath> (library name is within the <>)
    some operations cannot be accessed without it, like power function, rounding and remainder and minimum and maximum functions(ceil/floor)
    
    types:
        power
            double pow
            initialize a base and exponent variable as a double
            can also use floats and ints
            base = {3.4}, exp ={4.0} = base^exponent=result

            double area = pi * pow(radius,2)
                                     ^    ^
                                     base  exponent
        square root
        ceil
            tells variable what it can be rounded up to
        floor
            tells variable what is can be rounded down to
        fmin
            returns smallest number
        fmax
            returns largest number
Debugging
    3 types of errors:
        1. typos - easy to fix - compile error
        2. syntax errors - generally easy - compile error
        3. logic error - run time error

    run time error: doesn't show up until you run the program
        may prevent code from running at all, or will lead to a halting error

        use visual studio debugger to step through program one line at a time
    compile error: shown by red squiggles under errors