#include <stdio.h>

int main (){
    int start = 1;
    printf("Enter the start value: \n");
    scanf("%d", &start);

    if(start == 1){
        printf("Hello World\n");
    }else{
        printf("Not equal to 1\n");
    }
    return 0;
}