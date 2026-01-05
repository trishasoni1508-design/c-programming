//Write a C program to find square of a number using function
#include <stdio.h>
int square(int n) {
    return n * n;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Square of %d is %d\n", num, square(num));
    return 0;
}
// OUTPUT
// Enter a number: 8
// Square of 8 is 64