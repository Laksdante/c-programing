#include <stdio.h>

int main(){
    int i = 1;

    while(i<=5){
        if(i == 3){
            printf("Skipping iteration at 3\n");
            i++;
            continue;
        }
        printf("i = %d\n", i);
        i++;
    }
    return 0;
}