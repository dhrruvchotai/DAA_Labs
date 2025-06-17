#include <stdio.h>

void main(){
    int n,i,j,key;
    printf("Enter Size of arr : ");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        printf("Enter arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }

    for(int i=1;i<n;i++){
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

    printf("Sorted array is : \n");
    for(int i=0;i<n;i++){
        printf("arr[%d] is %d \n",i,arr[i]);
    }
}