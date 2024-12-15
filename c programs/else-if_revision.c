#include<stdio.h>

int main (){
    int age;
    //allow user to enter their age
    printf("Please Enter Your Age here: ");
    scanf("%d", &age);
    //Give the conditions for the age
    if(age < 18){
        printf("Your cannot continue because you are young\n");
    }else if(age <= 21){
        printf("You are not allowed to Vote.\n");
    }else{
        printf("You are eligible to vote.");
    }
    return 0;
}