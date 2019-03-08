#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void inicializa( int *base, int *limite, int *topo)
{
    *base = 0;
    *limite = 9;
    *topo = *base - 1;
}

int PilhaCheia (int limite, int topo)
{
    if (topo < limite)
        return 0;
// pilha tem espaço livre
    else
        return 1;
// pilha está cheia
}

int PushPilha ( TProduto t[], int limite, int *topo, TProduto dado)
{
    if ( PilhaCheia(limite,*topo ) )
        return 0;
    else
    {
        *topo = *topo +1;
        t[*topo] = dado;
        return 1;
    }
}

int PilhaVazia (int base, int topo)
{
    if (topo < base)
        return 1;
// pilha vazia
    else
        return 0;
// pilha tem pelo menos um elemento
}

int PopPilha( TProduto t[], int base, int *topo, TProduto *dado)
{
    if (PilhaVazia(base, *topo))
        return 0;
    else
    {
        *dado
            =  t[*topo];
        *topo = *topo -1;
        return 1;
    }
}

int consulta ( TProduto t[], int base, int topo, TProduto *dado)
{
    if (PilhaVazia(base,topo))
        return 0;
    else
    {
        *dado = t[topo];
        return 1;
    }
}

void destroi (int *base, int *limite, int *topo)
{
    *base = -1;
    *limite = -1;
    *topo = -1;
}
