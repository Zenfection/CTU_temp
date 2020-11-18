#include <stdio.h>
#include "linkedList.h"
int main(int argc, char const *argv[]){
    List L;
    makeNullList(&L);
    inputList(4,&L);
    optimizeList(&L);
    displayList(L);
    return 0;
}
