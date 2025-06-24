#include <stdio.h>

void heapify(int arr[], int n)
{
    int maxIndex, i = 0;
    for (i = 0; i < n; i++)
    {
        maxIndex = i;
        if(arr[maxIndex] < arr[2*i+1]){
            maxIndex = 2*i+1;
        }
        if(arr[maxIndex] < arr[2*i+2]){
            maxIndex = 2*i+2;
        }

        if (maxIndex != i)
        {
            int temp = arr[i];
            arr[i] = arr[maxIndex];
            arr[maxIndex] = arr[i];
        }
    }
    for(i=0;i<n;i++){
        printf("arr[%d] is : %d\n",i,arr[i]);
    }
}

void main()
{
    int arr[] = {16, 9, 18, 43, 41, 13, 9, 47, 1, 25};
    int n = sizeof(arr) / sizeof(arr[0]), i = 0;
    heapify(arr,n);
}
