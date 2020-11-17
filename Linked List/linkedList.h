#include <stdlib.h>
struct NODE{
    int data;
    struct NODE* Next;
};
typedef struct NODE Node;
typedef struct{
    Node *Head;
    Node *Tail;
    int Size;
}List;
void makeNullList(List *L);                             //* hàm tạo danh sách rỗng
void displayList(List L);                               //* hàm hiện thị danh sách
Node *createNode(int data);                             //* tạo một node với phần tử 
void insertList_Frist(Node *newNode,List *L);           //* thêm một node vào đầu danh sách
void insertList_End(Node *newNode,List *L);             //* thêm một node vào cuối danh sách
void insertList_byPos(int p,Node *newNode,List *L);     //* hàm chèn một node vào vị trí p trong danh sách
void inputList(int n,List *L);                          //* hàm thêm n node vào trong danh sách
void makeNullList(List *L){
    L->Head = NULL;
    L->Tail = NULL;
    L->Size = 0;
}
void displayList(List L){
    Node *temp = L.Head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->Next;
    }
    free(temp);
    printf("Size = %d",L.Size);
    printf("\n");
}
Node *createNode(int x){
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->data = x;
    newnode->Next = NULL;
    return newnode;
}
void insertList_Frist(Node *newNode,List *L){
    if(L->Head == NULL){
        L->Head = newNode;
        L->Tail = newNode;
    }
    else{
        newNode->Next = L->Head;
        L->Head = newNode;
    }
    L->Size++;
}
void insertList_End(Node *newNode,List *L){
    if(L->Head == NULL){
        L->Head = newNode;
        L->Tail = newNode;
    }
    else{
        L->Tail->Next = newNode;
        L->Tail=newNode;
        newNode->Next = NULL;
    }
    L->Size++;
}
void insertList_byPos(int p,Node *newNode,List *L){
    if(p < 1 || L->Head == NULL){
        insertList_Frist(newNode,L);
    }
    else if(p >= L->Size){
        insertList_End(newNode,L);
    }
    else{
        Node *temp = L->Head;
        int i = 0;
        while(temp != NULL){
            if(p - 1 == i){
                newNode->Next = temp->Next;
                temp->Next = newNode;
                L->Size++;
                return;
            }
            i++;
            temp = temp->Next;
        }
    }
}
void inputList(int n,List *L){
    int x;
    Node *temp;
    for (int i = 0; i < n; i++){
        scanf("%d",&x);
        temp = createNode(x);
        insertList_byPos(i,temp,L);
    }
}