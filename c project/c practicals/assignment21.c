#include <stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter Numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    if (num1>num2 && num1>num3){
        printf("%d number is greater",num1);
    }
        else if (num2>num1 && num2>num3){
         printf("%d number is greater",num2);
        }
        else if (num3>num1 && num3>num2){
            printf("%d number is greater",num3);
    }
    else {
        printf("Numbers are equal");
    }
    return 0;
}
//OUTPUT
// Enter Numbers: 67
// 78
// 56
// 78 number is greater