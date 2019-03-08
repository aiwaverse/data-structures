#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

TipoPilha* inicializa(void)
{
    return NULL;
}
TipoPilha* PushPilha (TipoPilha *Topo, TipoInfo Dado)
{
    TipoPilha *novo;
//novo elemento
    /*aloca um novo nodo */
    novo = (TipoPilha*) malloc(sizeof(TipoPilha));
    /*insere a informação no novo nodo*/
    novo->dado = Dado;
    /*encadeia o elemento */
    novo->elo = Topo;
    /*retorna novo topo */
    return novo;
}
int PopPilha (TipoPilha **Topo, TipoInfo *Dado)
//retorna 1 se exclui e zero se não exclui
{
    TipoPilha* ptaux;
    if (PilhaVazia(*Topo))
        return 0;
// a pilha está vazia
    else
    {
        *Dado = (*Topo)->dado;
// devolve o valor do topo
        ptaux = *Topo;
//guarda o endereço do topo
        *Topo = (*Topo)->elo;
//o próximo passa a ser o topo
        free(ptaux);
//libera o que estava no topo
        ptaux=NULL;
        return 1;
    }
}

int PilhaVazia (TipoPilha *Topo)
{
    if (Topo==NULL)
        return 1;
// pilha vazia
    else
        return 0;
// pilha tem pelo menos um elemento
}

TipoInfo ConsultaPilha (TipoPilha *Topo)
{
    if (! PilhaVazia(Topo))
        return Topo->dado;
    else
        return NULL;
}

TipoPilha* DestroiPilha (TipoPilha *Topo)
{
    TipoPilha *ptaux;
    while (Topo != NULL)
    {
        ptaux = Topo;
//guarda o endereço do topo
        Topo = Topo->elo;
//o próximo passa a ser o topo
        free(ptaux);
//libera o que estava no topo
    }
    return NULL;
}
