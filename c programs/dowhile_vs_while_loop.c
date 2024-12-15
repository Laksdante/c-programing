#include<stdio.h>

int main() {
    int a = 10, b = 10; //values change from a=0, b=0 to a=10, b=10
    
    //Differentiation of while and do-while loop

    printf("Output for While Loop\n");
    while(a < 5){
        printf("a: %d\n", a);
        a++;
    }
    printf("Output for d0-While Loop\n");
    do{
        printf("b: %d\n", b);
        b++;
    }while(b < 5);

    return 0;
}