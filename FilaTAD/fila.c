#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

TipoDFila* InicializaFila (TipoDFila *PtDFila)
{
    PtDFila = (TipoDFila*) malloc(sizeof(TipoDFila));
//aloca descritor de fila
    if (PtDFila != NULL)
    {
//testa se conseguiu alocar o descritor
        PtDFila->prim = NULL;
//inicializa ponteiros
        PtDFila->ult = NULL;
    }
    return PtDFila;
}
int FilaVazia(TipoDFila *PtDFila)
{
    if (!PtDFila)
    {
        printf("descritor nao alocado");
        return -1;
    }
    else if (PtDFila->prim == NULL)
        return 1;
    else
        return 0;
}
TipoInfo ConsultaFila (TipoDFila *PtDFila)
{
    if (FilaVazia(PtDFila))
        return 0;
    else
        return PtDFila->prim->dado;
}


int InserirFila(TipoDFila **PtDFila, TipoInfo Dado)
{
    TipoFila *novo;
    if (*PtDFila)
    {
//testa se o descritor foi alocado
        novo = (TipoFila*) malloc (sizeof(TipoFila));
        novo->dado = Dado;
        novo->elo = NULL;
        if (FilaVazia(*PtDFila))
// vai ser o primeiro da fila
            (*PtDFila)->prim = novo;
        else
            (*PtDFila)->ult->elo = novo;
//insere no final
        (*PtDFila)->ult = novo;
        return 1;
    }
    else
        return 0;
}

int RemoverFila(TipoDFila **PtDFila, TipoInfo *Dado)
{
    TipoFila *ptaux;
    if (*PtDFila)
    {
//testa se o descritor foi alocado
        if (!FilaVazia(*PtDFila))
        {
// testa se tem algum elemento na fila
            ptaux = (*PtDFila)->prim;
            *Dado = (*PtDFila)->prim->dado;
            (*PtDFila)->prim = (*PtDFila)->prim->elo;
            free(ptaux);
            if ((*PtDFila)->prim == NULL)
//testa se a fila ficou vazia
                (*PtDFila)->ult = NULL;
            return 1;
        }
    }
    //COLOCAR ELSE QUALQUER COISA
        return 0;
}

void DestroiFila (TipoDFila **PtDFila)
{
    TipoFila *ptaux;
    if (*PtDFila)
    {
        while (!FilaVazia(*PtDFila))
        {
            ptaux = (*PtDFila)->prim;
//guarda o endereço do primeiro
            (*PtDFila)->prim = (*PtDFila)->prim->elo;
//o próximo passa a ser o topo
            free(ptaux);
//libera o que estava no topo
        }
        free(*PtDFila);
        *PtDFila = NULL;
    }
}
