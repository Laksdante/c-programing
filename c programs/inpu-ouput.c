/*#include <stdio.h>

int main() {
    int price, qty, ttl;
    printf("Enter Price and Quantity: ");
    scanf("%d %d", &price, &qty);
    ttl = price * qty;

    printf("Total: %d", ttl);

    return 0;
} */
#include <stdio.h>

int main(){
    printf("Case 1:%6d\n", 9876);
    printf("Case 2:%3d\n", 9876);
    printf("Case 3:%.2f\n", 987.6593);
    printf("Case 4:%.f\n", 987.6543);
    printf("Case 5:%e\n", 987.6543);

    return 0;
}