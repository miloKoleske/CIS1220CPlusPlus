Reading data

    - Save as a csv
    - if a csv is not available, copy the data into an excel file, save out as a csv, and open the data in a text reader


Remove unecessary information:

    - use getline to read the first two lines into a string named trash and remove them 


Read the rest of the lines

    - use a for loop the read the rest of the lines into individual arrays


Hidden characters in data

    - removing hidden characters like "," s that are used to display thousands (ex. 4,000) can mess with the getline or cin

    - edit in excel
        - select the column -> format -> format cells
        - under general -> numbers->
            - change decimal places to 0 (turns everything into ints)
            - disable "Use 1000 separator (,)"
            - change integers to positive

Reading loop 

    - keep in mind, every line has multiple data items in it
    - will require a nested loop 
    - after data items desired are pulled, call getline and throw away all trash information
        getline(input, trash);


getLine delimiter

    - default is "\n"
        - computer reads to the end of the line and consumes the enter key "\n"

    - customize a delimiter as based on the text file version of your data
        - if you're saving into a CSV, then use "," as the delimiter


Read as a string first, then convert

    - because we're reading with a getline, we'll be separating along the "," delimiter
    - then, convert that info to the right data type
        - use a temporary c-string

How to read data that is very long

    -- limit a const int size to 24 items 



Memory is two parts:
    
    -- heap
    -- stack 


