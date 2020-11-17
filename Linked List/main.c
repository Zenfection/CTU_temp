#include <stdio.h>
#include "linkedList.h"
int main(int argc, char const *argv[]){
    List L;
    makeNullList(&L);
    inputList(3,&L);
    deleteList_byPos(1,&L);
    displayList(L);
    return 0;
}
