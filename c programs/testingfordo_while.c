#include <stdio.h>

int main(){
    int i = 1;

    do{
        if(i == 3){
            printf("Skipping iteration at 3\n");
            i++;
            continue;
        }
        printf("i = %d\n", i);
        i++;
    }while(i <= 5);

    return 0;
}