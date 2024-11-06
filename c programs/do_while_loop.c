#include<stdio.h>

int main(){
    int a = 1;
    do {
        printf("a: %d\n", a);
        a++;
    } while(a <=5);
    printf("End of loop");
    return 0;
}