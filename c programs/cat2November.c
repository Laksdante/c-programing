#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 10; i++){
        if(i == 3){
            printf("Skipping iteration at i = 3\n");
            continue;
        }
        printf("i = %d\n", i);
        if ( i == 5) {
            break;
        }
    }
    return 0;
}
