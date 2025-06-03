#include <Stdio.h>

int fact(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n*fact(n-1);
}

void main(){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int ans = fact(n);
    printf("Factorial is %d",ans);
}

