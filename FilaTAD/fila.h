typedef int TipoInfo;

struct TPtFila
{
    TipoInfo dado;
    struct TPtFila *elo;
};
typedef struct TPtFila TipoFila;

typedef struct {
    TipoFila *prim;
    TipoFila *ult;
}TipoDFila;


TipoDFila* InicializaFila (TipoDFila *PtDFila);

int FilaVazia(TipoDFila *PtDFila);

TipoInfo ConsultaFila (TipoDFila *PtDFila);

int InserirFila(TipoDFila **PtDFila, TipoInfo Dado);

int RemoverFila(TipoDFila **PtDFila, TipoInfo *Dado);

void DestroiFila (TipoDFila **PtDFila);
