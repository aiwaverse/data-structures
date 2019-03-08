typedef struct s_Produto {
int cod;
char nome[40];
float preco;
} TProduto;
int base,limite,topo;

void inicializa( int *base, int *limite, int *topo);

int PilhaCheia (int limite, int topo);

int PushPilha ( TProduto t[], int limite, int *topo, TProduto dado);

int PilhaVazia (int base, int topo);

int PopPilha( TProduto t[], int base, int *topo, TProduto *dado);

int consulta ( TProduto t[], int base, int topo, TProduto *dado);

void destroi (int *base, int *limite, int *topo);


