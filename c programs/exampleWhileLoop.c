#include <stdio.h>

int main (){
    int a = 10, b = 0;

    while(a != b){
        printf("a: %d b: %d\n", a, b);
        a--;
        b++;
    }
    printf("End of Loop\n");
    return 0;
}