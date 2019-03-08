#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

void preFixadoEsquerdaDia7(pNodoA *a, int cont)
{
    int  i;
    if (a!= NULL)
    {
        for(i=0;i<cont;i++)
            printf("=");
        printf("%d\n",a->info);
        preFixadoEsquerdaDia7(a->esq, cont+1);
        preFixadoEsquerdaDia7(a->dir, cont+1);
    }
}

pNodoA* InsereArvore(pNodoA *a, int ch)
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

int Altura (pNodoA *a)
{
    int Alt_Esq, Alt_Dir;
    if (a == NULL)
        return 0;
    else
    {
        Alt_Esq = Altura (a->esq);
        Alt_Dir = Altura (a->dir);
        if (Alt_Esq > Alt_Dir)
            return (1 + Alt_Esq);
        else
            return (1 + Alt_Dir);
    }
}
int fator (pNodoA *a)
{
    int alt_esq, alt_dir;
    if (a == NULL)
    {
        return 0;
    }
    else
    {
        alt_esq=Altura(a->esq);
        alt_dir=Altura(a->dir);
        if((abs(alt_esq-alt_dir))!=0)
            return abs(alt_esq-alt_dir);
        else
            return abs(alt_esq-alt_dir);

    }
}
void fatores_todos_os_nodos (pNodoA *a, int *fator_arvore)
{
    if (a!= NULL)
    {
        if(fator(a) > *fator_arvore)
            *fator_arvore=fator(a);
        fatores_todos_os_nodos(a->esq, fator_arvore);
        fatores_todos_os_nodos(a->dir, fator_arvore);
    }
}

