#include <stdio.h>
#include "stdlib.h"
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};
typedef struct Node *Tree;

void makeNullTree(Tree *root);              //* tạo rỗng Tree
void insertTree(int x,Tree *root);          //* chèn node vào Tree
Tree createTree();                          //* tạo Tree
void NLR(Tree root);                        //* duyệt tiền tự
void LNR(Tree root);                        //* duyệt trung tự
void LRN(Tree root);                        //* duyệt hậu tự
void makeNullTree(Tree *root){
    (*root) = NULL;
}
void insertTree(int x,Tree *root){
    Tree temp = *root;
    if(temp == NULL){
        temp = malloc(sizeof(Tree));
        temp->data = x;
        temp->left = NULL;
        temp->right = NULL;
        *root = temp;
    }
    else{
        if(temp->data == x){
            return;
        }
        else if(temp->data > x){
            insertTree(x,&temp->left);
        }
        else{
            insertTree(x,&temp->right);
        }
    }
}
Tree createTree(){
    Tree root;
    int n;
    scanf("%d",&n);
    makeNullTree(&root);
    int x;
    for (int i = 0; i < n; i++){
        scanf("%d",&x);
        insertTree(x,&root);
    }
    return root;
}
void NLR(Tree root){
    if(root != NULL){
        printf("%d ",root->data);
        NLR(root->left);
        NLR(root->right);
    }
}
void LNR(Tree root){
    if(root != NULL){
        LNR(root->left);
        printf("%d ",root->data);
        LNR(root->right);
    }
}
void LRN(Tree root){
    if(root != NULL){
        LRN(root->left);
        LRN(root->right);
        printf("%d ",root->data);
    }
}
