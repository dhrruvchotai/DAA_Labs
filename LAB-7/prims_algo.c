#include <stdio.h>
#include <limits.h>
#define v 5

void main()
{

    int adj_cost_mat[v][v] = {
        {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0}};

    int visited[v] = {0};
    int total_edges = 0;
    int total_weight = 0;
    int i = 0, j = 0;
     visited[0] = 1;

    while (total_edges < v - 1)
    {
        int x = 0;
        int y = 0;
        int min_weight = INT_MAX;

        for (i = 0; i < v; i++)
        {
            if (visited[i] != 0)
            {
                for (j = 0; j < v; j++)
                {
                    if (visited[j] == 0 && adj_cost_mat[i][j] != 0)
                    {
                        if(adj_cost_mat[i][j] < min_weight){
                            min_weight = adj_cost_mat[i][j];
                            x = i;
                            y = j;
                        }
                    }
                }
            }
        }
        visited[y] = 1;
        total_weight += min_weight;
        total_edges += 1;
        printf("%d -> %d Weight = %d \n",x,y,min_weight);
    }
    printf("Total Weight = %d\n",total_weight);
    printf("Total Edges = %d",total_edges);
}