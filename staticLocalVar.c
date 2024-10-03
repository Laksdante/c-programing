/*
Static Variables enable data to remain after the function has been executed and returned; 
this allows the function to remember a value from a previous call, making it both efficient and powerful. */
#include <stdio.h>
void counter() {
    static int count = 10; 
    count++;

    printf("count is %d\n", count);
}

int main(){
    counter();
    counter();
    counter();

    return 0; 
}