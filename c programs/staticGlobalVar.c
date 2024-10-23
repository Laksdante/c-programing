/*When a variable is declared as static outside of any function (i.e., at the global level), it limits the variable’s scope to the file in which it is declared. This makes the variable file-scoped (visible only in the current file).*/
#include <stdio.h>

static int globalCount = 10; // static global variable 

void increment() {
    globalCount++;

    printf("Global count is %d\n", globalCount);
}
int main() {
    increment(1);
    increment(2);
    increment(3);

    return 0;
}
