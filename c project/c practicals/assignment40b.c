//Write a C program that displays a menu asking the user to print a multiplication table or exit.
//If the user presses 1, the program should take a number and display its table from 1 to 10; 
//if the user presses 0, the program should exit.
//(a) Using While.
//(b) Using Do While.
#include <stdio.h>1
int main() {
    int choice, num, i;
    do {
        printf("\nPress 1 to print multiplication table");
        printf("\nPress 0 to exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Enter a number: ");
            scanf("%d", &num);
            i = 1;
            do {
                printf("%d x %d = %d\n", num, i, num * i);
                i++;
            } while (i <= 10);
        } else if (choice == 0) {
            printf("Program exited.\n");
        } else {
            printf("Invalid choice!\n");
        }
    } while (choice != 0);
    return 0;
}
// OUTPUT
// Press 1 to print multiplication table
// Press 0 to exit
// Enter your choice: 1
// Enter a number: 8
// 8 x 1 = 8
// 8 x 2 = 16
// 8 x 3 = 24
// 8 x 4 = 32
// 8 x 5 = 40
// 8 x 6 = 48
// 8 x 7 = 56
// 8 x 8 = 64
// 8 x 9 = 72
// 8 x 10 = 80

// Press 1 to print multiplication table
// Press 0 to exit
//Enter your choice: