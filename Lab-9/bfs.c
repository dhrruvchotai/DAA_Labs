#include <stdio.h>
#define V 8

int q[V];
int front = -1;
int rear = -1;

void enqueue(int element)
{
    if (front == -1)
        front = 0;
    if (rear >= V - 1)
    {
        rear = -1;
        printf("Queue Overflow");
        return;
    }
    q[++rear] = element;
}

int dequeue()
{
    if (front == -1)
        return -1;

    if (front >= V-1)
    {
        printf("Queue Underflow");
        front = -1;
        return -1;
    }
    return q[front++];
}

void printQueue()
{
    for (int i = front; i <= rear; i++)
    {
        printf("%d", q[i]);
    }
}

int isEmpty()
{
    return front == -1;
}

void bfs(int adjMat[V][V], int visited[V], int initialNode){
    visited[initialNode] = 1;
    enqueue(initialNode);
    printf("%d ",initialNode);
    while(!isEmpty()){
        int u = dequeue();
        for(int i=0;i<V;i++){
            if(visited[i] == 0 && adjMat[u][i] == 1){
                enqueue(i);
                printf("%d ", i);
                visited[i] = 1;
            }
        }
    }
}

void main()
{
    int adjMat[V][V] = {
        {0, 1, 1, 1, 1, 0, 0, 0}, // 0
        {1, 0, 0, 0, 0, 1, 0, 0}, // 1
        {1, 0, 0, 0, 0, 1, 0, 0}, // 2
        {1, 0, 0, 0, 0, 0, 0, 1}, // 3
        {1, 0, 0, 0, 0, 0, 0, 1}, // 4
        {0, 1, 1, 0, 0, 0, 1, 0}, // 5
        {0, 0, 0, 0, 0, 1, 0, 1}, // 6
        {0, 0, 0, 1, 1, 0, 1, 0}, // 7
    };
    int visited[V] = {0};
    int initialNode = 0;
    bfs(adjMat,visited,initialNode);
}