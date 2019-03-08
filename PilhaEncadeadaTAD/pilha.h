typedef int TipoInfo;
struct TPtPilha{
TipoInfo dado;
struct TPtPilha *elo;
};
typedef struct TPtPilha TipoPilha;

TipoPilha* inicializa(void);

TipoPilha* PushPilha (TipoPilha *Topo, TipoInfo Dado);

int PopPilha (TipoPilha **Topo, TipoInfo *Dado);

int PilhaVazia (TipoPilha *Topo);

TipoInfo ConsultaPilha (TipoPilha *Topo);

TipoPilha* DestroiPilha (TipoPilha *Topo);
