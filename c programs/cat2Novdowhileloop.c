#include<stdio.h>

int main(){
    int i = 1;
    do {
        if (i == 5)
        {
            printf("Breaking the loop at i = 5\n");
            break;
        }
        
        printf("i= %d\n", i);
        i++;
    } while(i <= 10);
}