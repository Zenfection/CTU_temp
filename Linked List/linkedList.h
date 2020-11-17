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
void deleteList_byValue(int x,List *L);                 //* hàm xoá node chứa x trong danh sách
void deleteList_byPos(int p,List *L);                   //* hàm xoá node vị trí  p trong danh sách
int Find_Max(List L);                                   //* hàm tìm số nhỏ nhất trong danh sách
int Find_Min(List L);                                   //* hàm tìm số lớn nhất trong danh sách
int Search_Value_List(int x,List L);                  //* hàm tìm vị trí node chứa x
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
int Search_Value_List(int x,List L){
    Node *temp = L.Head;
    int i = 0;
    while (temp != NULL){
        if(temp->data = x){
            free(temp);
            return i;
        }
        else{
            i++;
        }
        temp = temp->Next
    }
    free(temp);
    return -1;
}
void deleteList_byValue(int x,List *L){
    Node *prev = NULL;
    Node *temp = L->Head;
    while (temp != NULL){
        if(temp->data == x){
            if (prev==NULL) {
                L->Head=temp->Next;
            }
            else{
                prev->Next=temp->Next;
            }
            L->Size--;
            return;
        }
        prev = temp;
        temp = temp->Next;
    }  
}
void deleteList_byPos(int p,List *L){
    int i = 0;
    Node *temp = L->Head;
    while (temp != NULL){
        if(i == p){
            deleteList_byValue(temp->data,L);
        }
        i++;
        temp = temp->Next;
    }   
}
int Find_Max(List L){
    Node *temp=L.Head;
    int max=temp->data;
    while (temp!=NULL) {
        if(max<temp->data){
            max=temp->data;
        }
        temp=temp->Next;
    }
    free(temp);
    return max;
}
int Find_Min(List L){
    Node *temp=L.Head;
    int min=temp->data;
    while (temp!=NULL) {
        if(min>temp->data){
            min=temp->data;
        }
        temp=temp->Next;
    }
    free(temp);
    return min;
}