#include <stdio.h>

int main() {
    //Declaring Varaibles 
    int birthYear, currentYear, age;
    printf("Enter Your birthyear: ");
    scanf("%d", &birthYear);
    printf("Enter the current year: ");
    scanf("%d", &currentYear);
    
    //Calculate Age
    age = currentYear - birthYear;

    if (age > 0)
    {
        printf("You are %d years old.\n", age);

    } else{
        printf("Please enter the corrent info.\n");
    }
    
    return 0;

}