#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void create(Fila *f, int n){
    f->dados=malloc(n*sizeof(int));
    f->maxsize=n;
    f->fim=-1;
    f->comeco=0;
}

void add(Fila *f, int a){
    if (f->fim == f->maxsize-1) {
        printf("\nFila cheia, impossivel adicionar um elemento");
        return 0;
    }
    else{
        f->fim++;
        f->dados[f->fim] = a;
        return 1;
    }
}

int pop(Fila *f){
    int elemento, i;
    if (f->fim == -1){
        printf("\nFila vazia, impossivel remover um elemento");
        return 0;
    }
    else{
        elemento = f->dados[f->comeco];
        for (i=0;i<f->fim;i++){
            f->dados[i] = f->dados[i + 1];
        }
        f->fim--;
        return elemento;
    }
}

void size(Fila *f){
    printf("\nTamanho da fila: %d", f->fim + 1);
}

void first(Fila *f){
    printf("\nPrimeiro elemento da fila: %d", f->dados[f->comeco]);
}

void last(Fila *f){
    printf("\nUltimo elemento da fila: %d", f->dados[f->fim]);
}

int find(Fila *f, int a){
    for (int i=0;i<=f->fim;i++){
        if (f->dados[i] == a){
            printf("\nO elemento %d esta na posicao %d", a, i);
            return i;
        }
    }
    return -1;
}

void isFull(Fila *f){
    if (f->fim == f->maxsize-1){
        printf("\nA fila esta cheia");
    }
    else{
        printf("\nA fila nao esta cheia");
    }
}

void isEmpty(Fila *f){
    if (f->fim == -1){
        printf("\nA fila esta vazia");
    } else{
        printf("\nA fila nao esta vazia");
    }
}

void clear(Fila *f){
    f->fim=-1;
    f->comeco=0;
}
