2.26.25

inputs to function == arguments
outputs are returned using the "return" keyword

VOID keyword = function will not return any value 

functions can have:
    - arguments, return value
    - no args, return value
    - args, no return value (void)
    - no arguments and no return value (void)


Parameters and arguments 

    - params are in the () after the function -- called the DECLARATION
    - args are the values of each param -- called what is PASSES
    - when a function is called -- myFunction(1,2) -- 1 and 2 here are arguments
    - datatypes must always match between params and args


return keyword

    - functions can only return one value
    - if you want to keep data in memory, assign result into a variable that is returned


scope

    - where a function/element/variable is visible 
    - local
        - belongs to that function
        - will not be seen outside of function
        - can only be defined once, will throw an error if you re-define a variable inside the same function 
        - variables with same name can only be defined outside of the local scope
    - global 
        - can be accessed by any functions
        - outside of class, function, or namespace
    - namespace
        - name declared w/in namespace is visible from point of declaration to end of namespace
    - class 
        extends throughout class definition regardless of point of declaration
    - statement
        names declared in a for, if , while, or switch statement are visible until the end of the statement block
    - function 
        - declared within a function are only visible within the function body
        - variable is destroyed after function it is local to is executed 


scope also controls when the variable is destroyed 


variable scope
    - region of the program where variable is declared
        1. inside function/block (local variable)
        2. in definition of function parameters (formal parameters, function header)
        3. 

static variables:
    - remain in memory until end of program 
    - not destroyed
    - one way to count a number of iterations
    - initialized only once 


