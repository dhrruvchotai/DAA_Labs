#include<stdio.h>
#define V 8

void dfs(int adjMat[V][V],int visited[V], int initialNode){
    visited[initialNode] = 1;
    printf("Visited Node %d \n",initialNode);

    for(int i=0;i<V;i++){
        if(visited[i] != 1 && adjMat[initialNode][i] != 0){
            dfs(adjMat,visited,i);
        }
    }
}

void main(){
    int adjMat[V][V] = {
        {0,1,1,1,1,0,0,0},//0
        {1,0,0,0,0,1,0,0},//1
        {1,0,0,0,0,1,0,0},//2
        {1,0,0,0,0,0,0,1},//3
        {1,0,0,0,0,0,0,1},//4
        {0,1,1,0,0,0,1,0},//5
        {0,0,0,0,0,1,0,1},//6
        {0,0,0,1,1,0,1,0},//7
    };
    int visited[V] = {0};
    dfs(adjMat,visited,0);
}