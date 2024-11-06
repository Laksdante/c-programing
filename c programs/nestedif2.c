#include <stdio.h>

int main(){
    int a = 274;

    printf("Value of a is: %d\n", a);
    if (a < 100) {
        printf("Value is less than 100 \n");
    }
        if (a >= 100 && a < 200){
        printf("Value of a is between 100 and 200\n");

     }
            if (a >= 200) {
            printf("Value of a is more than 200\n");
        }
}