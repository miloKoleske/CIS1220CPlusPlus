2.17.25

Nested Loops 

    loop inside another loop
    is only executed is first conditional is met 


Uses:
    create columns and rows
    loop 1 iterates rows
    loop 2 iterates columns 

Examples of nested loops:
    clocks 
        - hour hand - 1 rotation = 1 hour
        - minute hand - 60 rotation = 1 hour
        - second - 60 rotation = 1 minute


VECTORS:

    bucket that holds a list of the same type of elements
    basically just allows us to make a variable into an array (has multiple elements)
    number of elements is flexible, can grow and shrink
    defined in the C++ standard template library (stl)
    need to use #include<vector> to make and use vectors 

    say you want to print the information of all students:

    you can't do it like this: {"name", age, address, id number}
                                string  int   string   in/double
    vectors instead can work on the one type.

    So you could have empty vectors that you populate with student names, age, address and id. 

    vector <type> vectorName;

    to make four vectors for name, age, address, id:

    vector <string> name {0};
    vector <int> age {0};
    vector <string> address{0};
    vector <double> idNumber{0};

Template class


How to declare 
    declare vector of ints with no elements
        vector <int> scores;
    declare vector of ints with 20 elements 

Search for a vector element 
    using the index: 
    int value = scores.at(2); -- accessing the 3rd element of the vector

functions
    size -> cast it into an int = int howbig = plants.size();
    pop_back ->
    push_back ->
    