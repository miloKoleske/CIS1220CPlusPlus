Using structs for data of different types

    - can hold different data types
    - like an object 
    - different than vectors, which are a collection of values but only hold same data type
    
each element = member

Defining struct


    - struct keyword
    - struct name is the name of the structure
    - stored in {}


example:

    struct Employee

    {
        string name;
        int age{42};
        float salary {30000};
    }

        3 members inside of the structure 


multi file using struct

    header 
        - declared in main like a function
        - no additional #include libraries needed

    access

    structs can be passed as the whole, a dingle piece of data, or individual members 

    if you want struct members to not be altered by function, pass by value

            - remember: pass by value is making a copy that does not affect original value
            - pass by reference: changes original information by calling the memory reference (address)

    if struct members need to be altered by function, pass by reference

