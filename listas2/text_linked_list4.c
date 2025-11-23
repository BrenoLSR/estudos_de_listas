#include "listas.h"

int main()
{
   LinkedList *L_slow = LinkedList_create();

    printf("Começou o teste lento.\n");
    for(int i = 0; i < 200000; i++)
    {
        LinkedList_add_last_slow(L_slow, i);
    }
    printf("Terminou o teste lento.\n");


    printf("Começou o teste rápido.\n");
    LinkedList *L_fast = LinkedList_create();

    for(int i = 0; i < 200000; i++)
    {
        LinkedList_add_last_fast(L_fast, i);
    }
    printf("Terminou o teste Rápido.\n");

    return(0);
}