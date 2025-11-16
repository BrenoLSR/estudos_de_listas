#ifndef LISTAS_H
# define LISTAS_H

 #include<stdio.h>
 #include<unistd.h>
 #include<stdlib.h>

struct elementoLista
{
    int valor;
    struct elementoLista *prox;
};
 
typedef struct elementoLista Item;

void insereFim(Item* cabeca, int valor);
void imprime(Item* cabeca);
void libera(Item *cabeca);

#endif