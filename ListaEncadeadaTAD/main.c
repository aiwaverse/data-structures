#include <stdio.h>
#include <stdlib.h>
#include "data.h"

int main(void)
{
    TipoPtNo *L;
    int op;
    do
    {
        system("cls");
        printf("==========Menu==========\n");
        printf("1=Inicializar/Apagar Lista \n");
        printf("2=Inserir no Inicio da Lista \n");
        printf("3=Inserir no Final da Lista \n");
        printf("4=Imprimir a Lista \n");
        printf("5=Sair \n");
        scanf("%d", &op);
        switch(op)
        {
            case 1: L=inicializa();
                    printf("Lista inicializada! (ou apagada)\n");
                    system("pause");
                    break;
            case 2: L=InsereInicio(L);
                    system("pause");
                    break;
            case 3: L=InsereFinal(L);
                    system("pause");
                    break;
            case 4: imprime(L);
                    system("pause");
                    break;
            case 5: break;
            default: printf("Opcao Invalida! \n");
        }
    }while(op!=5);

    return (0);
}
