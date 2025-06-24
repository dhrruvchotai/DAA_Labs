#include <stdio.h>

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

    for(i=0;i<n;i++){
        printf("arr[%d] is : %d\n",i,arr[i]);
    }
}

void main()
{
    int n;
    printf("Enter size of arr : ");
    scanf("%d", &n);

    int i, arr[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }
    selectionSort(n,arr);

}