#include "listas.h"

int main()
{
   LinkedList *L = LinkedList_create();

    LinkedList_add_last_slow(L, 10);
    LinkedList_print(L);

    LinkedList_add_last_slow(L, 2);
    LinkedList_print(L);

    LinkedList_add_last_slow(L, 4);
    LinkedList_print(L);
    
    LinkedList_add_last_slow(L, 5);
    LinkedList_print(L);
    
    LinkedList_add_last_slow(L, 7);
    LinkedList_print(L);

    return(0);
}