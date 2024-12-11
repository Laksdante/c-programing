#include <stdio.h>

int main(){

    int num = 4;
    while(num >= 0){
        if(num == 3){
            continue;
            num--;
        }
        printf("%d\n", num);
        num--;
    }
}





/**
 * The main function of the program.
 * It initializes two integer variables `a` and `b`, prints their values, and returns 0 to indicate successful program execution.
 * 
 * int main()
{
    int a = 5, b = 26;
    printf("a=%d b=%d\n\n",a,b);
    printf("a=%d\n b=%d",a,b);
    return 0;
}
 */

