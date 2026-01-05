#include <stdio.h>
int main() {
    int units, total = 0;
    int i;
    for(i = 1; i <= 7; i++) {
        printf("Enter units used on day %d: ", i);
        scanf("%d", &units);
        total += units; 
    }
    printf("\nTotal electricity units used in a week = %d\n", total);
    return 0;
}
// OUTPUT
// Enter units used on day 1: 300
// Enter units used on day 2: 200
// Enter units used on day 3: 150
// Enter units used on day 4: 230
// Enter units used on day 5: 150
// Enter units used on day 6: 250
// Enter units used on day 7: 180
// Total electricity units used in a week = 1460