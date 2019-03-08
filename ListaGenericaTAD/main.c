#include <stdio.h>
#include "Lista.h"
#define MAX 10

int main(void)
{
    TProduto Lista[MAX];
    TDescritor descritor;
    inicializa(Lista, &descritor);
    insere(Lista, &descritor, 1);
    printf("%s", Lista[0].nome);




    return 0;
}
