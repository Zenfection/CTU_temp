#include <stdio.h>
#include "stack.h"
int main(int argc, char const *argv[]){
    Stack S;
    makeNullStack(&S);
    S.Elements[49] = 1;
    S.Elements[48] = 1;
    S.Elements[47] = 1;
    S.Elements[46] = 1;
    S.Elements[45] = 1;
    S.Top-=5;
    // 1 2 5
    optimizeStack(&S);
    displayStack(S);
    return 0;
}