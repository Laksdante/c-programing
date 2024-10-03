/*The global variable in c is defined outside of any function and is therefore accessible to all functions*/

#include <stdio.h>
// Declaring global variable 
int a = 23;
float b = 2.5;

void function1() {
    // function1 using global variable a
    printf("The number is %d \n", a);
}

void dante() {
    // function dante is using global variable 
    printf("The number is %.2f \n", b);
}

int main(){
    // calling function1 and dante
    function1();
    dante();
    return 0;
}
