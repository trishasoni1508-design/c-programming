#include <stdio.h>
int main() {
    int attendance, totalPresent = 0;
    int i;
    for(i = 1; i <= 30; i++) {
        printf("Day %d (1=Present,0=Absent): ", i);
        scanf("%d", &attendance);
        if(attendance == 1) {
            totalPresent++; 
        }
    }
    printf("\nTotal present days = %d\n", totalPresent);
    return 0;
}
//Day 1 (1=Present,0=Absent): 1
//Day 2 (1=Present,0=Absent): 1
//Day 3 (1=Present,0=Absent): 1
//Day 4 (1=Present,0=Absent): 1
//Day 5 (1=Present,0=Absent): 1
//Day 6 (1=Present,0=Absent): 1
//Day 7 (1=Present,0=Absent): 1
//Day 8 (1=Present,0=Absent): 1
//Day 9 (1=Present,0=Absent): 1
//Day 10 (1=Present,0=Absent): 1
//Day 11 (1=Present,0=Absent): 1
//Day 12 (1=Present,0=Absent): 1
//Day 13 (1=Present,0=Absent): 1
//Day 14 (1=Present,0=Absent): 1
//Day 15 (1=Present,0=Absent): 1
//Day 16 (1=Present,0=Absent): 1
//Day 17 (1=Present,0=Absent): 0
//Day 18 (1=Present,0=Absent): 0
//Day 19 (1=Present,0=Absent): 0
//Day 20 (1=Present,0=Absent): 0
//Day 21 (1=Present,0=Absent): 0
//Day 22 (1=Present,0=Absent): 0
//Day 23 (1=Present,0=Absent): 0
//Day 24 (1=Present,0=Absent): 0
//Day 25 (1=Present,0=Absent): 1
//Day 26 (1=Present,0=Absent): 1
//Day 27 (1=Present,0=Absent): 1
//Day 28 (1=Present,0=Absent): 1
//Day 29 (1=Present,0=Absent): 1
//Day 30 (1=Present,0=Absent): 1

//Total present days = 22