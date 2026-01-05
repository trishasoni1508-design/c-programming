//34. Write a C program to read 5 integers into an array and print them.//
#include <stdio.h>
int main(){
    int arr[5];
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The 5 integers are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
// OUTPUT
// Enter 5 integers:
// 23
// 56
// 89
// 67
// 9
// The 5 integers are:
// 23 56 89 67 9