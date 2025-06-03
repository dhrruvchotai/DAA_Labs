#include <Stdio.h>

int sum(int n){
   if(n == 0) return 0;
   return n + sum(n-1);
}

void main(){
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    int ans = sum(n);
    printf("Ans is %d",ans);
}

