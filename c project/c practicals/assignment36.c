#include <stdio.h>
int main() {
    int color;
    printf("Enter Number: ");
    scanf("%d",&color);
    switch (color){
        case 1: printf("Red-Stop");
                break;
        case 2: printf("Yellow-Ready");
                break;
        case 3: printf("Green-Go");
                break;
        default:printf("Invalid");
    }
    return 0;
}
// OUTPUT
// Enter Number: 2
// Yellow-Ready