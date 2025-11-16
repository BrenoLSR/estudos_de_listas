
#include "listas.h"


 void imprime(Item *cabeca);
 void insereFim(Item* cabeca, int valor);
 void libera(Item* cabeca);

 int main(int argc, char *argv[])
 {
    Item cabeca;
    cabeca.prox = NULL;

    printf("Tamanho do item : %lu bytes\n", sizeof(Item));

    printf("\nInsere itens novos na lista...\n");
    insereFim(&cabeca, 15);
    insereFim(&cabeca, 125);
    insereFim(&cabeca, 155);

    getchar();

    printf("\nImprimindo itens da listas ...\n");
    imprime(&cabeca);

     getchar();

     printf("\nLiberando memoria dos itens da lista..\n");
     libera(&cabeca);

     getchar();
     return(0);
 }