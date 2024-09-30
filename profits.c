#include <stdio.h>
int main(){
    int bp, sp, profit, loss;
    printf("Enter buying price: ");
    scanf("%d", &bp);

    printf("Enter selling price: ");
    scanf("%d", &sp);

    // calculation for profit
    profit = bp-sp;
    // calculation of loss
    loss = sp-bp;

    if (loss >=0)
    {
        printf("Your Loss is %d", loss);
    } else {
        printf("Invalid Enter, Please Try Again!");
    }
    
}