#include <stdio.h>

void main(){
    printf("Enter Number : ");
    int n;
    scanf("%d",&n);
    int i = 1;
    int fact = 1;
    for(i=1;i<=n;i++){
        fact *= i;
    }

    printf("factorial is : %d",fact);
}