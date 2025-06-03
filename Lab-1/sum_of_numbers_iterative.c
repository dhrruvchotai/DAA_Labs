#include <stdio.h>

void main(){
    printf("Enter Number : ");
    int n;
    scanf("%d",&n);
    int i = 1;
    int sum = 0;
    for(i=1;i<=n;i++){
        sum += i;
    }

    printf("Ans is : %d",sum);
}