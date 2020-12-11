#include <stdio.h>
#include <stdlib.h>
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

Tree getPrevious(int x,Tree root){
    Tree t;
    if(root != NULL){
        getPrevious(x,root->left);
        t = root;
        if(t->data == x){
            return t;
        }
        getPrevious(x,root->right);
    }
}

Tree searchNode(int x,Tree root){
    if(root != NULL){
        if(root->data == x){
            return root;
        }
        else if(root->data > x)
            return searchNode(x,root->left);
        else
            return searchNode(x,root->right);
    }
    else{
        return NULL;
    }
}
void freeTree(Tree *root){
    Tree temp = *root;
    if(temp == NULL){
        return;
    }
    freeTree(&temp->left);
    freeTree(&temp->right);
    free(temp);
}
void searchStandFor(Tree *p,Tree *q){
    Tree temp1 = *p;
    Tree temp2 = *q;
    if(temp2->left != NULL){
        searchStandFor(&temp1,&temp2->left);
    }
    else{
        temp1->data = temp2->data;
        temp1 = temp2;
        temp2 = temp2->right;
    }
}
int deleteTree(int x,Tree *root){
    Tree temp = *root;
    if(root == NULL){
        return 0;
    }
    if(temp->data > x){
        return deleteTree(x,&temp->left);
    }
    if(temp->data < x){
        return deleteTree(x,&temp->right);
    }
    Tree p = *root;
    if(temp->left == NULL){
        temp = temp->right;
    }
    else{
        if(temp->right == NULL)
            temp = temp->left;
        else
            searchStandFor(&p,&temp->right);
    }
    if(p->right ->right != NULL){
        p->right = p->right->right;
    }
    else{
        p->right = NULL;
    }
    return 1;
}