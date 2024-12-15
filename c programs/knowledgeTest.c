#include<stdio.h>

int main(){
    int num = 5;
    while (num > 0){
        if(num == 3){
            num--;
            continue;
        }
        printf("%d\n",num);
        num--;
    }
}