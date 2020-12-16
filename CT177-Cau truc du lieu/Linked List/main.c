#include <stdio.h>
#include "./Library/linkedList.h"
#include "./Library/sortList.h"
#include "./Library/searchList.h"
int main(int argc, char const *argv[]){
    List L;
    makeNullList(&L);
    inputList(5,&L);
    insertionSort(&L);
    displayList(L);
    return 0;
}
