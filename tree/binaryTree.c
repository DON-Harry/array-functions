#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left, *right;
};

struct node *creat(){
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    printf("%p\n", newNode);
    int r;
    printf("Enter -1 to exit\n");

    scanf("%d", &r);
    if(r == -1) return 0;
    else{
        newNode->data = r;
        printf("Enter left value\n");
        newNode->left = creat();
        printf("Enter right value\n");
        newNode->right = creat();
    }

    return newNode;

}

void preorder(struct node *root){
    if(root == 0) return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);

}

void inorder(struct node *root){
    if (root == 0) return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void postorder(struct node *root){
    // printf("\nPostorder\n");
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}


void main(){
    struct node *root = creat();
    printf("%p\n", root);
    printf("Preorder\n");
    preorder(root);
    printf("\nInorder\n");
    inorder(root);
    printf("\nPostorder\n");
    postorder(root);
    
}