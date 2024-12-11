#include <stdio.h>

int main(){
    char op1[50];
    char op2[50]; 

    printf("Enter Your Name: ");
    scanf("%49s", op1);
    printf("Enter your Second name: ");
    scanf("%49s", op2);
    

    printf("Your names are: %s %s\n", op1, op2);
    return 0;
}



