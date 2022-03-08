
/* Considere uma árvore binária de busca que armazena valores inteiros. Nesta estrutura, podem ocorrer repetições de um mesmo valor. Assim, os valores associados aos nós da
subárvore à esquerda são menores que o valor associado à raiz e os valores dos nós da subárvore à direita são maiores ou iguais. O tipo que representa um nó da árvore é dado por:

struct arv{
  int info;
  struct arv *esq;
  struct arv *dir;
};
typedef struct arv Arv;

a)Escreva uma função de busca recursiva, em Linguagem C, que retorne o número de ocorrências de um dado valor x na árvore. A função deve tirar porveito da ordenação da árvore e obedecer ao seguinte protótipo:

int ocorrencias_x(Arv* a, int x)
*/

int ocorrencias_x(Arv* a, int x)
{
  if(x<a->info)
  {
    return a + ocorrencias_x(a->esq,x);
  }
  else if(x>a->info)
  {
    return 0 + ocorrencias_x(a->dir,x);
  }
  if(x==a->info)
  {
    return 1 + ocorrencias_x(a->dir,x);
  }
}

/* 
b) Considere agora que repetições não são mais permitidas. Ou seja, os valores associados aos nós da subárvore á equerda são menores que o valor associado à raiz e os valores dos nós da subárvore á direita são simplesmente maiores. Escreva uma função de busca iterativa que receba um ponteiro para a raiz da árvore e retorne um ponteiro para o nó com a menor informação. Caso a árvore esteja vazia, a função deve retornar NULL. A função deve tirar proveito da ordenação da árvore e oebedecer ao seguinte protóipo:

Arv* busca_menor(Arv* a)
*/

Arv* busca_menor(Arv* a)
{
  if(a==NULL)
  {
    return NULL;
  }
  else
  {
    while(a->esq!=NULL)
    {
      a=a->esq;
    }
    return a;
  }
}

/* c) Escreva uma função de busca iterativa que receba um ponteiro para a raiz da árvore e retorne um ponteiro para o nó com a informação que é imediatamente maior do que o valor do nó da raiz(ou seja, nó com a menor informação acima do valor da raiz). Caso a árvore esteja vazia, a função deve retornar NULL. Caso não haja um nó com informação que sucede a raiz, a função também deverá retornar NULL. A fuinção deve tirar proveito da ordenação da árvore obedecendo ao seguinte protótipo:

Arv* busca_no(Arv* a)
*/

Arv* busca_no(Arv* a)
{
  if(a==NULL)
  {
    return NULL;
  }
  else
  {
    Arv* r=a->dir;
    if(r==NULL)
    {
      return NULL;
    }
    while(r->esq!=NULL)
    {
      r=r->esq;
    }
    return r;
  }
}






