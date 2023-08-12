#include<stdio.h>
#include<conio.h>
struct queue{
    int size;
    int f,r;
    int *arr;
};
int isFull(struct queue *q){
    if(q->r==q->size-1)
    return 1;
    else
    return 0;
}
void enqueue(struct queue *q,int val){
    if(isFull(q)){
        printf("Queue is full");
    }
    else{
        q->r++;
        q->arr[q->r]=val;
    }
}
int isEmpty(struct queue *q){
    if(q->r==q->f)
    return 1;
    else 
    return 0;
}
int dequeue(struct queue *q){
    int a;
    if(isEmpty(q)){
        printf("Queue is Empty");
        return -1;
    }
    else{
        q->f++;
       a= q->arr[q->f];
    }
    return a;
}
void display(struct queue *q){
    while(q->f!=q->r){
        printf("\nElements of queue are: %d ",q->arr[q->f++]);
    }
    printf("%d",q->arr[q->f]);

}
void main(){
    struct queue *q;
    q->size=100;
    q->f=q->r=-1;
    enqueue(q,10);
    enqueue(q,6);
    enqueue(q,7);
    int n=dequeue(q);
    printf("Dequeued element: %d",n);
    display(q);
}


