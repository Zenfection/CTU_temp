#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *Left;
    struct Node *Right;
};
typedef struct Node *Tree;

void makeNullTree(Tree *root);              //* tạo rỗng Tree
void insertNode(int x,Tree *root);          //* chèn node vào Tree
Tree createTree();                          //* tạo Tree
void NLR(Tree root);                        //* duyệt tiền tự
void LNR(Tree root);                        //* duyệt trung tự
void LRN(Tree root);                        //* duyệt hậu tự
Tree minNode(Tree root);                    //* node nhỏ nhất trong root
Tree maxNode(Tree root);                    //* node lớn nhất trong root
Tree getPrevious(int x,Tree root);          //* node phía trước khi duyệt trung tự
void searchStandFor(Tree *p,Tree *q);       //*
int deleteNode(int x,Tree *root);           //* xoá 1 node trong root



void makeNullTree(Tree *root){
    (*root) = NULL;
}
void insertNode(int x,Tree *root){
    Tree temp = *root;
    if(temp == NULL){
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->data = x;
        temp->Left = NULL;
        temp->Right = NULL;
        *root = temp;
    }
    else{
        if(temp->data == x){
            return;
        }
        else if(temp->data > x){
            insertNode(x,&temp->Left);
        }
        else{
            insertNode(x,&temp->Right);
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
        insertNode(x,&root);
    }
    return root;
}
void NLR(Tree root){
    if(root != NULL){
        printf("%d ",root->data);
        NLR(root->Left);
        NLR(root->Right);
    }
}
void LNR(Tree root){
    if(root != NULL){
        LNR(root->Left);
        printf("%d ",root->data);
        LNR(root->Right);
    }
}
void LRN(Tree root){
    if(root != NULL){
        LRN(root->Left);
        LRN(root->Right);
        printf("%d ",root->data);
    }
}
Tree minNode(Tree root){
    while (root->Left != NULL){
        root = root->Left;
    }
    return root;
}
Tree maxNode(Tree root){
    while (root->Right != NULL){
        root = root->Right;
    }
    return root;
}
Tree getPrevious(int x,Tree root){
    Tree prevNode = NULL;
    while (root != NULL){
        if(root->data > x){
            root = root->Left;
        }
        else if(root->data < x){
            prevNode = root;
            root = root->Right;
        }
        else if(root->Left == NULL){
            return prevNode;
        }
        else{
            return maxNode(root->Left);
        }
    }
    return NULL;
}

Tree searchNode(int x,Tree root){
    if(root != NULL){
        if(root->data == x){
            return root;
        }
        else if(root->data > x)
            return searchNode(x,root->Left);
        else
            return searchNode(x,root->Right);
    }
    else{
        return NULL;
    }
}
void searchStandFor(Tree *node1,Tree *node2){
    if((*node2)->Left != NULL){
        searchStandFor(&(*node1),&(*node2)->Left);
    }
    else{
        (*node1)->data = (*node2)->data;
        (*node1) = (*node2);
        (*node2) = (*node2)->Right;
    }
}
int deleteNode(int x,Tree *root){
    Tree temp = *root;
    if(temp == NULL){
        return 0;
    }
    if(temp->data > x){
        return deleteNode(x,&temp->Left);
    }
    else if(temp->data < x){
        return deleteNode(x,&temp->Right);
    }
    else{
        Tree p = *root;
        if(temp->Left == NULL){
            temp = temp->Right;
        }
        else{
            if(temp->Right == NULL){
                temp = temp->Left;
            }
            else{
                searchStandFor(&p,&(*root)->Right);
            }
        }
        p = NULL;
        *root = temp;
    }
    return 1;
}