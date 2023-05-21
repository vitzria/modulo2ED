#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct p{
    int topo;
    int size;
    int *item;
};

void create (Pilha *p, int n){
    p->item = (int *)malloc(n * sizeof(int));
    p->size = n;
    p->topo = -1;
}

void isEmpty (Pilha *p){
    if (p->topo == -1){
        printf("\nA pilha esta vazia");
        return 1;
    }
    else{
        printf("\nA pilha nao esta vazia");
        return 0;
    }
}

void isFull (Pilha *p){
    if(p->topo == p->size-1){
        printf("\nA pilha esta cheia");
        return 1;
    }
    else{
        printf("\nA pilha esta vazia");
        return 0;
    }
}

void add (Pilha *p, int x){
    if(isFull==1){
        printf("\nPilha cheia, impossivel inserir um elemento\n");
        return 0;
    }
    else{
        p->topo++;
        p->item[p->topo] = x;
        return 1;
    }
}

void size (Pilha *p){
    printf("\nTamanho da pilha: %d" ,  p->size);
}

void top (Pilha *p){
    printf("\nElemento do topo da pilha: %d" , p->item[p->topo]);
}

void bottom (Pilha *p){
    printf("\nElemento do final da pilha: %d" , p->item[0]);
}

int find(Pilha *p, int a){
    for(int i=0;i<=p->topo;i++){
        if(p->item[i]==a){
            printf("\nO elemento %d esta na posicao %d" , a, i);
        }
    }
return -1;
}

void clear (Pilha *p){
    p->topo = -1;
}

int pop (Pilha *p){
    int aux;
    if(isFull==1){
        printf("\nPilha vazia, impossivel remover um elemento\n");
        return 0;
    }
    else{
        aux = p->item[p->topo];
        p->topo--;
        return aux;
    }
}
