#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lista.h"

int main()
{
    Lista l;
    create(&l, 3);
    add(&l, 1);
    add(&l, 2);
    add(&l, 3);
    remover(&l, 3);
    size(&l);
    isFull(&l);
    isEmpty(&l);
    clear(&l);

return 0;
}
