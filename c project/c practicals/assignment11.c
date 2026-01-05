#include <stdio.h>
int main(){
    int units;
    float bill,surcharge,total;
    printf("Enter your units: ");
    scanf("%d",&units);
    if (units<=100){
       bill=units*3;
    }
    else if (units>100 && units<=200){
        bill=units*4;
    }
    else {
        bill=units*5;
    }
    if (bill>1000){
     surcharge=bill*0.1;
     total=bill+surcharge;
    }
    else{
        total = bill;
    }
     printf("Electricity bill =%.2f\n",total);
    return 0;
}
// OUTPUT
// Enter your units: 4
// Electricity bill =12.00