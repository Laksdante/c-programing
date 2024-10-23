#include <stdio.h>

int main(){
    char Gender;

    printf("Enter Your Gender: ");
    scanf("%c", &Gender);

    // Validate th input and provide the response 
    if (Gender == 'F' || Gender =='F') 
    {
        printf("You are verified for access\n");
    } else if(Gender == 'M' || Gender == 'M') {
        printf("Access Denied\n");
    } else {
        printf("Invalid input. Please Enter M or F for Gender.\n");
    }

    return 0; 
    
}