#include <stdio.h>
int main() {
    int num[6] = {5, 10, 15, 20, 25, 30}; // Corrected initialization syntax
    int *p = &num[4]; // Pointer 'p' points to the first element of the array

    // Accessing the first element through the pointer
    printf("The fourth element is: %d\n", *p);

    return 0;
}

/**
 * The main function of the program.
 * It initializes two integer variables `a` and `b`, prints their values, and returns 0 to indicate successful program execution.
 * int main(){
    int num = 4;
    while (num >= 0){
        if(num == 3){
            num--;
            continue; 
        }
        printf("%d\n", num);
        num--;
    }
}
 */

