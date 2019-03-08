#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(void)
{
    TipoPilha *Pilha;

    Pilha=inicializa();
    Pilha=PushPilha(Pilha, 8);
    printf("%d", PilhaVazia(Pilha));

    return 0;
}
