#include<stdio.h>
#include<conio.h>
#define SIZE 10
int stack[SIZE],top=-1;
void push(int val){
    if(top == SIZE-1)
      printf("\nStack is Full!!! Insertion is not possible!!!");
   else{
      top++;
      stack[top] = val;
      printf("\nInsertion success!!!");
   }
}
void pop(){
   if(top == -1)
      printf("\nStack is Empty!!! Deletion is not possible!!!");
   else{
      printf("\nDeleted : %d",stack[top]);
      top--;
   }
}
void isEmpty(){
    if(top==-1)
    printf("\nEmpty Stack");
}
void peek(){
    printf("Popped element:%d ",stack[top]);
}
void main(){
    push(5);
    push(7);
    push(2);
    push(1);
    peek();
    pop();
    pop();
    pop();
    pop();
    isEmpty();
}
