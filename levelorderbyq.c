#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 100
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *create(int data){
    struct node *root;
    root=(struct node*)malloc(sizeof(struct node));
    root->data=data;
    root->left=NULL;
    root->right=NULL;
    return root;
}
void levelorder(struct node *root){
    struct node *q[MAX];
    struct node *cur;
    int front=0;
    int rear=-1;
    if (root==NULL)
      printf("\nEmpty tree");
    q[++rear]=root;
    while(front<=rear){
        cur=q[front++];
        printf("%d ",cur->data);
        if(cur->left!=NULL)
        q[++rear]=cur->left;
        if(cur->right!=NULL)
        q[++rear]=cur->right;
    }
    printf("\n");
}
int main(){
    struct node *root;
    root=NULL;
    root=create(5);
    root->left=create(3);
    root->right=create(6);
    root->left->left=create(7);
    root->right->right=create(9);
    levelorder(root);
    return 0;
}