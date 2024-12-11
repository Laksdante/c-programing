#include<stdio.h>
int main (){
    int age = 20;
    char status;
    status = (age>22) ? 'M': 'U';
    if(status == 'M'){
        printf("Married\n");
    }else{
        printf("Unmarried\n");
    }
}