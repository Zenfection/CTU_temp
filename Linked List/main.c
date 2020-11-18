#include <stdio.h>
#include "linkedList.h"
int main(int argc, char const *argv[]){
    List L;
    makeNullList(&L);
    List L1;
    makeNullList(&L1);
    inputList(4,&L1);
    filter_evenNumber(L1,&L);
    displayList(L);
    return 0;
}
