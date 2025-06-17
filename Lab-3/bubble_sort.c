#include <stdio.h>
void main(){
    int n,i,j,swapped;
    printf("Enter Size of arr : ");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        printf("Enter arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        swapped = 0;
        for(int j=1;j<n-i;j++){
            if(arr[j-1] > arr[j]){
               int temp = arr[j-1];
               arr[j-1] = arr[j];
               arr[j] = temp;
            }
        }
    }
    
    printf("Sorted array is : ");
    for(int i=0;i<n;i++){
        printf("arr[%d] is %d \n",i,arr[i]);
    }
}