#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "data.h"

void ex1 (void)
{
    int count, q, *m;
    count = 100;
    m = &count;
    q = *m;
    printf("count = %d\n", count);
    printf("q = %d\n",q);
    printf("m = %p\n",m); //%p para imprimir ponteiros
    printf("m aponta para = %d\n\n",*m); //conteúdo da memória apontada por m
}

void ex2 (void)
{
    //x era é float, mas recebeu o end de um int
    float x;
    int *p;
    x = 100;
    p = &x;
    printf("x=%f\np=%p\n\n", x,p);
}
void ex3(void)
{
    int a, *x,*y;
    a = 10;
    x = &a;
    y = x;
    printf("a = %d \n",a);
    printf("*x = %d, *y = %d \n",*x, *y);
    printf("x = %p, y = %p\n\n",x,y);
    *x = 20;
    printf("*x = %d, *y = %d \n",*x, *y);
    printf("x = %p, y = %p\n\n",x,y);
    printf("a = %d \n",a);
}
void ex4(void)
{
    //O ponteiro p nunca recebeu valor, por isso contém lixo. O programa atribui o valor 10 a uma posição de memória desconhecida.
    int x, *p;
    x = 10;
    p=&x;
    *p = x;
    printf("*p=%d\n", *p);

}
void ex5(void)
{
    //O programa está atribuindo o valor de x (10) a um endereço de memória, solução é colocar p=&x
    int x, *p;
    x = 10;
    p = x;

}
void ex6(void)
{
    int *p;
    p = (int *)malloc(sizeof(int));
    *p=10;
    printf("valor P = %d \n",*p);
    printf("endereco P = %p \n",p);
    free(p);

}
void ex7(void)
{
    int *p;
    p = (int *)malloc(sizeof(int));
    *p=123;
    printf("p=%p\n", p);
    p = (int *)malloc(sizeof(int));
    *p=456;
    printf("p=%p\n", p);;
    p = (int *)malloc(sizeof(int));
    *p=789;
    printf("p=%p\n", p);
    printf("%d \n",*p);
    system("PAUSE");
}
void ex8(void)
{
    int *p,*x,*y;
    p = (int *)malloc(sizeof(int));
    x=p;
    y=p;
    printf("%d\n",*p);
    *p=10;
    printf("p: %d\nx: %d\ny:%d ",*p,*x,*y);

}
void ex9(void)
{
    int *p,*x;
    x = (int *)malloc(sizeof(int));
    *x=10;
    p = x;
    printf("%d\n%d\n",*x,*p);
    printf("%d\n%d\n",(int)x,(int)p);

}
void ex10(void)
{
    int *p;
    int i;
    p = (int *)malloc(sizeof(int));
    i=100;
    *p= i;
    printf("i: %d\n*p: %d\n %d\n",i, *p,(int)p);
    i=40;
    printf("i: %d\n*p: %d\n %d\n",i, *p,(int)p);
    p= &i;
    printf("%d\n",p);
    i=55;
    printf("i: %d\n*p: %d\n %d\n",i, *p,(int)p);
    free(p);

}
void ex11(void)
{
    Pessoa *p;
    p = (Pessoa*) malloc(sizeof(Pessoa));
    printf("endereço de p %d\n",p);
    printf("nome:");
    scanf("%s",&p->nome);
    printf("idade:");
    scanf("%d",&p->idade);
    printf("altura:");
    scanf("%d",&p->altura);
    printf("nome: %s\n",p->nome);
    printf("idade: %d\n",p->idade);
    printf("altura: %d\n",p->altura);
    free(p);
    system("PAUSE");

}
void ex12(void)
{
    pessoa *p1;
    pessoa *p2;
    p1 = (pessoa*) malloc(sizeof(pessoa));
    p2 = (pessoa*) malloc(sizeof(pessoa));
    scanf("%s",p1->nome);
    scanf("%s",p2->nome);
    p1->elo=p2;
    printf("%s\n",p1->elo->nome);
    printf("%s\n",p2->nome);
    system("PAUSE");
    free(p1);
    free(p2);
    system("PAUSE");

}
