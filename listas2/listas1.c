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
