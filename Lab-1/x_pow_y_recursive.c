#include <stdio.h>

int ans = 1;
int powOfXRaisedToY(int x,int y){
    if(y==0) return ans;
    ans *= x;
    return powOfXRaisedToY(x,y-1);
}

void main(){
    int x,y;
    printf("Enter x and y: ");
    scanf("%d %d",&x,&y);
    int ans = powOfXRaisedToY(x,y);
    printf("ans is : %d",ans);
}