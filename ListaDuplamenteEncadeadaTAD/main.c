#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "data.h"

int main(void)
{
    PtNo *L;
    int op;
    L=inicializa();
    do
    {
        printf("1-Imprimir a lista \n");
        printf("2-Imprimir a lista de tras para frente \n");
        printf("3-Inserir um dado no inicio da lista \n");
        printf("4-Inserir um dado no final da lista \n");
        printf("5-Inserir de forma ordenada \n");
        printf("6-Destruir a lista e sair \n");
        scanf("%d", &op);
        switch(op)
        {
        case 1: imprime(L);
                system("pause");
                system("cls");
                break;
        case 2: imprimeInvertida(L);
                system("pause");
                system("cls");
                break;
        case 3: L=insereInicio(L);
                system("pause");
                system("cls");
                break;
        case 4: L=insereFinal(L);
                system("pause");
                system("cls");
                break;
        case 5: L=Insere_Produto_Ordenada(L);
                system("pause");
                system("cls");
                break;
        case 6: destroi(L);
                printf("Bye bye \n");

        default: break;
        }
    } while (op!=6);



    return 0;
}
