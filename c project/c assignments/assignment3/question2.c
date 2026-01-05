#include <stdio.h>

int main() {
    int i, j;

    // Loop through rows
    for (i = 0; i < 5; i++) {
        // Print T
        for (j = 0; j < 5; j++) {
            if (i == 0 || j == 2) printf("*");
            else printf(" ");
        }
        printf("  "); // space between letters

        // Print R
        for (j = 0; j < 5; j++) {
            if (j == 0) printf("*");
            else if ((i == 0 || i == 2) && j < 4) printf("*");
            else if (j == 4 && i == 1) printf("*");
            else if (i - j == 1 && i > 1) printf("*");
            else printf(" ");
        }
        printf("  ");

        // Print I
        for (j = 0; j < 5; j++) {
            if (i == 0 || i == 4 || j == 2) printf("*");
            else printf(" ");
        }
        printf("  ");

        // Print S
        for (j = 0; j < 5; j++) {
            if (i == 0 || i == 2 || i == 4) printf("*");
            else if (i == 1 && j == 0) printf("*");
            else if (i == 3 && j == 4) printf("*");
            else printf(" ");
        }
        printf("  ");

        // Print H
        for (j = 0; j < 5; j++) {
            if (j == 0 || j == 4 || i == 2) printf("*");
            else printf(" ");
        }
        printf("  ");

        // Print A
        for (j = 0; j < 5; j++) {
            if ((i == 0 && j > 0 && j < 4) || (i == 2) || (j == 0 && i > 0) || (j == 4 && i > 0))
                printf("*");
            else printf(" ");
        }

        printf("\n"); // next row
    }

    return 0;
}/*
*****  ****   *****  *****  *   *   *** 
  *    *   *    *    *      *   *  *   *
  *    ****     *    *****  *****  *****
  *    * *      *        *  *   *  *   *
  *    *  *   *****  *****  *   *  *   *
  */
