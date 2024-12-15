#include<stdio.h>

int main(){
   int a = 23;
    if (a >= 20){
        if(a < 25){
            printf("You are a youth\n");
        }else{
            printf("You are not a youth but a mature\n");
        }
    }else{
        printf("You are still young\n");
    }
    return 0;
}
   