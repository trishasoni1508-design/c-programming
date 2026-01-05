#include <stdio.h>
int main() {
    int age, count = 0, i;
    for(i = 1; i <= 10; i++) {
        printf("Enter age of employee %d: ", i);
        scanf("%d", &age);
        if(age >= 30) {
            count++; 
        }
    }
    printf("\nEmployees aged 30 or above = %d\n", count);
    return 0;
}
//OUTPUT
// Enter age of employee 1: 24
// Enter age of employee 2: 32
// Enter age of employee 3: 30
// Enter age of employee 4: 25
// Enter age of employee 5: 26
// Enter age of employee 6: 29
// Enter age of employee 7: 34
// Enter age of employee 8: 36
// Enter age of employee 9: 20
// Enter age of employee 10: 30
// Employees aged 30 or above = 5