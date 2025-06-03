#include <stdio.h>

void main(){
    printf("Enter number : ");
    int n;
    scanf("%d",&n);
    int digits = 0;

    while(n != 0){
        digits += 1;
        n /= 10;
    }

    printf("Number of digits : %d",digits);
}