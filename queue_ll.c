#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* front = NULL;
struct Node* rear= NULL;

void enqueue(int value){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    if(newnode==NULL){
        printf("Queue overflow\n");
        return;
    }
    newnode->data = value;
    newnode->next = NULL;
    if(front==NULL){
        front=rear=newnode;
    }
    else{
        rear->next = newnode;
        rear = newnode;
    }
    printf("Inserted %d\n",value);
}
void dequeue(){
    if(front==NULL){
        printf("Queue underflow\n");
        return;
    }
    struct Node*temp = front;
    printf("Deleted element: %d",front->data);
    front=front->next;
    if(front==NULL){
        rear=NULL;
    }
    free(temp);
}
void display(){
    if(front==NULL){
        printf("Queue is empty ");
        return;
    
    }
    struct Node*temp=front;
    printf("Queue elements:");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }printf("\n");
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
}
