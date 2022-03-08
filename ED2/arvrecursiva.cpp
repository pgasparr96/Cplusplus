#include<stdlib.h>
#include<stdio.h>


struct arv {
  int info;
  struct arv* esq;
  struct arv* dir;
};
typedef struct arv Arv;

Arv* arv_criavazia();
Arv* abb_insere(Arv* a, int x);
void imprime_crescente(Arv* a);
Arv* abb_busca(Arv* a, int x);
void showmenor(Arv* a, int x);
Arv* menor(Arv* a);
Arv* busca_no(Arv* a);
Arv* arv_libera(Arv* a);

int main(){
    
    Arv*a;
    a = arv_criavazia();
    /*Vai inserir, recursivamente, valores na árvore*/
    a = abb_insere (a,6);
    a = abb_insere (a,2);
    a = abb_insere (a,8);
    a = abb_insere (a,1);
    a = abb_insere (a,4);
    a = abb_insere (a,3);
    /* Vai imprimir, recursivamente, todos os elementos em ordem crescente*/
    imprime_crescente(a); 
    printf("\n");
    /*Vai buscar, recursivamente, um valor na árvore*/
    Arv*k = abb_busca(a,1);
    if (k!=NULL) printf(" info = %d\n", k->info);
    printf("\n");
    /*imprime, recursivamente, todos os valores nos nós da árvore a que sejam menores que x, em ordem
crescente.*/
    showmenor(a,5);
    printf("\n");
    /* Encontra, iterativamente, um ponteiro para o menor valor da árvore*/
    k = menor(a);
    if (k!=NULL) printf(" A menor informacao = %d\n", k->info);
	/* Encontra, iterativamente, o valor que antecede a raiz*/
    printf("\n");
    k = busca_no(a);
    if (k!=NULL) printf(" Valor que antecede a raiz = %d\n", k->info);
	else printf("Não ha valor!");
    arv_libera(a);
    system("pause");
    return 0;
}

Arv* arv_criavazia()
{
	return NULL;
}

Arv* abb_insere(Arv* a, int x)
{
	if(a==NULL)
	{
		Arv* a=(Arv*)malloc(sizeof(Arv));
		a->info=x;
		a->esq=NULL;
		a->dir=NULL;
	}
	else if(x<a->info)
	{
		a->esq=abb_insere(a->esq,x);
	}
	else
	{
		a->dir=abb_insere(a->dir,x);
	}
	return a;
}

void imprime_crescente(Arv* a)
{
	if(a!=NULL)
	{
		imprime_crescente(a->esq);
		printf("%d",a->info);
		imprime_crescente(a->dir);
	}
}

Arv* abb_busca(Arv* a, int x)
{
		if(a->info>x)
		{
			return abb_busca(a->esq,x);
		}
		else if(a->info<x)
		{
			return abb_busca(a->dir,x);
		}
		else
		{
			return a;
		}
}

void showmenor(Arv* a, int x)
{
	if(a!=NULL)
	{
		showmenor(a->esq,x);
		if(a->info<x)
		printf("%d",a->info);
		showmenor(a->dir,x);
	}
}

Arv* menor(Arv* a)
{
	if(a==NULL)
	{
		return NULL;
	}
	Arv* b=a;
	while(b->esq!=NULL)
	{
		b=b->esq;
	}
	return b;
}

Arv* busca_no(Arv* a)
{
	Arv* b;
	if(a==NULL || a->esq==NULL)
	{
		return NULL;
	}
	b=a;
	b=b->esq;
	while(b->dir!=NULL)
	{
		b=b->dir;
	}
	return b;
}

Arv* arv_libera(Arv* a)
{
	if(a!=NULL)
	{
		arv_libera(a->esq);
		arv_libera(a->dir);
		free(a);
	}
	return NULL;
} 

