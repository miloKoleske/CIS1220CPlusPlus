Loops cont'd -- another day with Prof. Uchenna 

NESTED LOOPS 
    - having a statement inside another one
    - to make more complicated decisions when more than one condition has to be satisfied -- like a checklist
    - multiple condition are true before execution 
    - if condition a is false, statement doesn't run 

-------------------------------------------------------------

WHAT IS LEGAL?
    - nesting if-else statements 
    - multiple if/else-if statements inside each other



NOTE: iostream = input/output stream 

FUN FACT: "|" is called a pipe!


FORMAT:

int a = 10, b=5, c=15;
if (a > b) {
    cout << "a is greater than b" << endl ;

    if (b == 200) {
        cout << "true";
    }
}


LOGICAL OPERATORS:
    - relational operators only test 1 condition at a time
        - ==, <, >, <=, >=, ! 
    - logical operators lets us know if multiple conditions are true all at once
        - !, &&, ||

NOT operator - !
    - NOT KEYWORD makes the statement into a boolean, a true or false 
    - operand to right is inverted and if operand is true, it becomes false (vice versa) 

AND operator - &&
    - AND evaluates if two expressions are true and then code inside {} applies 


FAILURE by condition &&
 |cond. a  | cond. b | result |
 |---------|---------|--------|
 |true     |   true  |  true  |
 |---------|---------|--------|
 |true     |   false |  false |
 |---------|---------|--------|
 |false    |   true  |  false |
 |---------|---------|--------|
 |false    |   false |  false |



Second statements aren't always read if the first statement is true

(5==5) && (3>6) - condition a true, check condition b
(3>6) && (5==5) - condition a is false, even if condition b was true, that would make this a || operator, so skip b
(5==5) || (3>6) - condition a is true, only one needs to be true, so skip b
(3>6) || (5==5) - condition a is false, need to check if condition b is also false
    



do {
    code...
}while(condition=true) // loop and play when condition is true

cout << result;

























2/12 - not sharp anymore, sharp until around 10 - 11 am. 
