//Write a C program that displays a menu asking the user to print a multiplication table or exit.
//If the user presses 1, the program should take a number and display its table from 1 to 10; 
//if the user presses 0, the program should exit.
//(a) Using While.
//(b) Using Do While.
#include <stdio.h>
int main() {
    int choice = 1, num, i;
    while (choice != 0) {
        printf("\nPress 1 to print multiplication table");
        printf("\nPress 0 to exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Enter a number: ");
            scanf("%d", &num);
            i = 1;
            while (i <= 10) {
                printf("%d x %d = %d\n", num, i, num * i);
                i++;
            }
        } else if (choice == 0) {
            printf("Program exited.\n");
        } else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}
// OUTPUT
// Press 1 to print multiplication table
// Press 0 to exit
// Enter your choice: 1
// Enter a number: 6
// 6 x 1 = 6
// 6 x 2 = 12
// 6 x 3 = 18
// 6 x 4 = 24
// 6 x 5 = 30
// 6 x 6 = 36
// 6 x 7 = 42
// 6 x 8 = 48
// 6 x 9 = 54
// 6 x 10 = 60
// Press 1 to print multiplication table
// Press 0 to exit
// Enter your choice: