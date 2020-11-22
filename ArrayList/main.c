#include <stdio.h>
#include "arrayList.h"
#include "sortList.h"
int main(int argc, char const *argv[]){
    List L;
    L.Elements[0] = 61;
    L.Elements[1] = 97;
    L.Elements[2] = 40;
    L.Elements[3] = 23;
    L.Elements[4] = 25;
    L.Elements[5] = 63;
    L.Elements[6] = 22;
    L.Size = 7;
    shellSort(&L);
    displayList(L);
    return 0;
}
