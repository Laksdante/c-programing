
#include <stdio.h>

int  main ()
{
    int age = 29;
    //This is asigning the result of the ternary(In programming, a ternary operator is a shorthand conditional operator that takes three operands. It is typically used as a compact alternative to an if-else statement and is found in many programming languages, including C, C++, Java, Python, and others.) operation to a variable called status
    //(age > 22): This is the condition being evaluated. It checks if the value of age is greater than 22.
    //?: This symbol separates the condition from the two possible outcomes.

//'M': This is the value that will be assigned to status if the condition is true (i.e., if age is greater than 22).

//: This symbol separates the two possible outcomes.

//'U': This is the value that will be assigned to status if the condition is false (i.e., if age is 22 or less). 
    char status;
    status = (age>30) ? 'M' : 'U';
    if (status == 'U')
    printf("Married");
    else
    printf("Unmarried");
    return 0;
    } 



