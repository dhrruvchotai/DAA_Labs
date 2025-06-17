#include <stdio.h>
#include <stdlib.h>

void main(){
    int i;
    FILE* file;

    file = fopen("best_case.txt","w");
    for(i=0;i<100000;i++){
        fprintf(file,"%d ",i);
    }
    fclose(file);

    file = fopen("worst_case.txt","w");
    for(i = 100000;i>0;i--){
        fprintf(file,"%d ",i);
    }
    fclose(file);

    file = fopen("avg_case.txt","w");
    for(i=0;i<100000;i++){
        fprintf(file,"%d ",rand() % 100000);
    }
    fclose(file);

}