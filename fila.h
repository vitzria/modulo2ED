#ifndef FILA_H
#define FILA_H

typedef struct {
    int fim;
    int *dados;
    int maxsize;
    int comeco;
} Fila;

void create(Fila *f, int n);
void add(Fila *f, int a);
int pop(Fila *f);
void size(Fila *f);
void first(Fila *f);
void last(Fila *f);
int find(Fila *f, int a);
void isFull(Fila *f);
void isEmpty(Fila *f);
void clear(Fila *f);

#endif
