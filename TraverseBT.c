#include<stdio.h>
#include<stdlib.h>
//Binary Code Node
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};
//function to create a new Node
struct Node* createNode(int value){
    struct Node *newNode=(struct Node*)malloc (sizeof(struct Node));
    newNode->data=value;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}
//traversal Inorder
void InorderTraversal(struct Node* root){
    if(root!=NULL){
        InorderTraversal(root->left);
        printf("%d",root->data);
        InorderTraversal(root->right);
    }
}
//preorder Traversal
void PreorderTraversal(struct Node* root){
    if(root!=NULL){
        printf("%d",root->data);
        PreorderTraversal(root->left);
        PreorderTraversal(root->right);
    }
}
//postorder Traversal
void PostOrderTraversal(struct Node* root){
    if(root!=NULL){
        PostOrderTraversal(root->left);
        PostOrderTraversal(root->right);
        printf("%d",root->data);

    }
}
