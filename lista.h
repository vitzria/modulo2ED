#ifndef LISTA_H
#define LISTA_H
#include <stdbool.h>

typedef struct {
    int maxsize;
    int *dados;
    int size;
} Lista;

void create(Lista *l, int n);
bool add(Lista *l, int a);
bool remover(Lista *l, int a);
void size(Lista *l);
bool isFull(Lista *l);
bool isEmpty(Lista *l);
void clear(Lista *l);

#endif
