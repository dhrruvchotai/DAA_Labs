#include <stdio.h>

#define SIZE 100
int stack[SIZE];
int top = -1;


void push(int value){
    if(top >= SIZE-1){
        printf("Stack Overflow!");
    }
    else{
        stack[++top] = value;
        printf("%d Pushed to the Stack!",value);
    }
}

int pop(){
    if(top <= -1){
        printf("Stack Underflow!");
    }
    return stack[top--];
}

int peep(){
    if(top<=-1){ 
        printf("Stack Underflow!");
    }
    return stack[top];
}

void change(int pos,int newVal){
    if(top-pos+1 <= -1 || pos <= -1){
        printf("Invalid postion!");
        return;
    }
    else{
        stack[top-pos+1] = newVal;
        printf("Value %d changed to : %d",stack[top-pos+1],newVal);
    }
}

void display(){
    int i;
    for(i = top;i>=0;i--){
        printf("Element at %d is %d \n",i,stack[i]);
    }
}

void main(){
    int element = 0;
    int choice;
    while(1){
        printf("Press Number According To Operation \n Push : 1 \n Pop : 2 \n Peep : 3 \n Change : 4 \n Display : 5 \n Exit : 6\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter value to push : ");
            scanf("%d",&element);
            push(element);
            break;
        case 2:
            printf("%d removed from the Stack!!\n",pop());
            break;
        case 3:
            printf("%d is at the top!\n",peep());
            break;
        case 4:
            printf("Enter postion from top to change : ");
            int pos;
            scanf("%d",&pos);
            printf("Enter New Value To Change : ");
            int newVal;
            scanf("%d",&newVal);
            change(pos,newVal);
            break;
        case 5:
            display();
            break;
        case 6:
            return;
        default:
            printf("Enter Valid Number To Perform Operation!\n");
            break;
        }
    }
}