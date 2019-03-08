#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

void preFixadoEsquerda(pNodoA *a)
{
    if (a!= NULL)
    {
        printf("%c\n",a->info);
        preFixadoEsquerda(a->esq);
        preFixadoEsquerda(a->dir);
    }
}

void centralEsquerda(pNodoA *a)
{
    if (a!= NULL)
    {
        centralEsquerda(a->esq);
        printf("%c\n",a->info);
        centralEsquerda(a->dir);
    }
}

void posFixadoEsquerda(pNodoA *a)
{
    if (a!= NULL)
    {
        posFixadoEsquerda(a->esq);
        posFixadoEsquerda(a->dir);
        printf("%c\n",a->info);
    }
}

pNodoA* consultaABP2(pNodoA *a, char chave)
{
    if (a==NULL)
        return NULL;
    else if (a->info == chave)
        return a;
    else if (a->info > chave)
        return consultaABP2(a->esq,chave);
    else
        return consultaABP2(a->dir,chave);
}

pNodoA* consultaABP(pNodoA *a, char chave)
{
    while (a!=NULL)
    {
        if (a->info == chave )
            return a;   //achou retorna o ponteiro para o nodo
        else if (a->info > chave)
            a = a->esq;
        else
            a = a->dir;
    }
    return NULL;   //não achou, retorna null
}

pNodoA* InsereArvore(pNodoA *a, char ch)
{
    if (a == NULL)
    {
        a =  (pNodoA*) malloc(sizeof(pNodoA));
        a->info = ch;
        a->esq = NULL;
        a->dir = NULL;
    }
    else if (ch < (a->info))
        a->esq = InsereArvore(a->esq,ch);
    else
        a->dir = InsereArvore(a->dir,ch);
    return a;
}

pNodoA* cria_arvore(void)
{
    return NULL;
}
