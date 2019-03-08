typedef int TipoInfo;
struct TNodoA
{
    TipoInfo info;
    int FB;
    struct TNodoA *esq;
    struct TNodoA *dir;
};
typedef struct TNodoA pNodoA;

pNodoA* rotacao_direita(pNodoA* p);

pNodoA* rotacao_esquerda(pNodoA *p);

pNodoA* rotacao_dupla_direita (pNodoA* p);

pNodoA* rotacao_dupla_esquerda (pNodoA *p);

pNodoA* Caso2 (pNodoA *a, int *ok);

pNodoA* Caso1 (pNodoA *a, int *ok);

pNodoA* InsereAVL (pNodoA *a, TipoInfo x, int *ok);

pNodoA* cria_arvore(void);

void centralEsquerda(pNodoA *a);

