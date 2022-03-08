#include <stdio.h>
#include <stdlib.h>
struct arvbin{
  char INFO;
  struct arvbin *ESQ;
  struct arvbin *DIR;
};
typedef struct arvbin Arv;

Arv* arv_criavazia();
Arv* arv_cria(char C, Arv* SAE, Arv* SAD);
void arv_preordem(Arv *A); 
void arv_posordem(Arv *A);
void arv_ordem(Arv *A);

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

  arv_preordem(A);
  arv_posordem(A);
  arv_ordem(A);

  return 0;
}

Arv* arv_criavazia()
{
	return NULL;
}

Arv* arv_cria(char C, Arv* ESQ, Arv* DIR)
{
  Arv* P=(Arv*)malloc(sizeof(Arv*));
  P->INFO=C;
  P->ESQ=ESQ;
  P->DIR=DIR;
  return P;
}

void arv_preordem(Arv* A)
{
  if(A!=NULL)
  {
    printf("%c",A->INFO);
    arv_preordem(A->ESQ);
    arv_preordem(A->DIR);
  }
}

void arv_posordem(Arv* A)
{
  if(A!=NULL)
  {
    arv_posordem(A->ESQ);
    arv_posordem(A->DIR);
    printf("%c",A->INFO);
  }
}

void arv_ordem(Arv *A)
{
  if(A!=NULL)
  {
    arv_ordem(A->ESQ);
    printf("%c",A->INFO);
    arv_ordem(A->DIR);
  }
}