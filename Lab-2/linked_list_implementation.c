#include <stdio.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node* createNode(int value){
    Node* newNode = (Node*)(malloc(sizeof(Node)));
    newNode -> data = value;
    return newNode;
}

Node* insertAtFirst(Node* first,int value){
    Node* newNode = createNode(value);
    newNode -> next = first;
    first = newNode;
}

Node* insertAtLast(Node* first,int value){
    Node* newNode = createNode(value);
    Node* ptr = first;

    while(first -> next != NULL){
        ptr = ptr -> next;
    }
    ptr -> next = newNode;
}

void display(Node* first){
    Node* ptr;
    while(ptr != NULL){
        printf("%d -> ",ptr -> data);
    }
}