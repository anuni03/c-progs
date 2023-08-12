#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    float coeff;
    int expo;
    struct node *link;
};
struct node *insert(struct node *head,int co,int exp ){
    struct node *temp,*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->coeff=co;
    newnode->expo=exp;
    newnode->link=NULL;
    if(head == NULL || exp>head->expo){
        newnode->link=head;
        head=newnode;
    }
    else{
        temp=head;
        while(temp->link!=NULL && temp->link->expo>exp)
        temp=temp->link;
        newnode->link=temp->link;
        temp->link=newnode;
    }
    return head;

    }

struct node *create(struct node *head){
    int n,i,exp;
    float co;
    printf("\nEnter number of terms ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the coefficient of term %d: ",(i+1));
        scanf("%f",&co);
        printf("Enter the exponent of %d term",(i+1));
         scanf("%d",&exp);
        head = insert(head,co,exp);

    }
    return head;
}
void print(struct node *head){
    if(head==NULL){
        printf("\n NO Polynomial");
    }
    else{
        struct node *temp=head;
        while(temp!=NULL){
            printf("%.1fx^%d ",temp->coeff,temp->expo);
            temp=temp->link;
            if(temp!=NULL)
            printf("+");
            else
            printf("\n");
        }
    }
}
int main(){
    struct node *head=NULL;
    printf("Enter polynomial");
    head=create(head);
    print(head);
    return 0;
}