#include <stdio.h>

void main(){
    int x,y;
    printf("Enter x and y: ");
    scanf("%d %d",&x,&y);
    int i = 0;
    int ans = 1;
    for(i = 0;i<y;i++){
        ans *= x;
    }
    printf("ans is : %d",ans);
}