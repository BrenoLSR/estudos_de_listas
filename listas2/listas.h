#ifndef LISTAS_H
# define LISTAS_H

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct _snode{
    int val;
    struct _snode *next;
}SNode;

typedef struct _linked_list
{
    SNode *begin;
    SNode *end;
} LinkedList;

SNode *SNode_create(int val);

LinkedList *LinkedList_create();

bool LinkedList_is_empty(const LinkedList *L);

void LinkedList_add_first(LinkedList *L, int val);

void LinkedList_add_last_slow(LinkedList *L, int val);

void LinkedList_add_last_fast(LinkedList *L, int val);

void LinkedList_print(const LinkedList *L);

#endif