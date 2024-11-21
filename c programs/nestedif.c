#include<stdio.h>
int main(){
    int year = 2007;
    printf("Year: %d\n", year);

    if (year % 4 == 0) {
        //is divisible by 4?
        if(year % 100 == 0){
            //is divisible by 100?
            if(year % 400 == 0){
                //if divisible by 400?
                printf("%d is a leap Year\n", year);
            }else{
                printf("%d is not a leap Year\n", year);
            }
        } else{
            printf("%d is a leap Year\n", year);
        }
    }else{
        printf("%d is not a leap year", year);
    }
}

/* #include<stdio.h>
int main() {
    int a = 274;
    printf("Value of a is: %d\n", a);

    if (a >= 100){

         if(a < 200){
            printf("Value of a is between 100 and 200\n");
         } else{
            printf("Value of a is more than 200\n"); 
         }
        
    } else{
        printf("Value of a is less than 100\n");
    }

    return 0;

 }*/ 
