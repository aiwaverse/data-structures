#include <stdio.h>
#include <stdlib.h>
#include "data.h"

TipoPtNo* inicializa(void)
{
    return NULL;
}

void imprime(TipoPtNo *ptLista)
{
    TipoPtNo *ptaux;
    if(ptLista==NULL)
        printf("Lista Vazia! \n");
    else
    {
        ptaux=ptLista;
        while(ptaux!=NULL)
        {
            printf("Titulo: %s \n", ptaux->info.titulo);
            printf("Distribuidor: %s \n", ptaux->info.distr);
            printf("Diretor: %s \n", ptaux->info.diretor);
            ptaux=ptaux->prox;
        }
    }
}
TipoPtNo* InsereInicio(TipoPtNo *L)
{
    TipoPtNo *novo;
    novo=(TipoPtNo *)malloc(sizeof(TipoPtNo));
    novo=LeDados();
    novo->prox=L;
    L=novo;
    return L;
}
TipoPtNo* LeDados(void)
{
    TipoPtNo *dado;
    dado=(TipoPtNo*)malloc(sizeof(TipoPtNo));
    fflush(stdin);
    printf("Titulo: \n");
    gets(dado->info.titulo);
    printf("Distribuidor: \n");
    gets(dado->info.distr);
    printf("Diretor: \n");
    gets(dado->info.diretor);

    return dado;
}

TipoPtNo* InsereFinal(TipoPtNo *L)
{
    TipoPtNo *novo, *ptaux;
    novo=(TipoPtNo *)malloc(sizeof(TipoPtNo));
    novo=LeDados();
    novo->prox=NULL;
    ptaux=L;
    if(L==NULL)
        L=novo;
    else
        while((ptaux->prox)!=NULL)
            ptaux=ptaux->prox;
        ptaux->prox=novo;

    return L;
}

