
typedef struct T_Produto {
int cod;
char nome[40];
float preco;
}TProduto;
typedef struct T_Descritor{
int inicio;
int fim;
}TDescritor;

void inicializa (TProduto t[], TDescritor d[]);

int insere (TProduto t[], TDescritor d[], int posicao);

int remover (TProduto t[], TDescritor d[], int posicao);

int consulta ( TProduto t[], TDescritor d[], int posicao);

void destroi (TProduto t[], TDescritor d[]);

int insere_circular (TProduto t[], TDescritor d[], int posicao);
