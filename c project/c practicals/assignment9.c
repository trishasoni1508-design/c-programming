#include <stdio.h>
int main(){
    char ch;
    printf("Enter any single character: ");
    scanf("%c",&ch);
    if (ch>'0' && ch<'9'){
        printf("%c is digit",ch);
    }
    else if (ch>='a' && ch<='z'){
        printf("%c is alphabet",ch);
    }
    else{
        printf("%c is special character",ch);
    }
    return 0;
}
// OUTPUT
// Enter any single character: @
// @ is special character