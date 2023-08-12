#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* link;
    };
    struct node *top=0;
  void push(int x)
  {
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=top;
    top=newnode;
  }
  void display(){
    struct node *temp;
    temp=top;
    if(top==0){
        printf("Empty list\n");
   }
   else{
    while(temp!=0){
        printf("%d ",temp->data);
        temp=temp->link;
    }
   }
  }
void peek(){
    if(top==0){
        printf("\nStack is empty");
    }
    else{
        printf("\nTop element is %d\n",top->data);
    }
}
void pop(){
struct node *temp;
    temp=top;
    if(top==0){
        printf("Underflow\n");
    }
    else{
        top=top->link;
        free(temp);
    }
}
void main(){
    push(2);
    push(5);
    push(10);
    display();
    peek();
    pop();
    peek();
    display();
}
