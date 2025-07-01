#include <stdio.h>
#include <time.h>


int linearSearch(int n, int element, int arr[]){
    int i = 0;
    for(i=0;i<n;i++){
        if(arr[i] == element){
            printf("%d element found at %d index.\n",element,i);
            return i;
        }
    }
    printf("element %d not found!\n",element);
    return -1;
}

void main(){
    int n,i,element = 1000000;
    printf("Enter Number of Elements : ");  
    scanf("%d",&n);

    FILE *file;
    clock_t start,end;
    double cpu_time_used;
    int arr[n];

    file = fopen("worst_case.txt","r");

    for(i=0;i<n;i++){
        fscanf(file,"%d",&arr[i]);
    }

    start = clock();
    linearSearch(n,element,arr);
    end = clock();

    cpu_time_used = ((double)(end-start)/CLOCKS_PER_SEC);
    printf("Linear Search For %d Taken %f Time.",element,cpu_time_used);
}