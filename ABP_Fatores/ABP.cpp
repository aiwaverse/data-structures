#include <stdio.h>
#include <stdlib.h>
#include "Header.h"
int main(void)
{
    pNodoA *arvore;
    int opcao, dado, fator_arvore=0;

    arvore=cria_arvore();
    do
    {
        printf("1- Inserir Nodo\n");
        printf("2- Imprimir Nodos \n");
        printf("3- Determinar Fator\n");
        printf("4- Inserir arvore igual ao exemplo 1\n");
        printf("5- Inserir arvore igual ao exemplo 2\n");
        printf("6- Sair \n");
        scanf("%d", &opcao);
        switch(opcao)
        {
        case 1:
            printf("Entre com o dado:\n");
            scanf("%d", &dado);
            arvore=InsereArvore(arvore, dado);
            system("pause");
            system("cls");
            break;
        case 2:
            printf("\n\n=============\n");
            preFixadoEsquerdaDia7(arvore, 1);
            printf("=============\n");
            system("pause");
            system("cls");
            break;
        case 3:
            fatores_todos_os_nodos(arvore, &fator_arvore);
            printf("Fator da Arvore: %d \n", fator_arvore);
            system("pause");
            system("cls");
            break;
        case 4:
            arvore=InsereArvore(arvore, 42);
            arvore=InsereArvore(arvore, 15);
            arvore=InsereArvore(arvore, 88);
            arvore=InsereArvore(arvore, 6);
            arvore=InsereArvore(arvore, 27);
            arvore=InsereArvore(arvore, 63);
            arvore=InsereArvore(arvore, 94);
            arvore=InsereArvore(arvore, 20);
            arvore=InsereArvore(arvore, 57);
            arvore=InsereArvore(arvore, 71);
            printf("Arvore Exemplo 1 inserida com sucesso!\n");
            system("pause");
            system("cls");
            break;
        case 5:
            arvore=InsereArvore(arvore, 42);
            arvore=InsereArvore(arvore, 15);
            arvore=InsereArvore(arvore, 27);
            arvore=InsereArvore(arvore, 20);
            printf("Arvore Exemplo 2 inserida com sucesso!\n");
            system("pause");
            system("cls");
            break;
        case 6:
            break;
        default: printf("Opcao Invalida \n");
        }


    }while(opcao!=6);


    return 0;
}
