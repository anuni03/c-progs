#include<stdio.h>
#include<stdlib.h>
 typedef struct Node {
    int data;
    int prior;
    struct Node *next;
}node;
node *head=NULL;
void Enqueue(int dataval,int priority){
     node *newnode=NULL;
    newnode=(node*)malloc(sizeof(node));
    newnode->data=dataval;
    newnode->prior=priority;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }
    else if(newnode->prior<head->prior){
     newnode->next=head;
     head=newnode;
    }
    else{
         node *tmp=head;
        while(tmp->next!=NULL && tmp->next->prior<newnode->prior){
            tmp=tmp->next;
        }
        newnode->next=tmp->next;
        tmp->next=newnode;
          }
}
void Dequeue(){
     node *top=head;
    head=head->next;
    printf("Value to be deleted: %d\n",top->data);
    free(top);
    }
void display(){
     node *tmp=head;
    while(tmp!=NULL)
    {
        printf("%d\n",tmp->data);
        tmp=tmp->next;
    }
    
}
int main(){
    Enqueue(5,3);
    Enqueue(3,1);
    Enqueue(8,7);
    Enqueue(1,2);
    display();
    Dequeue();
    Dequeue();
    Enqueue(3,2);
    Enqueue(3,2);
    display();
    return 0;
}