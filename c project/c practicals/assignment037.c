//Write a C program to search for a given number in an array using linear search.
#include <stdio.h>
int main() {
    int arr[100], n, i, key, found = 0;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }
    if (found)
        printf("%d is found at position %d\n", key, i + 1); // Positions start from 1
    else
        printf("%d is not found in the array\n", key);
    return 0;
}
// OUTPUT
// Enter number of elements in the array: 5
// Enter 5 elements:
// 46
// 56
// 34
// 90
// 54
// Enter the number to search: 56
// 56 is found at position 2