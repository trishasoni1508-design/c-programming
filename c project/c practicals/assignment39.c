//Write a C program that prints the weekly lecture schedule for six days (Monday to Saturday).
//(a)Using Switch case or if else condition. 
//(b) Taking input from user and display schedule as per user input.
#include <stdio.h>
int main() {
    int day;
    printf("Enter day number (1-Monday to 6-Saturday): ");
    scanf("%d", &day);
    switch (day) {
        case 1:
            printf("Monday: Mathematics, Physics\n");
            break;
        case 2:
            printf("Tuesday: Chemistry, English\n");
            break;
        case 3:
            printf("Wednesday: Computer Science, Math\n");
            break;
        case 4:
            printf("Thursday: Physics, Chemistry\n");
            break;
        case 5:
            printf("Friday: Computer Science, English\n");
            break;
        case 6:
            printf("Saturday: Lab Work\n");
            break;
        default:
            printf("Invalid input! Please enter 1 to 6.\n");
    }
    return 0;
}
// OUTPUT
// Enter day number (1-Monday to 6-Saturday): 4
// Thursday: Physics, Chemistry