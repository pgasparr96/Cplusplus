
#include <stdio.h>

int main()
{
  int tam, vet[tam], aux;
  printf("digite o tamanho do vetor:");
  scanf("%d", &tam);
  for(i=0;i<tam;i++)
  {
    printf("digite um valor para a posição %d",i);
    scanf("%d",&vet[i]);
  }
  printf("vetor preenchido. Invertendo as posições.......");
  for(i=0;i<tam/2;i++) //mais rápido
  {
    aux=vet[i];
    vet[i]=vet[tam-i+1]
    vet[N-i+1]=aux;
  }
}