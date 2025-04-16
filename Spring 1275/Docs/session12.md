Functions

how to divide code into multiple pages 

1 program can become 3 files:
    - Header file
        - Functions.H
        - all preprocessor directives (#include, namespace, etc.)
    - Function Definitions
        - Functions.cpp
        - 
    - Executing file


C++ can assist in typing function definitions if you make it in the function prototype

when files are not matched together, you may get a link error 

Files are linked by using #include in the header of that file 

Files that need #include Functions.h:
    Functions.cpp
    Driver.cpp
    