#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*left,*right;
};
void printcurrentlevel(struct node*root,int level){
    if(root==NULL)
    return;
    if(level==1){
        printf("%d ",root->data);
        }
    if(level>1){
        printcurrentlevel(root->left,level-1);
        printcurrentlevel(root->right,level-1);
    }
}
int height(struct node*node){
    int lheight,rheight;
    if(node==NULL){
        return 0;
    }
    else{
         lheight=height(node->left);
         rheight=height(node->right);
    }
    if(lheight>rheight)
    return (lheight+1);
    else
    return(rheight+1);
}
void printleveloreder(struct node *root){
    int h=height(root);
    int i;
    for(i=1;i<=h;i++)
    printcurrentlevel(root,i);
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
    printleveloreder(root);
    return 0;
}






