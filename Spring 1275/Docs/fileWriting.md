File Writing 

    Where files are stored:
    
    Linking and accessing files:

    Writing to a file
        - in order to save data, it must be stored
            - on computer
            - cloud location
            - USB
            - on a server
            - etc...

        - output files
            - stores the program's response

    File types:

        Text
            encoded with ASCII / Unicode
            can be read with a text editor

            steps:
                1. open file first. connection between file and the program in the correct computer location
                2. write data to the file
                3. close and disconnect file from program

        Binary

    Filestream 
        - like a stringstream
        - program creates a file stream that interacts 
        - other streams we've used:
            - iostream (print out to monitor)
            - stringstream(string) 
        * instead of sending information to the screen, data is being written to the file 

    functions
        - ofstream class 
            - output stream
                - creates files
                - writes data to a file

    Steps

        - create file
        - open file 
            - check that file is open:
                - 1. use a conditional boolean for true or false
                - 2. call the .is_open() function


    Filenames 

        - generally, filenames are written as string literals:
            "outputFile" and "myFile"

        - file operations come from C language, so any access to file ops needs to be written in CStrings or character arrays

        - converting string object into character arrays
            * string filename{"Data.txt"}; 
              filename.c_str()


        taking input for file to use as input and output 
        
