/* 
Considere uma árvore binária de busca que armazena valores inteiros. Nesta estrutura não podem ocorrer repetições de um mesmo valor. Assim, os valores associados aos nós
da subárvore à esquerda são menores que o valor associado à raiz e os valores dos nós da subárvore à direita são maiores, O tipo que representa um nó da árvore é dado por:

struct arv{
  int info;
  struct arv *esq;
  struct arv *dir;
};
typedef struct arv Arv;

a)Escreva uma função recursiva que receba um ponteiro para a raiz da árvore e um valor inteiro(val) e insira um novo nó na árvore. Caso o elemento já exista, a função não deverá inserir o novo nó. Caso contrario, o novo nó será inserido obedecendo a ordenação da árvore. Em qualquer caso, retornará o ponteiro para a raiz. 
*/

/* 
Complexidade do algoritmo: O(n)
Pior caso: percorrer todos os nós e inserir no último. Terá que percorrer todos os n nós.
*/

Arv* insere(Arv* r, int val)
{
  if(r==NULL)
  {
    r=(Arv*)malloc(sizeof(Arv));
    r->info=val;
    r->esq=NULL;
    r->dir=NULL;
  }
  else if(val<r->info)
  {
    r->esq=insere(r->esq,val);
  }
  else if(val>r->info)
  {
    r->dir=insere(r->dir,val);
  }
  return r;
}

/*
b) Escreva uma função recursiva que receba como parâmetros um ponteiro para a raiz da árvore e um valor inteiro x e imprima os valores associados ao campo "info" de 
todos os nós que são menores que x, em ordem crescente. A função deve tirar proveito da ordenação da árvore(evitando, inclusive, percursos desnecessários) e obedecer
o seguinte protótipo:

void mostra_menores(Arv* a, int x)
*/

/* Complexidade algorítmica: O(n) */

void mostra_menores(Arv* a, int x)
{
  if(a==NULL)
  {
    return;
  }
  mostra_menores(a->esq,x)
  if(a->info<x)
  {
    printf("%3d",a->info);
  }  
  mostra_menores(a->dir,x);
}
