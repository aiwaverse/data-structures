struct TNodoA
{
    int info;
    struct TNodoA *esq;
    struct TNodoA *dir;
    int chave;
};
typedef struct TNodoA pNodoA;

pNodoA* InsereArvore(pNodoA *a, int ch);

pNodoA* cria_arvore(void);

void preFixadoEsquerdaDia7(pNodoA *a, int cont);

int Altura (pNodoA *a);

int fator (pNodoA *a);

void fatores_todos_os_nodos (pNodoA *a, int *fator_arvore);
