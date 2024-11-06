#include<stdio.h>
#include<time.h>

int main(){
    char input;
    clock_t start, end;
    double elapsed_time; 

    printf("Press 's' to start the stopwatch: ");
    scanf(" %c", &input);

    if (input == 's') {
        start == clock();
        printf("stopwatch started. Press 'e' to stop.\n");

        while (1) {
            scanf(" %c", &input);
            if (input == 'e') {
                end = clock();
                break;
            }
        }
        elapsed_time = ((double)(end - start)) / CLOCKS_PER_SEC;
        printf("Elapsed time: %.2f seconds\n", elapsed_time);
    } else {
        printf("invalid input. Exiting program.\n");
    }
    return 0;

}