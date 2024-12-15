#include<stdio.h>

int main() {
    int a;
    int arr[] = {15, 25, 35, 45, 55};

    for(a = 0; a < 5; a++){
        printf("a[%d]: %d\n", a, arr[a]);
    }
    return 0;
}