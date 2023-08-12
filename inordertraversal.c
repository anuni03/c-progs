#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*left,*right;
};
void inorder(struct node *root){
    if(root!=NULL){
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
    }
}
struct node *newnode(int data){
    struct node *node=(struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return(node);
}
int main(){
    struct node *root=newnode(1);
    root->left=newnode(4);
    root->right=newnode(5);
    root->left->left=newnode(3);
    root->right->right=newnode(7);
    inorder(root);
    return 0;
}