#include <stdio.h>
#include <stdlib.h>
#include <iostream>
struct arv{
  int info;
  struct arv* esq;
  struct arv* dir;
} typedef struct arv Arv;

int main()
{
  printf("Arvore criada com sucesso. Preenchendo a árvore.......\n");
  Arv* A1 = arv_cria('J',arv_criavazia(),arv_criavazia());
  Arv* A2 = arv_cria('I',arv_criavazia(),A1);
  Arv* A3 = arv_cria('M',arv_criavazia(),arv_criavazia());
  Arv* A4 = arv_cria('H',A3,A2);
  Arv* A5 = arv_cria('D',A4,arv_criavazia());
  Arv* A6 = arv_cria('G',arv_criavazia(),arv_criavazia());
  Arv* A7 = arv_cria('C',A6,A5);
  Arv* A8 = arv_cria('L',arv_criavazia(),arv_criavazia());
  Arv* A9 = arv_cria('K',arv_criavazia(),A8);
  Arv* A10 = arv_cria('F',arv_criavazia(),arv_criavazia());
  Arv* A11 = arv_cria('E',A9,A10);
  Arv* A12 = arv_cria('B',A11,A7);
  Arv* A = arv_cria('A',A12,arv_criavazia());
  printf("Criacao da arvore foi finalizada com sucesso\n");

}

Arv* abb_criavazia()
{
  return NULL;
}

Arv* abb_cria(int N, Arv* esq, Arv* dir)
{
  Arv* P=(Arv*)malloc(sizeof(Arv));
  P->info=N;
  P->esq=esq;
  P->dir=dir;
}



int ocorrencias_x(Arv* a, int x)
{
  if(a==NULL)
  {
    return 0;
  }
  if(a->info==x)
  {
    return 1 + ocorrencias_x(a->dir,x);
  }
  if(a->info<x)
  {
    return 0 + ocorrencias_x(a->dir,x);
  }
  //else(nesse caso não precisaria)
  return ocorrencias_x(a->esq,x);
}

  

  

}

