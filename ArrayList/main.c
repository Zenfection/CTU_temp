#include <stdio.h>
#include "arraylist.h"
int main(int argc, char const *argv[]){
    List L;
    makeNullList(&L);
    L.Elements[0] = 1; 
    L.Elements[1] = 1; 
    L.Elements[2] = 1; 
    L.Elements[3] = 1; 
    L.Elements[4] = 2;
    L.Size = 5;
    optimizeList(&L);
    displayList(L); 
    return 0;
}
