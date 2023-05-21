#ifndef PILHA_H
#define PILHA_H

typedef struct{
    int topo;
    int size;
    int *item;
}Pilha;

void create (Pilha *p, int n);
void isEmpty (Pilha *p);
void isFull (Pilha *p);
void add (Pilha *p, int x);
void size (Pilha *p);
void top (Pilha *p);
void bottom (Pilha *p);
int find(Pilha *p, int a);
void clear (Pilha *p);
int pop (Pilha *p);

#endif
