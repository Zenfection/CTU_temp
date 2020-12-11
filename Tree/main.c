#include <stdio.h>
#include "treeBST.h"
int main(int argc, char const *argv[]){
    Tree T;
    makeNullTree(&T);
    insertTree(27,&T);
    insertTree(12,&T);
    insertTree(40,&T);
    insertTree(4,&T);
    insertTree(20,&T);
    insertTree(34,&T);
    insertTree(30,&T); 
    insertTree(50,&T); 
    insertTree(60,&T);
    NLR(T);
    printf("\n");
    LRN(T);
    deleteTree(12,&T);
    
    return 0;
}

