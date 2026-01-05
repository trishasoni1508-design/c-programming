//Rectangle Pattern
#include <stdio.h>
int main(){
    for(int i = 1;i <= 7;++i){
        for(int b =1;b <= 4;++b){
            printf("* ");
        }
    printf("\n");}
    printf("\n");

//Square Pattern
    for(int i = 1;i <= 4;++i){
        for(int b =1;b <= 4;++b){
            printf("* ");
        }
    printf("\n");}
    printf("\n");

//Right Angle Triangle

    for(int i=1; i<=5 ;i++){
        for(int j=1; j<=i; j++){
            printf("* ");
        }
   printf("\n");}
   printf("\n");

//Reverse Right Angle Triangle
    for(int i=1 ; i<=5 ; i++){
        for(int j=5; j>=i; j--){
            printf("* ");
        }
        printf("\n");
    } printf("\n");

//Central Triangle
  for (int i=1;i<=5;i++){
    for(int j=5;j>=i;j--){
        printf(" ");
    }
   for(int k=1;k<=i;k++){
    printf("* ");
   }printf("\n");}
   return 0;
}
// OUTPUT
// Enter username: admin
// Enter password: 1234
// Login Successful.