#include <stdio.h>
#include <stdlib.h>

struct Obj{
    int value;
    int weight;
};

int compByValues(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int compByWeights(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}
int compByRatio(const void *a, const void *b) {
    struct Obj *objA = (struct Obj *)a;
    struct Obj *objB = (struct Obj *)b;

    float r1 = (float)objA->value / objA->weight;
    float r2 = (float)objB->value / objB->weight;

    if (r1 < r2) return 1;   // descending order
    if (r1 > r2) return -1;
    return 0;
}

void main(){
    int values[] = {12,32,40,30,50};
    int weights[] = {4,8,2,6,1};
    int n = sizeof(values)/sizeof(values[0]);
    struct Obj arr[n];
    int totalWeight = 50;
    int currWeight = 0;
    int totalValue = 0;
    int i=0;
    float valuesbyweights[n];

    for(int i=0;i<n;i++){
        valuesbyweights[i] = (values[i])/(float)weights[i];
    }

    for(int i=0;i<n;i++){
        arr[i].value = values[i];
        arr[i].weight = weights[i];
    }

    qsort(arr,n,sizeof(arr[0]),compByRatio);

    for(int i=0;i<n;i++){
       printf("%d = %d \n",arr[i].value,arr[i].weight);
    }
    
    while (currWeight != totalWeight)
    {   
       if(currWeight + arr[i].weight <= totalWeight){
            totalValue += arr[i].value;
            currWeight += arr[i].weight;
            printf("Curr Weight : %d\n",currWeight);
       }
       else{
            totalValue += ((float)(totalWeight - currWeight)/arr[i].weight)*arr[i].value;
            printf("totalValue : %d",totalValue);
            break;
       }
       i++;
    }
    
    // printf("%d",totalValue);
}