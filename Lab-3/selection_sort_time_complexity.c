#include <stdio.h>
#include <time.h>

void selectionSort(int n, int arr[])
{
    int i = 0,j = 0;

    for (i = 0; i < n; i++)
    {
        int minIndex = i;

        for (j = i; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
    
}
void main(){
    int i=0;
    FILE* file;
    clock_t start,end;
    double cpu_time_used;
    int n = 100000;
    int arr[n];

    //worst case
    file = fopen("worst_case.txt","r");
    for(i=0;i<n;i++){
        fscanf(file,"%d",&arr[i]);
    }
    fclose(file);

    start = clock();
    selectionSort(n,arr);
    end = clock();
    cpu_time_used = ((double)(end - start)/CLOCKS_PER_SEC);
    printf("Time taken to Sot Array Using Selection Sort in Worst Case is : %f",cpu_time_used);
}