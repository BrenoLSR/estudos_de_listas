#include "listas.h"

//FUNCAO PARA INSERCAO DE ITEM
void insereFim(Item* cabeca, int valor)
{
    //CRIA UM PONTEIRO PARA NOVO ITEM E ALOCA DINAMICAMENTE
    Item *novo = (Item *)malloc(sizeof(Item));

    //INICIALIZA O NOVO ITEM
    novo ->prox = NULL; // SE TORNA O ULTIMO ITEM DA LISTA
    novo->valor = valor; // conteudo do item

    printf("Item de valor %3d alocado no endereco: %p\n", novo->valor, (void*)novo);

    //vare alista do comeco para chegar na ultima posicao
    Item *atual = cabeca;
    while (atual->prox != NULL)
    {
        atual = atual->prox;
    }

    //chegando na ultima posicao, coloca o ponteiro pro novo
    atual->prox = novo;
}

//funcao para imprimir os elementos
void imprime(Item* cabeca)
{
    //este item apota para o item atual sendo impreso
    //como o item do inicio eh a cabeca, a impressao comeca no proximo intem
    Item *atual = cabeca->prox;

    //laco que executa até o ultimo item
    int i = 0;
    while (atual != NULL)
    {
        printf("VALOR DO ITEM: %3d\n", atual->valor);
        i++;
        //faz o atual mover para o proximo item
        atual = atual->prox;
    }

    printf("Total de item na lista: %d\n", i);
}

void libera(Item *cabeca)
{
    //ponteiro para o inicio da lista
    Item *atual = cabeca->prox;

    //ponteiro para o item a ser liberado
    Item *liberado;

    //parte do inicio da lista, eliminando todos os itens 
    while (atual != NULL)
    {
        //O LIBERADO RECEBE O ENDERECO DO ATUAL A SER LIBERADO
        liberado = atual;

        //o atual recebe o endereco do proximo a ser liberado
        atual = atual->prox;

        printf("Liberando o item de valor %3d na posicao %p\n",
               liberado->valor, (void*)liberado);

        //libera o atual
        free(liberado);
    }
}
