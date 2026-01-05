#include <stdio.h>
int main() {
    float price, total = 0;  
    int i;
    printf("Enter the price of 5 items:\n");
    for(i = 1; i <= 5; i++) {
        printf("Enter price of item %d: ", i);
        scanf("%f", &price);
        total += price;
    }
    printf("\nTotal Bill = %.2f\n", total);
    return 0;
}
// OUTPUT
// Enter the price of 5 items:
// Enter price of item 1: 60
// Enter price of item 2: 50
// Enter price of item 3: 40
// Enter price of item 4: 80
// Enter price of item 5: 70
// Total Bill = 300.00