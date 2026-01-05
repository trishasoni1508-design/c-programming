//Write a C program using function that reads marks from the user, computes the total and average, 
//and outputs the grade based on the average.Grade A:average>=90 , Grade B : 80<= average<90,
//Grade C:70<= average <80,Grade D: 60<= average <70, average<60
#include <stdio.h>
void calculate(int marks[], int n) {
    int total = 0;
    float average;
    char grade;
    for (int i = 0; i < n; i++) {
        total += marks[i];
    }
    average = total / (float)n;
    if (average >= 90)
        grade = 'A';
    else if (average >= 80)
        grade = 'B';
    else if (average >= 70)
        grade = 'C';
    else if (average >= 60)
        grade = 'D';
    else
        grade = 'F';
    printf("\nTotal Marks = %d", total);
    printf("\nAverage Marks = %.2f", average);
    printf("\nGrade = %c\n", grade);
}
int main() {
    int n;
    printf("Enter number of subjects: ");
    scanf("%d", &n);
    int marks[n];
    printf("Enter marks of %d subjects:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }
    calculate(marks, n);
    return 0;
}
// OUTPUT
// Enter number of subjects: 5
// Enter marks of 5 subjects:
// 67
// 89
// 89
// 90
// 86
// Total Marks = 421
// Average Marks = 84.20
// Grade = B