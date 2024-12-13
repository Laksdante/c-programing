#include<stdio.h>

int main(){
    int phy, maths;
    float avrg;

    phy = 40;
    maths = 45;

    avrg = (float)(phy + maths)/2;
    printf("Phy: %d Maths: %d Avg: %f\n", phy, maths, avrg);

    if(avrg >= 50 && (maths >= 35 && phy >= 35)){
        printf("Result: Pass\n");
    }
    if(avrg < 50){
        printf("Result: Fail\n");
    }
    return 0;

}