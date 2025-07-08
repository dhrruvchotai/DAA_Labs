#include<stdio.h>

void heapify(int arr[] ,int size, int i){
    int largest = i;
    int left = 2 * i + 1;

}

void heapSort(int arr[], int size){
    for(int i = size / 2 - 1 ; i >= 0 ; i--){
        heapify(arr,size,i);
    }

    for(int i = size - 1 ; i > 0 ; i--){
        heapify(arr,i,0);
    }
}

void main(){
    int arr[] = {7,3,5,7,8,3,2,5};
    heapify(arr,0);
    for(int i = 0;i<8;i++){
        printf("%d ",arr[i]);
    }
}