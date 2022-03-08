/* Inserindo uma heap em um vetor(2^(h-1)-1) */

struct _heap{
  int max;  /* tamanho máximo do heap */
  int pos;  /* próxima posição disponível no vetor */
  float* prioridade;  /* vetor das prioridades */
};
typedef struct _heap Heap;

/* heap vazio */
int heap_vazio(Heap* heap)
{
  return heap->pos == 0;
}

/* heap cheio */
int heap_cheio(Heap* heap)
{
  return heap->pos == heap->max;
}

/* heap cria */

Heap* heap_cria(int max)
{
  Heap* heap=(Heap*)malloc(sizeof(Heap));
  heap->max=max;
  heap->pos=0;
  heap->prioridade==(float*)malloc(sizeof(float));
  return heap;
}

/* heap insere */

void heap_insere(Heap* heap, float prioridade)
{
  if(heap->pos<heap->max)
  {
    heap->prioridade[heap->pos]=prioridade;
    corrige_acima(heap,heap->pos);
    heap->pos++;
  }
  else
  {
    printf("Heap cheio\n");
  }
}

/* heap troca */

static void troca(int a, int b, float* v)
{
  float f=v[a];
  v[a]=v[b];
  v[b]=f;
}

/* corrige acima: função utilizada para corrigir o heap nos nós acima */

static void corrige_acima(Heap* heap, int pos)
{
  while(pos>0)
  {
    int pai=(pos-1)/2;
    if(heap->prioridade[pai]<heap->prioridade[pos])
    {
      troca(pos,pai,heap->prioridade);
    }
    else
    {
      break;
    }
    pos=pai;
  }
}

/* corrige abaixo: função utilizada para corrigir o heap nos nós abaixo */

static void corrige_abaixo(Heap* heap)
{
  int pai=0;
  while(2*pai+1<heap->pos)
  {
    int filho_esq=2*pai+1;
    int filho_dir=2*pai+2;
    int filho;
    if(filho_dir>=heap->pos)
    {
      filho_dir=filho_esq;
    }
    if(heap->prioridade[filho_esq]>heap->prioridade[filho_dir])
    {
      filho=filho_esq;
    }
    else
    {
      filho=filho_dir;
    }
    if(heap->prioridade[pai]<heap->prioridade[filho])
    {
      troca(pai,filho,heap->prioridade);
    }
    else
    {
      break;
    }
    pai=filho;
  }
}

/* heap remove */
float heap_remove(Heap* heap)
{
  if(heap->pos>0)
  {
    float topo = heap->prioridade[0]; /* topo recebe a raiz */
    heap->prioridade[0]=heap->prioridade[heap->pos-1];
    heap->pos--;
    corrige_abaixo(heap);
    return topo;
  }
  else
  {
    printf("Heap vazio");
    return -1;
  }
}

/* Printar na tela as 3 maiores prioridades, levando em consideração a existência das funções "heap_insere" e "heap_remove" */

Heap* heap_maxprior(Heap* heap)


int heap_vazio(Heap* heap)
{
  return heap->pos==0; /* se verdadeiro, irá retornar 1 */
}

int heap_cheio(Heap* heap)
{
  return heap->pos==heap->max; /* se verdadeiro, irá retornar 1 */
}

/* Imprime maiores */

void imprime_maiores(Heap´* heap)
{
  float v[3]={-1,-1,-1};
  int i=0;
  while(!heap_vazio(heap)&&i<3) /* while (heap->pos>0); */ 
  {
    v[i]=heap_remove(heap);
    i++;
  }
  for(i=0;i<3;i++)
  {
    if(v[i]!=-1)
    {
      printf("\n prioridade %d: %6.2f",i+1,v[i]);
      heap_insere(heap,v[i]);
    }
    else
    {
      printf("\n Não há prioridade %d", i+1);
    }
  }
}

int pertence(Arv* r, int val)
{
  Arv* p=NULL;
  Arv* x=r;
  while
}

/* Corrige abaixo: corrige os nós da parte de baixo da árvore */

static void corrige_abaixo(Heap* heap)
{
  int pai=0;
  while(2*pai+1<heap->pos)
  {
    int filho_esq=2*pai+1;
    int filho_dir=2*pai+2;
    int filho;
    if(filho_dir>=heap->pos)
    {
      filho_dir=filho_esq;
    }
    if(heap->prioridade[filho_esq]>heap->prioridade[filho_dir])
    {
      filho=filho_esq;
    }
    else
    {
      filho=filho_dir;
    }
    if(heap->prioridade[pai]<heap->prioridade[filho])
    {
      troca(pai,filho,heap->prioridade);
    }
    else
    {
      break;
    }
    pai=filho;
  }
}

/* Imprimir os três maiores nós da Heap */

void imprime_maiores(Heap* heap)
{
  float v[3]={-1,-1,-1};
  int i=0;
  while(!heap_vazio(heap)&&i<3)
  {
    v[i]=heap_remove(heap);
    i++;
  }
  for(i=0;i<3;i++)
  {
    if(v[i]!=-1)
    {
      printf("\n priridade %d: %6.2f",i+1,v[i]);
      heap_insere(heap,v[i]);
    }
    else
    {
      printf("\n Não há prioridade %d", i+1);
    }
  }
}

/* Imprime os nós da árvore em ordem */

void imprime_em_ordem(Heap* heap)
{
  Heap* aux=heap_cria(N);
  float v;
  while(!heap_vazio(heap))
  {
    v=heap_remove(heap);
    printf("%6.2f",v);
    heap_insere(aux,v);
  }
  while(!heap_vazio(aux))
  {
    heap_insere(heap,heap_remove(aux));
  }
}

/* 
1) Considere uma árvore binária de busca que armazena valores inteiros. Nessa estrutura, não podem ocorrer repetições de um mesmo valor. Assim, os valores associados aos nós da sub-árvore à esquerda são menores que o valor associado à raiz e os valores dos nós da sub-árvore à direita são maiores. O tipo que representa um nó da árvore é dado por: 

struct arv{
  int info;
  struct arv* pai;
  struct arv* esq;
  struct arv* dir;
};
typedef struct arv Arv;

a) Escreva uma função interativa que consulte se um determinado valor pertence, ou não, 
à alguma árvore. Caso o valor exista, a função deve retornar 1. Caso contrário, deve ser 
inserido um novo nó na árvore com o referido número e a função retornará 0. A função deve
tirar proveito da ordenação da árvore e obedecer ao seguinte protótipo:

int pertence(Arv* r, int val)

OBS1: Considere que a árvore nunca estará vazia. Ou seja, conterá, pelo menos, 1 elemento.
OBS2: Não utilize variáveis globais. 
*/

int pertence(Arv* r, int val)
{
  Arv* p=NULL;
  Arv* x=r;
  while(x!=NULL&&x->info!=val)
  {
    p=x;
    x=(val<x->info)?x->esq:x->dir; /* <Condição> Não:Sim */
  }
  if(x==NULL)
  {
    Arv* z=(Arv*)malloc(sizeof(Arv));
    z->info=val;
    z->esq=z->dir=NULL;
    z->pai=p;
    if(val<p->info)
    {
      p->esq=z;
    }
    else
    {
      p->dir=z;
    }
    return 0
  }
  return 1;
}

/*
b)Para a mesma estrutura anterior, escreva uma função de busca recursiva que receba
um ponteiro para a raiz da árvore e retorne um ponteiro para o pai do nó com a menor 
informação. Caso a árvore esteja vazia, a função deve retornar NULL. A função deve tirar proveito da ordenação da árvore e obedecer ao seguinte protótipo:

Arv* pai_menor(Arv* a);
*/

Arv* pai_menor(Arv* a)
{
  if(a==NULL)
  {
    return NULL;
  }
  if(a->esq==NULL)
  {
    return a->pai;
  }
  return pai_menor(a->esq);
}

/*
c)Escreva uma função recursiva que receba como parâmetro um ponteiro para um nó qualquer  da árvore e retorne um ponteiro para o nó raiz dessa árvore. A função deve obedecer ao 
seguinte protótipo:   

Arv* encontra_raiz(Arv* a);

OBS1: Caso a função recebba um ponteiro NULL, o retorno será NULL. 
OBS2: Não utilize variáveis globais. 
*/

Arv* encontra_raiz(Arv* a)
{
  if(a==NULL)
  {
    return NULL;
  }
  if(a->pai==NULL)
  {
    return a;
  }
  return encontra_raiz(a->pai);
}




