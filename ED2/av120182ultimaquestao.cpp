/* Considere árvores binárias que armazenam valores inteiros. O tipo que representa um nó das árvores é dado por:

struct arv{
  int info;
  struct arv *esq;
  struct arv *dir;
};
typedef struct arv Arv;

a)Escreva uma função recursiva que receba ponteiros para a raiz de duas árvores e retorne 1 se as árvores forem IDÊNTICAS(mesmo número de nós, mesmo conteúdo nos nós), 
e retorne 0 caso não sejam

OBS.: 
- Caso as duas árvores estejam vazias, a função deverá retornar 1.
- As informações da árvore não estão em nenhuma ordem específica.
- Não utilize variáveis globais.
- A árvore vazia é representada pelo ponteiro NULL.

/* Complexidade desse algoritmo: O(n) */

struct arv{
  int info;
  struct arv *esq;
  struct arv *dir;
};
typedef struct arv Arv;

int iguais(Arv* a, Arv* b)
{
  return (a==NULL && b==NULL) || (a!=NULL && b!=NULL && a->info==b->info 
          && igual(a->esq, b->esq) && igual(a->dir, b->dir));
}

/* 
Considerações importantes
- Se (a==NULL && b==NULL) for verdadeira, ela gerará o valor 1. Ou seja, a função será terminada e retornará 1
- Caso não seja, ele vai para a segunda condição, onde ele compara a existência dos nós e os valores do mesmo nos mesmos locais
de ramificação. Caso não seja, retornará 0. 
- Cada chamada de cada função retornará 0 ou 1.
- Caso exista os nós mas suas informações são diferentes, zera toda a condição(nós existem? Sim(1), informações iguais? Não(0). 1 ou 0 = 0).
*/

/*  
b)Escreva uma função recursiva que receba um ponteiro para a raiz de uma árvore e retorne o número de nós da árvore que possuam valores armazenados no campo info maiores que um dado valor x. O protótipo da função é dado por:

int conta_maiores(Arv* a, int x)

OBS.:
- As informações da árvore não estão em nenhuma ordem específica.
- Não utilize variáveis globais.
- A árvore vazia é representada pelo ponteiro NULL.
*/

int conta_maiores(Arv* a, int x)
{
  if(a==NULL)
  {
    return 0;
  }
  else if(a->info>x)
  {
    return 1 + conta_maiores(a->esq) + conta_maiores(a->dir);
  }
  else
  {
    return conta_maiores(a->esq) + conta_maiores(a->dir);
  }
}

