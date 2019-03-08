#include <stdio.h>
#include <string.h>
#include "Lista.h"
#define MAX 10

void inicializa ( TProduto t[], TDescritor d[])
{
    int i;
    for (i=0; i<MAX; i++)
    {
        strcpy(t[i].nome,"");
        t[i].cod=0;
        t[i].preco=0;
    }
    d->inicio = -1;
    d->fim = -1;
}
int consulta ( TProduto t[], TDescritor d[], int posicao)
{
    if ( (posicao > (d->fim - d->inicio +1)) || (posicao< 1))
        return -1;
    else
        return t[d->inicio+posicao-1].cod;
}

int insere(TProduto t[], TDescritor d[], int posicao)
{
    int i;
    if(((d->inicio==0) && (d->fim == MAX-1)) || (posicao>(d->fim-d->inicio+2)) || (posicao<1) || ((d->inicio==-1) & (posicao!=1)))
    {
        printf("Erro - Posicao invalida! \n");
        return -1;
    }
    else if (d->inicio==-1)
    {
        d->inicio=0;
        d->fim=0;
    }
    else if (d->fim!=MAX-1)
    {
        for (i=d->fim; i>=d->inicio+posicao-1; i--)
            t[i+1]=t[i];
        d->fim=d->fim+1;
    }
    else
    {
        for(i=d->inicio; i<=d->inicio+posicao-1; i++)
            t[i-1]=t[i];
        d->inicio= d->inicio-1;
    }
    printf("Codigo: \n");
    scanf("%d", &t[d->inicio+posicao-1].cod);
    printf("Nome: \n");
    scanf("%s", t[d->inicio+posicao-1].nome);
    printf("Preco: \n");
    scanf("%f", &t[d->inicio+posicao-1].preco);

    return 0;
}

int remover ( TProduto t[], TDescritor d[], int posicao)
{
    int i, rem=0;
    if ( (d->inicio == -1) || (posicao > d->fim - d->inicio +1 ) || (posicao < 1))
        return -1;
    else
    {
        rem =t[d->inicio+posicao-1].cod;
        for (i=d->inicio+posicao-1; i <d->fim; i++)
            t[i] = t[i+1];
        strcpy(t[d->fim].nome,"");
        t[d->fim].cod=0;
        t[d->fim].preco=0;
        d->fim = d->fim -1;
        if (d->fim == -1)
            d->inicio= -1;
        return rem;
    }
}

void destroi (TProduto t[],TDescritor d[])
{
    d->inicio = -1;
    d->fim = -1;
}
int insere_circular (TProduto t[], TDescritor d[], int posicao)
{
    int i;

    if (((d->inicio==0) && (d->fim == MAX-1)) || (posicao>(d->fim-d->inicio+2)) || (posicao<1) || ((d->inicio==-1) & (posicao!=1)) || (d->inicio-d->fim+1==d->inicio) || (d->fim-d->inicio+1==d->fim)) //Testa todos os casos de uma posicao invalida ou uma lista cheia
        printf("Operacao Invalida \n");
    else if ((d->inicio+d->fim/2)>=posicao) //Nesse caso, testa se o caminho mais curto é alterar o inicio
    {
        if (d->inicio==-1)
        {
            d->inicio=0;
            d->fim=0;
        }
        else if ((d->inicio+d->fim/2)>=posicao)
        {
            if (d->inicio!=0) //Testa
                {
                    for(i=d->inicio; i<=d->inicio+posicao-1; i++)
                {
                    if (i==0)
                        t[i+MAX-1]=t[i];
                    else
                        t[i-1]=t[i];
                }
            d->inicio= d->inicio-1;
                }
            else
            if (d->inicio==0)

            {
                t[0]=t[MAX-1];
                for(i=d->inicio+1; i<=d->inicio+posicao-1; i++)
                {
                    t[i]=t[i+1];
                }
                d->inicio = d->inicio+MAX-1;


            }
        }
        else
    {
        if (d->fim!=MAX-1) //Testa
    {
                for(i=d->fim; i<=d->inicio+posicao-1; i++)
                {
                    if (i==0)
                        t[i+MAX-1]=t[i];
                    else
                        t[i-1]=t[i];
                }
            d->inicio= d->inicio-1;
    }
            else if (d->inicio==0)
            {
                t[0]=t[MAX-1];
                for(i=d->inicio+1; i<=d->inicio+posicao-1; i++)
                {
                    t[i]=t[i+1];
                }
                d->inicio = d->inicio+MAX-1;
            }

        }

    }
    return 0;
}
