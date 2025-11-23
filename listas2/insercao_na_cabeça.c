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
/* Função para inserir um nó na cabeça(head)*/
void LinkedList_add_first(LinkedList *L, int val)
{
    //Para lista vazia.
    if(L->begin == NULL)
    {
        SNode *p = SNode_create(val);
        L->begin = p;
    }
    //para a lista com elementos
    else
    {
        SNode *p = SNode_create(val);
        p->next = L->begin;
        L->begin = p;
    }
}

/* Inserção na cabeça da lista resumida*/
void LinkedList_add_first(LinkedList *L, int val)
{
        SNode *p = SNode_create(val);
        p->next = L->begin;
        L->begin = p;
}

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

