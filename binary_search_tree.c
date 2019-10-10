#include<stdlib.h>
#include<stdio.h>

struct node{
    int data;
    int tot;
    struct node *left;
    struct node *right;
};

int sum(struct node* root){
    if(root==NULL)
        return 0;
    else
        return root->data + sum(root->left) + sum(root->right);
}

void inorder(struct node* root){
    if(root==NULL)
        return;
    inorder(root->left);
    //Whatever Operation
    printf("Node: %d\n",root->data);
    inorder(root->right);
    return;
}

struct node *newN(int x){
    struct node *t = (struct node *)malloc(sizeof(struct node));
    t->data=x;
    t->left=t->right=NULL;
    return t;
}

struct node* insert(struct node* root,int x){

    if(root==NULL)
        return newN(x);

    if(x<root->data)
        root->left=insert(root->left,x);

    if(x>=root->data)
        root->right=insert(root->right,x);

    return root;
}

struct node* search(struct node* root, int x){
    if(root->data=x)
        return root;

    if(x<root->data)
        return search(root->left,x);
    if(x>=root->data)
        return search(root->right,x);
}

int total(struct node* n){
    if(n->right==NULL & n->left==NULL)
        return 1;
    else
        return 1 + total(n->right) + total(n->left);
}

struct node* del(struct node* n, int x){
     if(n==NULL)
         return n;

     if(n->data<x)
         n->right=del(n->right,x);
     else if(n->data>x)
         n->left=del(n->left,x);

     else{
        if(n->left==NULL){
            struct node *t=n->right;
            free(n);
            return t;
        }
        else if(n->right==NULL){
            struct node *t=n->left;
            free(n);
            return t;
        }
        else{
            struct node* t=n->right;
            while(t->left!=NULL)
                t=t->left;

            n->data=t->data;
            n->right=del(n->right,t->data);
            return n;
        }
    }
    return n;
}

int main(){

    struct node *root=newN(10);
    
    insert(root,7);
    insert(root,15);
    insert(root,3);
    insert(root,8);
    insert(root,11);
    insert(root,17);

    inorder(root);
    root=del(root,17);
    printf("\n");
    inorder(root);
    root=del(root,7);
    printf("\n");
    inorder(root);
    root=del(root,15);
    printf("\n");
    inorder(root);
    root=del(root,3);
    printf("\n");
    inorder(root);
    root=del(root,10);
    printf("\n");
    inorder(root);
    root=del(root,8);
    printf("\n");
    inorder(root);
    root=del(root,11);
    printf("\n");
    inorder(root);

    return 0;
}


