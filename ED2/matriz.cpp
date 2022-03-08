/* Considerando duas matrizes A e B, avalie o algoritmo e crie a matriz C=A+B. */

#include <stdio.h>

int main()
{
  int n,i,j,A[i][j],B[i][j];
  printf("digite um valor para n:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("insire um valor na posição A[%d][%d]:",i,j);
      scanf("%d",&A[i][j]);
      printf("insire um valor na posição B[%d][%d]:",i,j);
      scanf("%d",&B[i][j]);
    }
  }

  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      C[i][j]=A[i][j] + B[i][j]; //soma de matrizes 
    }
  }
  return 0;
}

/* Considerando duas matrizes A e B, avalie o algoritmo e crie a matriz C=A/B */

#include <stdio.h>

int main()
{
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      C[i][j]=0;
      for(k=0;k=n;k++)
      {
        C[i][j]=C[i][j] + (A[i][k]*B[k][j]/*representa i1*i2*/);
      }
    }
  }
}

/* Considere a existência de duas listas encadeadas L1 e L2. Avalie a complexidade para o pior caso de uma função que percorre a lista L1 e imprime a informação de cada nó, desde que essa informação esteja em algum nó de L2.

OBS.: Considere que as listas não estão ordenadas. 
      Considere que as duas listas possuem no máximo N nós.                         */


void imprime_listasigual(Lista *A, Lista *B, N)
{
  Lista* auxa,auxb;
  auxa=A;
  auxb=B;
  for(auxa;auxa!=NULL;aux=aux->prox)
  {
    for(auxb;auxb!=NULL;auxb=auxb->prox)
    {
      if(auxa==auxb)
      {
        printf("%d",auxa);
      }
    }
  }
}
  
/* 
  Considerando o pior caso da função(quando não é encontrado nenhum elemento em comum)
  Lista A(n interações) 
  Lista B(n interações)
  n*n=n²
  Portanto: O(n²) 

Busca binária

N  N/2  N/8 ....... apenas 1 elemento(1(N/N))
N/2^0 N/2^1 N/2^2 N/2^3................N/2^k
2^K=N

*/




    