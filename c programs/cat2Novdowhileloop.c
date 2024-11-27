#include<stdio.h>

int main(){
    int i = 1;
    while (i<=10)
    {
        if (i == 3){
            printf("Skipping iteration at i = 3\n");
            
            continue;
        }
        
        printf("i = %d\n", i);
        if(i == 5){
            break;
        }
    }
}