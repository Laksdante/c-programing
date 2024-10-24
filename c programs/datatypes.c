#include <stdio.h>

int main(){
    int myInteger = 16;
    float myFloat = 3.14;
    double myDouble = 6.4758633;
    char myCharacter = 'M';
    //For string C has a different way to handle strings unlike other Languages 
    char myString[12] = "Laks Dante";
    printf("The String: %s\n", myString);
    printf("The Interger: %d\n", myInteger);
    printf("The Float: %f\n", myFloat);
    printf("The Double: %lf\n", myDouble);
    printf("The Character: %c\n", myCharacter);

    return 0;
    }