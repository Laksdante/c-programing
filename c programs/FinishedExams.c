#include <stdio.h>

int main () {
    char status;

    printf("Enter your Examination status(y/N): ");
    scanf(" %c", &status);

    if(status == 'y'){
        printf("Marry Xmas and a happy new year\n");
    }else {
        printf("Dont give up Hope\n");
    }
    return 0;

}