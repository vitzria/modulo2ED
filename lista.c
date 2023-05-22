#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lista.h"

void create(Lista *l, int n){
    l->dados = (int*)malloc(n*sizeof(int));
    l->size=0;
    l->maxsize=n;
}

bool add(Lista *l, int a){
    if(l->size==l->maxsize){
        printf("\nLista cheia, impossivel adicionar um elemento");
        return false;
    }
    else{
        l->dados[l->size] = a;
        l->size++;
        return true;
    }
}

bool remover(Lista *l, int a){
    int i, j;
    bool find = false;
    for(i=0;i<l->size;i++){
        if(l->dados[i] == a){
            find = true;
            break;
        }
    }
    if(find){
        for(j=i;j<l->size-1;j++){
            l->dados[j]=l->dados[j+1];
        }
        l->size--;
        return true;
    }
    else{
        printf("\nImpossivel remover elemento, elemento nao encontrado");
        return false;
    }
}

void size(Lista *l){
    printf("\nQuantidade de elementos da lista: %d" , l->size);
}

int find(Lista *l, int a){
    for(int i=0;i<l->size;i++){
        printf("\nElemento %d encontrado na posicao %d" , a, i);
        return 1;
    }
return 0;
}

bool isFull(Lista *l){
    if(l->size == l->maxsize){
        printf("\nLista esta cheia");
        return true;
    }
    else{
        printf("\nLista nao esta cheia");
        return false;
    }
}

bool isEmpty(Lista *l){
    if(l->size=0){
        printf("\nLista esta vazia");
        return true;
    }
    else{
        printf("\nLista nao esta vazia");
        return false;
    }
}

void clear(Lista *l){
    l->size=0;
    free(l->dados);
}
