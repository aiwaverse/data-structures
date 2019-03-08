struct TNodoA
{
    char info;
    struct TNodoA *esq;
    struct TNodoA *dir;
    char chave;
};
typedef struct TNodoA pNodoA;

void preFixadoEsquerda(pNodoA *a);

void centralEsquerda(pNodoA *a);

void posFixadoEsquerda(pNodoA *a);

pNodoA* consultaABP2(pNodoA *a, char chave);

pNodoA* consultaABP(pNodoA *a, char chave);

pNodoA* InsereArvore(pNodoA *a, char ch);

pNodoA* cria_arvore(void);
