#include<stdio.h>

void value(){
    int a = 10;
    auto int b = 20;

    printf("The Value is: %d\n", a);
    printf("The other is: %d\n", b);
}
int main(){
    value();
    return 0;
}