#include <stdio.h>
#define Max_length 50
typedef struct{
    int Elements[Max_length];
    int Top;
}Stack;
void makeNullStack(Stack *S);               //* tạo ngăn xếp rỗng
void displayStack(Stack S);                 //* hiển thị ngăn xếp
void inputStack(int n,Stack *S);            //* thêm n phần tử vào ngăn xếp
void deleleStack_byPos(int p,Stack *S);     //* xoá tại vị trí p trong ngăn xếp
void deleteStack_byID(int x,Stack *S);      //* xoá phần tử x trong ngăn xếp
int locateStack(int x,Stack S);             //* trả về vị trí đầu tiên của x trong ngăn xếp
int memberStack(int x,Stack S);             //* kiểm tra x có trong ngăn xếp
void optimizeStack(Stack *S);                //* tối ưu ngăn xếp (1 2 1 -> 1 2)

void makeNullStack(Stack *S){
    S->Top = Max_length;
}
void displayStack(Stack S){
    for(int i = S.Top ; i < Max_length ; i++){
        printf("%d ",S.Elements[i]);
    }
}
void inputStack(int n,Stack *S){
    for(int i = 0; i < n; i++){
        scanf("%d",&S->Elements[S->Top-1]);
        S->Top--;
    }
}
void deleleStack_byPos(int p,Stack *S){
    for(int i = p; i > S->Top; i--){
        S->Elements[i] = S->Elements[i-1]; 
    }
    S->Top++;
}
void deleteStack_byID(int x,Stack *S){
    for(int i = S->Top ; i < Max_length ; i++){
        if(S->Elements[i] == x){
            deleleStack_byPos(i,S);
        }
    }
}
int locateStack(int x,Stack S){
    for(int i = S.Top ; i < Max_length ; i++){
        if(S.Elements[i] == x){
            return i;
        }
    }
    return -1;
}
int memberStack(int x,Stack S){
    if(locateStack(x,S) != -1){
        return 1;
    }
    return 0;
}
void optimizeStack(Stack *S){
    int i = Max_length - 1;
    int j;
    while(i >= S->Top){
        j = i - 1;
        while (j >= S->Top){
            if(S->Elements[i] == S->Elements[j]){
                deleleStack_byPos(j,S);
            }
            else{
                j--;
            }
        }
        i--;
    }
}