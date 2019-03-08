typedef struct{
int codigo;
char nome[20];
float preco;
}InfoNo;

struct TipoPtNo{
InfoNo info;
struct TipoPtNo *ant;
struct TipoPtNo *prox;
};
typedef struct TipoPtNo PtNo;

PtNo* inicializa(void);

void imprime(PtNo *PtLista);

void imprimeInvertida(PtNo *PtLista);

PtNo* insereInicio(PtNo *PtLista);

PtNo* insereFinal(PtNo *PtLista);

PtNo* destroi(PtNo* ptLista);

PtNo* LeDados(void);

PtNo* Insere_Produto_Ordenada(PtNo *L);
