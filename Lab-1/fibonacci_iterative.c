#include <stdio.h>

void main(){
    int a = 0,b = 1,c=1;

    int n,i=1;
    printf("Enter number of terms : ");
    scanf("%d",&n);

    printf("%d",a);
    for(i = 1;i<n;i++){
        printf("%d",c);
        c = a+b;
        a = b;
        b = c;
    }
}