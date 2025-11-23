#include "listas.h"
#include<stdlib.h>
#include<stdio.h>

typedef struct  _snode SNode;
typedef struct _linked_list LinkedList;

/* Função para criar o nó*/
SNode *SNode_create(int val)
{
    SNode *snode = (SNode*)calloc(1,sizeof(SNode));
    snode->val = val;
    snode->next = NULL;

    return(snode);
}
/* Função para criar a lista*/
LinkedList *LinkedList_create()
{
    LinkedList *L = (LinkedList *) calloc(1,sizeof(LinkedList));
    L->begin= NULL;
}
//Função criada para adicionar um nó no final
//na cauda
void LinkedList_add_last_slow(LinkedList *L, int val)
{
    SNode *q = SNode_create(val);

    //Se a lista estiver vazia.
    if(L->begin == NULL)
    {
        L->begin = q;
    }
    else
    {
        SNode *p = L->begin;

        //Enquanto o p não é o último nó, ou seja,
        //enquanto houver um próximo nó
        //estou aponta para o próximo nó ou para o Nulo
        while(p->next != NULL){
            p = p->next;
        }
        //neste momento, o ponteiro p aponta para
        // o nó final da lista
        
        //corrige o encadeamento, ou seja.
        //faz com que o próximo elemento do atual
        //último nó aponte para o novo ultimo nó
        p ->next = q;
    }
}

/*Função criada para imprimir os elementos da listas*/
void LinkedList_print(const LinkedList *L)
{
    SNode *p = L->begin;

    printf("L -> ");

    //enquanto p nõ chegou ao fim da lista, isto é,
    //enquanto p estiver apontando para um nó da lista
    while(p != NULL)
    {
        printf("%d -> ", p->val);
        p = p->next;
    }
    printf("NULL\n");
}


