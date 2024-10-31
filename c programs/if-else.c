/*
if
(
condition
)
{
// if the condition is true,
// then run this code
}
else
if
(
another_condition
)
{
// if the above condition was false
// and this condition is true,
// then run the code in this block
}
else
{
// if both the above conditions are false,
// then

*/

#include<stdio.h>

int main(void) {
    int age = 28;

    if (age < 18){
        printf("You need to be above 18 years old to continue\n");
    } else if(age < 21){
        printf("You need to be over 21\n");

    } else{
        printf("You are over 18 and older than 21 so you can continue\n");
    }
}
