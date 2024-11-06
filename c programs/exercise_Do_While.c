#include<stdio.h>

int main(){

    int a = 24;
    do{
        printf("%d\n", a);
        a ++;
    } while(a <= 10000);
    printf("End of loop\n");

    return 0;
}