#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *Left;
    struct Node *Right;
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
            insertTree(x,&temp->Left);
        }
        else{
            insertTree(x,&temp->Right);
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

Tree getPrevious(int x,Tree root){
    Tree t;
    if(root != NULL){
        getPrevious(x,root->Left);
        t = root;
        if(t->data == x){
            return t;
        }
        getPrevious(x,root->Right);
    }
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
void searchStandFor(Tree *p,Tree *q){
    Tree temp1 = *p;
    Tree temp2 = *q;
    if(temp2->Left != NULL){
        searchStandFor(&temp1,&temp2->Left);
    }
    else{
        temp1->data = temp2->data;
        temp1 = temp2;
        temp2 = temp2->Right;
    }
}
int deleteTree(int x,Tree *root){
    Tree temp = *root;
    if(root == NULL){
        return 0;
    }
    if(temp->data > x){
        return deleteTree(x,&temp->Left);
    }
    if(temp->data < x){
        return deleteTree(x,&temp->Right);
    }
    Tree p = *root;
    if(temp->Left == NULL){
        temp = temp->Right;
    }
    else{
        if(temp->Right == NULL)
            temp = temp->Left;
        else
            searchStandFor(&p,&temp->Right);
    }
    if(p->Right ->Right != NULL){
        p->Right = p->Right->Right;
    }
    else{
        p->Right = NULL;
    }
    return 1;
}