#include <stdio.h>

int main (){
    int a;
    for(a = 1; a <= 10; a++) {
        printf("a: %d\n", a);
    }
    return 0;
}
/*
OR 
The initialization step can be placed above the header of the
for loop. In that case, the init
part must be left empty by putting a semicolon.
#include <stdio.h>

int main (){
    int a = 1;
    for( ; a <= 10; a++) {
        printf("a: %d\n", a);
    }
    return 0;
}

You can also put an empty statement in place of the increment clause. However, you needto put the increment statement inside the body of the loop, otherwise it becomes an
infinite loop

#
include
<stdio.h>
int main ()
{
int a;
// for loop execution
for(a = 1; a <= 5;) {
printf( "a: %d\n", a);
a++;
}
return 0;
}
*/