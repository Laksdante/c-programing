#include <stdio.h>
int main(){
    int i = 1;
    while (i <= 10){
        if(i == 5){
            printf("Breaking the loop at i = 5\n");
            break;
        }
        printf("i = %d\n", i);
        i++;
    }
    return 0;
}