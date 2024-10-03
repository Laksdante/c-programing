#include <stdio.h>

void value() {
    int a = 10; // local variable
    static int b = 20; // static variable 
    a = a + 10;
    b = b + 10; 

    printf("The value of local variable: %d \n", a);
    printf("The value of Static variable: %d \n", b); 
}

int main() {
    value();
    printf("Calling function 2nd time \n");
    value();
    printf("Calling function 3rd time \n");
    value();
    return 0;
} 