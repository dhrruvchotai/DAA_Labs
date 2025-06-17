#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node* createNode(int value){
    Node* newNode = (Node*)(malloc(sizeof(Node)));
    newNode -> data = value;
    newNode -> next = NULL;
    return newNode;
}

Node* insertAtFirst(Node* first,int value){
    Node* newNode = createNode(value);
    newNode -> next = first;
    first = newNode;
    return first;
}

void insertAtLast(Node* first,int value){
    Node* newNode = createNode(value);
    Node* ptr = first;
    while(ptr -> next != NULL){
        ptr = ptr -> next;
    }

    ptr -> next = newNode;
}

Node* deleteFirst(Node* first){
    first = first -> next;
    return first;
}

void deleteLast(Node* first){
    Node* ptr = first;
    while(ptr -> next != NULL){
        ptr = ptr -> next;
    }
    ptr -> next = NULL;
}

void display(Node* first){
    Node* ptr = first;
    while(ptr != NULL){
        printf("%d -> ",ptr -> data);
        ptr = ptr -> next;
    }
}

void main(){
    Node* first = createNode(30);
    // printf("%d",first -> data);
    first = insertAtFirst(first,20);
    // printf("%d",first -> data);
    first = insertAtFirst(first,10);
    insertAtLast(first,40);
    // printf("%d",first -> data);
    first = deleteFirst(first);
    deleteLast(first);
    display(first);
}