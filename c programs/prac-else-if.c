#include <stdio.h>

int main(){
    int score, passmark = 50;
    printf("Enter score: ");
    scanf("%d", &score);

    if(score < passmark) {
        printf("You dont qualify");
    }else if (score == passmark){
        printf("You are on a lifeline");
    } else{
        printf("You have been selected for the interview");
    }
    return 0;
}