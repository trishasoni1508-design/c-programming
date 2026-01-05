//Write a C program to calculate the factorial
//of a number using a function that returns the result through call by reference.
#include <stdio.h>
void factorial(int n, long long *result) {
    *result = 1;
    for (int i = 1; i <= n; i++) {
        *result = (*result) * i;
    }
}
int main() {
    int num;
    long long fact;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        factorial(num, &fact);   // Call by reference
        printf("Factorial of %d is %lld\n", num, fact);
    }
    return 0;
}
// OUTPUT
// Enter a number: 6 
// Factorial of 6 is 720