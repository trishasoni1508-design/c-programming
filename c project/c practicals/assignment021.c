#include <stdio.h>
int main() {
    float distance, total = 0;
    int i;
    for(i = 1; i <= 30; i++) {
        printf("Enter distance walked on day %d(km): ", i);
        scanf("%f", &distance);
        total += distance; 
    }
    printf("\nTotal distance walked = %.2f km\n", total);
    return 0;
}
//Enter distance walked on day 1(km): 2
//Enter distance walked on day 2(km): 3
//Enter distance walked on day 3(km): 5
//Enter distance walked on day 4(km): 2
//Enter distance walked on day 5(km): 2
//Enter distance walked on day 6(km): 22
//Enter distance walked on day 7(km): 32
//Enter distance walked on day 8(km): 2
//Enter distance walked on day 9(km): 2
//Enter distance walked on day 10(km): 5
//Enter distance walked on day 11(km): 2
//Enter distance walked on day 12(km): 2
//Enter distance walked on day 13(km): 1
//Enter distance walked on day 14(km): 32
//Enter distance walked on day 15(km): 25
//Enter distance walked on day 16(km): 2
//Enter distance walked on day 17(km): 5
//Enter distance walked on day 18(km): 5
//Enter distance walked on day 19(km): 5
//Enter distance walked on day 20(km): 55
//Enter distance walked on day 21(km): 5
//Enter distance walked on day 22(km): 5
//Enter distance walked on day 23(km): 2
//Enter distance walked on day 24(km): 2
//Enter distance walked on day 25(km): 5
//Enter distance walked on day 26(km): 2
//Enter distance walked on day 27(km): 4
//Enter distance walked on day 28(km): 5
//Enter distance walked on day 29(km): 5
//Enter distance walked on day 30(km): 4

//Total distance walked = 250.00 km
