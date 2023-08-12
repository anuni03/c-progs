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
void polyadd(struct node*head1,struct node *head2){
    struct node *ptr1=head1;
    struct node *ptr2=head2;
    struct node *head3=NULL;
    while (ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->expo==ptr2->expo){
            head3=insert(head3,ptr1->coeff,ptr1->expo);
            ptr1=ptr1->link;
            ptr2=ptr2->link;
        }
        else if(ptr1->expo>ptr2->expo) {
            head3=insert(head3,ptr1->coeff,ptr1->expo);
            ptr1=ptr1->link;
             }
             else{
                
            head3=insert(head3,ptr2->coeff,ptr2->expo);
            ptr2=ptr2->link;
             }
    }
    while(ptr1!=NULL){
        head3=insert(head3,ptr1->coeff,ptr1->expo);
        ptr1=ptr1->link;
    }
     while(ptr2!=NULL){
        head3=insert(head3,ptr2->coeff,ptr2->expo);
        ptr2=ptr2->link;
    }
    printf("\nAdded polynmial: \n");
    print(head3);
    
}
int main(){
    struct node *head1=NULL;
    struct node *head2=NULL;
    printf("Enter first polynimial:\n");
    head1=create(head1);
    printf("Enter second polynomial:\n");
    head2=create(head2);
    polyadd(head1,head2);
    return 0;
    }