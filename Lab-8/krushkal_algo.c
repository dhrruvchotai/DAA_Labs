#include <stdio.h>
#include <stdlib.h>
#define V 4
#define E 6

struct Edge
{
    int source;
    int dest;
    int weight;
};

struct Edge edges[] = {
    {0, 1, 2}, {1, 2, 1}, {2, 3, 4}, {3, 0, 10}, {1, 3, 8}, {0, 2, 5}};

int parent[V];
struct Edge mst[V - 1];
int mstIndex = 0;


int comp(struct Edge* a, struct Edge* b)
{
    return a->weight - b->weight;
}

int findParent(int parent[],int index){
    //Normal Without Path Compression
    // if(parent[index] == index){
    //     return index;
    // }
    // findParent(parent,parent[index]);

    //With Path Compression
    if(parent[index] != index){
        parent[index] = findParent(parent,parent[index]);
    }
    return parent[index];
}

void unionSet(int ucomp, int vcomp){
    parent[ucomp] = vcomp;
}

void main()
{   
    int totalWeight = 0;

    for (int i = 0; i < V; i++)
    {
        parent[i] = i;
    }

    qsort(edges, sizeof(edges) / sizeof(edges[0]), sizeof(struct Edge), comp);

    for (int i = 0; i < E; i++)
    {
        int ucomp = findParent(parent,edges[i].source);
        int vcomp = findParent(parent,edges[i].dest);

        if(ucomp != vcomp){
            totalWeight += edges[i].weight;
            unionSet(ucomp,vcomp);
            mst[mstIndex++] = edges[i];
        }
    }

    printf("Total Weight Is : %d",totalWeight);

}