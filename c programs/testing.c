#include<stdio.h>

int main(){
    int i = 1;
    while (i <= 5)
    {
        if(i == 3){
            printf("skipping iteration at i = 3\n");
            i++;
             //increment to avoid infinite loop
            continue;
        }
        printf("i = %d\n", i);
        i++;  // increment for next iteration
    }
    return 0;
}