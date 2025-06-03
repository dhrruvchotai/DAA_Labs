#include <stdio.h>

int digits = 0;

int countDigits(int n){
    if(n == 0){
       return digits;
    }
    digits++;
    return countDigits(n/10);
}

void main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    int ans = countDigits(n);
    printf("Total Digits : %d",ans);
}

