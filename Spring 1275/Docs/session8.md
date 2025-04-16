Loops

    - repeat statement certain number of times / while condition is fulfilled / true 

    - loop types:

        - while loop
            - while x is true, do this 
            - or, FOR AS LONG as x is true, do this
            - if x is false at beginning, then loop won't execute
            - example: WHILE it is below a certain temperature, you should WEAR A COAT 
        - do - while loop
            - do THIS while CONDITION is met
            - condition runs second so that the DO runs at least once before checking the condition, so prints even if at the beginning, condition is false 
            - reads whole block of code before checking if condition if false
            - would it be recommended to use a do while loop to make a computer virus??
            - variable MUST be initialized before loop, or loop will not end  
        - for loop
            - has a limiter -- when you know the size of the loop 
            - DONT increment the counter independently
            - run this amount of times 
        - play loop
            - asks for user input
            - keeps running until user decides to stop the loop
            - introduces a "play" / interactive option
            - still uses the WHILE keyword, the main focus here is in the interactivity
        - break loop 
            - can interrupt the length of a loop to pop out a value/ tell it when to stop

for example:
    - for (int i = 1; i <=5 ; i++>)
    - initially i = 1. FOR as long as i is less than or equal to 5, increment the value of i by 1 each loop

while example:

    - int i = 1;
    while (i <=5>) {
        i++;
    }
    - i is initialized at 1. WHILE i is less than or equal to 5, incredment the value of i by 1 each loop

do - while example:

    - int i = 1;
    do {
        i++
    } while (i<=5>);
    - i is initialized at 1. DO the incrementation action for every loop WHILE i is less than or equal to 5.

play example:
    char playAgain

    - cout << "Do you want to play again?;
    cin >> playAgain;
    while(playAgain =='y' || playAgain =='Y')
    i++
    - a char datatype is defined. The user is asked if they want to play the game again, and their response is stored in the playAgain char variable. WHILE the value of playAgain is EQUAL TO 'y' OR 'Y': increment i by 1 each loop



    
    the purpose of loops is to alter values and then check them 