#include<stdio.h>

struct stack{
    int size;
    int top;
    int *arr;
};


int isEmpty(struct stack *ptr){
    if(ptr->top==-1){

    
    
    return 1;
    }
    else{

    
    return 0;
}
}
int isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1){

    
    return 1;
    }
    else{



    return 0;
    }
}
void push(struct stack *sp,int val){
    
    
    
    if(isFull(sp)){
        printf("\n Stack Overflow");
    }
    else{
        sp->top++;
        sp->arr[sp->top]=val;
    }
}
void pop(struct stack *sp){
    if(isEmpty(sp)){
        printf("\n Stack Underflow.");

    }
    else{
        int val=sp->arr[sp->top];
        sp->top=sp->top-1;
        printf("Popped value:%d ",val);
    }

}
void display(struct stack *s){
    while(s->top!=-1){
        printf("\n Elements of stack are: %d",s->arr[s->top--]);
    }
}
void main(){
    
    struct stack *st;
    st->size=10;
    st->top=-1;
    
    push(st,4);
    push(st,6);
    push(st,1);
    push(st,3);
    pop(st);
    display(st);
}
