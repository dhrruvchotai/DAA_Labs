#include <stdio.h>
#define SIZE 5

int front = -1, rear = -1;
int queue[SIZE];

void enqueue(int value){
    if(front == -1){
        front = 0;
    }
    if(rear >= SIZE - 1){
        printf("Queue Overflow!");
    }
    else{
        queue[++rear] = value;
    }
}

int dequeue(){
    if(front == -1 || front > rear){
        printf("Queue Underflow!");
    }
    return queue[front++];
}

void display(){
    int i;
    for(i = front;i<=rear;i++){
        printf("Element at %d is %d \n",i,queue[i]);
    }
}

void main(){
    int element = 0;
    int choice;
    while(1){
        printf("Press Number According To Operation \n Enqueue : 1 \n Dequeue : 2 \n Display : 3 \n Exit : 4 \n ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter value to enqueue : ");
            scanf("%d",&element);
            enqueue(element);
            break;
        case 2:
            printf("%d removed from the Stack!!",dequeue());
            break;
        case 3:
           display();
           break;
        case 4:
            return;
        default:
            printf("Enter Valid Number To Perform Operation!");
            break;
        }
    }
}