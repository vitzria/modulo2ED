#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    Pilha p;
    create(&p, 3);
    add(&p, 1);
    add(&p, 2);
    add(&p, 3);
    bottom(&p);
    isEmpty(&p);
    isFull(&p);
    size(&p);
    top(&p);
    find(&p, 2);
    pop(&p);
    clear(&p);
return 0;
}
