How to Evaluate Data on Web Sites

reading from a file steps:
    1. create file stream 
        reading input - ifstream input;

    2. open file 
        convert to a c-string
            input.open(filename.c_str());

    3. Check file is open

    4. Read data in file

    5. Close file
        input.close();