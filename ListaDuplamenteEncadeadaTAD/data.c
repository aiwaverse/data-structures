#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "data.h"

PtNo* inicializa(void)
{
    return NULL;
}
void imprime(PtNo *PtLista)
{
    PtNo *PtAux;
    PtAux=PtLista;

    if (PtLista == NULL)
        puts("lista vazia");
    else
        do
        {
            printf("Codigo = %d \nNome = %s \nPreco = %.2f\n\n", PtAux->info.codigo, PtAux->info.nome, PtAux->info.preco);
            PtAux=PtAux->prox;
        }
        while (PtAux != NULL);
}

void imprimeInvertida(PtNo *PtLista)
{
    PtNo *PtAux;
    if (PtLista==NULL)
    {
        printf("Lista vazia ! ");
    }
    else
    {
        PtAux=PtLista;
        while (PtAux->prox!=NULL)
            PtAux=PtAux->prox;
        while (PtAux!=NULL)
        {
            printf("Codigo = %d \nNome = %s \nPreco = %.2f\n\n", PtAux->info.codigo, PtAux->info.nome, PtAux->info.preco);
            PtAux=PtAux->ant;
        }
    }
}

PtNo* insereInicio(PtNo *PtLista)
{
    PtNo *novo, *dado;
    dado=LeDados();
    novo=(PtNo*) malloc(sizeof(PtNo));
    novo=dado;
    novo->prox=PtLista;

    if (PtLista != NULL)
        PtLista->ant=novo;

    PtLista=novo;

    return PtLista;
}
PtNo* insereFinal(PtNo *PtLista)
{
    PtNo *dado;
    dado=LeDados();
    PtNo *novo, *PtAux;
    novo = (PtNo*) malloc(sizeof(PtNo)); //aloca novo nodo
    novo=dado; //coloca dados no novo nodo
    if ((PtLista) == NULL) //lista vazia
    {
        PtLista = novo;
        novo->ant=NULL;
    }
    else
    {
        // lista tem pelo menos um nodo
        PtAux = PtLista; //auxiliar no início da lista
        while (PtAux->prox != NULL) //PtAux avança até o último elemento da lista
            PtAux=PtAux->prox;
        PtAux->prox=novo;
        novo->ant=PtAux; //Encadeia novo com PtAux
    }
    return PtLista;
}

PtNo* destroi(PtNo* ptLista)
{
    PtNo *PtAux; //ponteiro auxiliar para percorrer a lista
    while (ptLista != NULL)
    {
        PtAux = ptLista;
        ptLista = ptLista->prox;
        free(PtAux);
    }
    free(ptLista);
    return NULL;
}
PtNo* LeDados(void)
{
    PtNo *dado;
    dado=(PtNo*)malloc(sizeof(PtNo));
    fflush(stdin);
    printf("Codigo: \n");
    scanf("%d", &dado->info.codigo);
    fflush(stdin);
    printf("Nome: \n");
    gets(dado->info.nome);
    fflush(stdin);
    printf("Preco: \n");
    scanf("%f",&dado->info.preco);
    dado->prox=NULL;
    dado->ant=NULL;

    return dado;
}
PtNo* Insere_Produto_Ordenada(PtNo *L)
{
    PtNo *ptaux, *ptant, *novo;
    ptaux=L;
    ptant=NULL;
    novo=(PtNo *)malloc(sizeof(PtNo));
    novo=LeDados();
    if (L==NULL)
       {
         L=novo;
         return L;
       }
    else
    {
        while((ptaux!=NULL) && ((ptaux->info.codigo) < (novo->info.codigo)))
        {
            ptant=ptaux;
            ptaux=ptaux->prox;
        }
    }
    if (ptant==NULL && ptaux!=NULL)
    {
      novo->prox=L;
      L->ant=novo; //Elemento inserido agora
      L=novo;
    }
    else
    { if (ptaux==NULL)
        {
        ptant->prox=novo;
        novo->ant=ptant; //Elemento inserido agora
        }
        else
        {
            ptant->prox=novo;
            novo->ant=ptant; //Elemento inserido agora
            novo->prox=ptaux;
            ptaux->ant=novo; //Elemento inserido agora
        }
    }
    return L;

}
