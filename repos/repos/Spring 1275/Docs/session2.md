Data Types

    - stored into RAM (in different locations?)

    - think of being asked to retain the memory of a few numbers, words, letters, etc.

    - C++ is case-sensitive
        - result
        - Result
        - RESULT 
    are all different variables 

    - while all are represented with 0s and 1s, they don't interpret the same way and might not occupy the same amount of memory space

    come in different sizes - depends on number of bits/bytes

.cpp is the file type 

main data types:

    - ints - integers - whole number
    - floats - floating point - have decimal values up to 7 
    - doubles - also a floating point - can have up to 16 decimals
    - bools - - booleann - binary response - true or false
        - false = 0
        - true = 1 (or just not zero)
    - chars - character - a single byte character like a letter or symbol 


ASCII and Unicode

    - chars are part of ASCII (American Standard Code for Information Interchange)
    - converts a letter into a number 

    - Unicode is international standards
    - requires wide characters, can hold more info


Data type modifiers

    - terms like short, long, long long, unsigned 


Size is important!

    - Ariance 5 rocket converted a value of 64 bits to 16 bit and failed as it hit the maximum of the 16 bit integer 


Variable Declaration

    - include data type and variable name
    - int cats = 3;
    - if you want to assign value later, set value at first as 0


C++ does not initialize variables 

    - different dev environments have their own defaults
    - generally VS initializes to a large negative value, which can end with result = undertermined
    - Uniform Initialization is most popular 

Invalid Identifiers

    - spaces
    - punctuation marks
    - symbols 
    - keywords


Where to declare variables

    - function header is not the most recommended
    - preferrably, declare variables inside function 
    - constants are only variable declared outside a function (they cannot be modified)


