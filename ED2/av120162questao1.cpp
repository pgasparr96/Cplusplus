
/* 
Considere uma árvore binária de busca que armazena valores inteiros. Nesta estrutura não podem ocorrer repetições de um mesmo 
valor. Assim, os valores associados aos nós da sub-árvore à esquerda são menores que o valor associado à raiz e os valores dos 
nós da sub-árvore à direita são maiores. O tipo que representa um nó da árvore é dado por:

struct arv{
  int info;
  struct arv *pai;
  struct arv *esq;
  struct arv *dir; 
};
typedef struct arv Arv;

a)Escreva uma função recursiva que receba um ponteiro para a raiz e um valor inteiro e insira um novo nó na árvorem caso esse valor não seja encontrado. A função deverá retornar um ponteiro para a raiz da árvore e obedecer ao seguinte protótipo:

Arv* insere(Arv* r, int val)
*/

Arv* insere(Arv* r, int val)
{
  if(r == NULL)
  {
    return cria_filho(r,val);
  }
  else if(val < r->info)
  {
    if(r->esq == NULL)
    {
      r->esq = cria_filho(r,val);
    }
    else
    {
      r->esq = insere(r->esq,val);
    }
  }
  else if (val > r->info)
  {
    if(r->dir == NULL)
    {
      r->dir = cria_filho(r,val);
    }
    else
    {
      r->dir = insere(r->dir,val);
    }
  }
  return r; /* Se o nó a ser inserido for igual ao nó raiz. */
}

/* 
Para que a função insira valores repetidos(inserir um valor que já se encontra na árvore)

else if (val >= r->info)
  {
    if(r->dir == NULL)
    {
      r->dir = cria_filho(r,val);
    }
    else
    {
      r->dir = insere(r->dir,val);
    }
  }
*/

Arv* cria_filho(Arv* pai, int val) /* Sub-função. */
{
  Arv* no = (Arv*)malloc(sizeof(Arv));
  no->info = val;
  no->pai = pai;
  no->esq = NULL;
  no->dir = NULL;
  return no;
}

/*
b)Escreva uma função de busca iterativa que receba um ponteiro para a raiz da ávore e retorne um ponteiro para o nó com a informação que precede a raiz na ordenação(o nó com a maior informação abaixo do valor da raiz). Caso a árvore esteja vazia, a função deve retornar NULL. Caso não haja um nó com informação que precede a raiz, a função também deverá retornar NULL. A função deve tirar proveito da ordenação da árvore e obedecer ao seguinte protótipo:

Arv* busca_no(Arv* a)
*/

Arv* busca_no(Arv* a)
{
  if(a == NULL)
  {
    return NULL;
  }
  Arv* f = a->esq; /* Receber o primeiro nó da ramificação esquerda. */
  if(f==NULL)
  {
    return NULL;
  }
  while(f->dir != NULL)
  { 
    f = f->dir; /* Pegar o maior nó da ramificação esquerda que antecede o nó raiz. */
  }
  return f;
}

