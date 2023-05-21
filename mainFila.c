#include "fila.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    Fila f;
    create(&f, 3);
    add(&f, 1);
    add(&f, 2);
    add(&f, 3);
    pop(&f);
    size(&f);
    first(&f);
    last(&f);
    find(&f, 2);
    isFull(&f);
    isEmpty(&f);
    clear(&f);

return 0;
}
