//Write a C program to sort the elements of an array in ascending order.
#include <stdio.h>
int main() {
    int arr[100], n, i, j, temp;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
// OUTPUT
// Enter number of elements in the array: 4
// Enter 4 elements:
// 45
// 78
// 34
// 35
// Array in ascending order:
// 34 35 45 78