#include <stdio.h>
#include <stdlib.h>
#include "avl.h"

int main(void)
{
    pNodoA *avl;
    int opcao, ok, numero;
    avl=cria_arvore();
    do
    {
        printf("============================================================================\n");
        printf("MENU DE OPERACOES EM AVL: \n");
        printf("1- Inserir um numero \n");
        printf("2- Imprimir com Caminhamento Central a Esquerda\n");
        printf("3- Inserir números iguais aos slides \n");
        printf("4- Sair\n");
        printf("============================================================================\n");
        scanf("%d", &opcao);
        switch(opcao)
        {
        case 1:
            printf("Numero: \n");
            scanf("%d", &numero);
            avl=InsereAVL(avl, numero, &ok);
            system("pause");
            system("cls");
            break;
        case 2:
            printf("===============\n");
            centralEsquerda(avl);
            printf("===============\n");
            system("pause");
            system("cls");
            break;
        case 3:
            avl=InsereAVL(avl, 50, &ok);
            avl=InsereAVL(avl, 40, &ok);
            avl=InsereAVL(avl, 30, &ok);
            avl=InsereAVL(avl, 45, &ok);
            avl=InsereAVL(avl, 47, &ok);
            avl=InsereAVL(avl, 55, &ok);
            avl=InsereAVL(avl, 56, &ok);
            avl=InsereAVL(avl, 1, &ok);
            avl=InsereAVL(avl, 2, &ok);
            avl=InsereAVL(avl, 3, &ok);
            system("pause");
            system("cls");
            break;
        case 4:
            break;
        default:
            printf("Opcao invalida \n");
            system("pause");
            system("cls");
        }
    }
    while(opcao!=4);
    return 0;
}
