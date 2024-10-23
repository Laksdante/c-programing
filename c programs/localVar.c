
/*Local variables are only accessible within the function or block where they are declared. In your case, age and height can only be used inside the person() function.*/
#include <stdio.h>
void person() {
    //Local variables of the function 
    int age = 20; 
    float height = 5.6;
    // printing the output 
    printf("age is %d \n", age); // only accessible within this function
    printf("height is %.1f", height); // only accessible within this function 
}
int main() {
    person();
    return 0;
}
/*Scope:
Local variables are only accessible within the function or block where they are declared. In your case, age and height can only be used inside the person() function.
Lifetime:
Local variables exist only while the function is executing. When the function person() finishes executing, the local variables age and height are destroyed, and their memory is freed.
Storage:
Local variables are typically stored on the stack, meaning they are created when the function is called and removed from memory when the function returns.*/
