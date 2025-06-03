#include <stdio.h>

int fib(int n){
    if(n == 0 || n == 1){
       return n;
    }
    return fib(n-1) + fib(n-2);
}

void main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    int ans = fib(n);
    printf("ans is : %d",ans);
}