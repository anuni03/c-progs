#include<stdio.h>
#include<conio.h>
#define SIZE 10
int queue[SIZE];
int front=-1;
int rear=-1;
void enqueue(int val){
    if(rear==SIZE-1){
        printf("\nQueue full");
    }
    else{
        queue[++rear]=val;
    }
}
void dequeue(){
    int a;
    if(front==rear){
        printf("\nQueue Empty");
    }
    else{
  a=queue[++front];
  printf("Dequeued element: %d",a);


    }
}
void size(){
    printf("\nSize of queue %d\n",(rear-front+1));
}
void peek(){
    printf("\npeek elenent %d ",queue[front]);
}
void disp(){
    for(int i=front;i<=rear;i++){
        printf(" %d ",queue[i]);
    }
}
void main(){
    enqueue(5);
    enqueue(7);
    enqueue(10);
    enqueue(3);
    enqueue(8);
    dequeue();
    peek();
    size();
    disp();
}