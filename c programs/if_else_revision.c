#include<stdio.h>

int main(){
    int income;
    float tax;
    printf("Enter your income: \n");
    scanf("%d", &income);
    if(income < 10000){
        tax = (float)(income * 10/100);
        printf("Your tax is: %.2f", tax);
    }else{
        tax = (float)(1000 +(income - 10000) * 15/100);
        printf("Your tax is: %.2f\n", tax);
    }
    
}