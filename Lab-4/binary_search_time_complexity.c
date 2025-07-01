#include <stdio.h>
#include <time.h>

int binarySearch(int left, int right, int element, int arr[])
{
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == element){
            printf("%d found at %d index.\n",element,mid);
            return mid;
        }
        else if (arr[mid] > element)
        {
            right = mid - 1;
        }
        else if(arr[mid] < element){
            left = mid+1;
        }
    }
    printf("%d not found!\n",element);
    return -1;
}

int binarySearchRecursive(int left, int right, int element, int arr[]){
    int mid = (left+right)/2;
    if(arr[mid] == element){
        printf("%d found at %d\n",element,mid);
        return mid;
    }
    else if(arr[mid] > element){
        binarySearchRecursive(left,mid-1,element,arr);
    }
    else if(arr[mid] < element){
        binarySearchRecursive(mid+1,right,element,arr);
    }
    return -1;
}

void main(){
    int n,i,element = 1000;
    printf("Enter Number of Elements : ");  
    scanf("%d",&n);

    FILE *file;
    clock_t start,end;
    double cpu_time_used;
    int arr[n];

    file = fopen("best_case.txt","r");


    for(i=0;i<n;i++){
        fscanf(file,"%d",&arr[i]);
    }

    printf("Arr length is %d \n",sizeof(arr)/sizeof(arr[0]));

    start = clock();
    binarySearchRecursive(0,n-1,element,arr);
    end = clock();

    cpu_time_used = ((double)(end-start)/CLOCKS_PER_SEC);
    printf("Binary search For %d Taken %f Time.",element,cpu_time_used);
}