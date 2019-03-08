struct s_InfoNo{
char titulo[20];
char distr[20];
char diretor[20];
};
typedef struct s_InfoNo TipoInfoNo;

struct s_PtNo{
TipoInfoNo info;
struct s_PtNo *prox;
};
typedef struct s_PtNo TipoPtNo;

TipoPtNo* inicializa(void);

void imprime(TipoPtNo *ptLista);

TipoPtNo* InsereInicio(TipoPtNo *L);

TipoPtNo* InsereFinal(TipoPtNo *L);

TipoPtNo* LeDados(void);



