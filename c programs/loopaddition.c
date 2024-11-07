#include <stdio.h>

int main(){
    int a = 23;

    for(; a >= 1; a-=3){
        printf("a:%d\n", a);
    }
    return 0;
}