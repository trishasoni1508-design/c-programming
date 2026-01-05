// Write a program to store n numbers in an array and find their sum.//
#include <stdio.h>
int main(){
    int n,sum=0;
 printf("Enter the Number of Elements: ");
 scanf("%d",&n);
     int arr[n];

     printf("Enter the numbers: ");
 for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
     sum += arr[i];
 }
    printf("Sum of the numbers = %d\n", sum);
    return 0;
}
// OUTPUT
// Enter the Number of Elements: 4
// Enter the numbers: 45
// 67
// 34
// 45
// Sum of the numbers = 191