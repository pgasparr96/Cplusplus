/* Faça uma função que insere um valor em uma árvore binária até sua posição correta(iterativamente). O protótipo da função é dado por "Arv* insere(Arv* r, int val)". */

Arv* insere(Arv* r, int val)
{
  Arv* z=(Arv*)malloc(sizeof(Arv));
  z->info=val;
  z->esq=NULL;
  z->dir=NULL;
  if(r==NULL)
  {
    return z;
  }
  else
  {
    Arv* p;
    Arv* x=r;
    while(r!=NULL)
    {
      p=x;
      x=(val<r->info)?x->esq:x->dir; // ((a condição é verdadeira?)sim:não)
    
    if(val<p->info)
    {
      p->esq=z;
    }
    else
    {
      p->dir=z;
    }
    return p;
    }
  }
}

//TESTE DE MESA NO FICHÁRIO.

/* Faça uma função que insere um valor em uma árvore binária até sua posição correta(recursivamente). O protótipo da função é dado por "Arv* abb_insere(Arv* a, int v)". */

Arv* abb_insere(Arv* a, int v)
{
  if(a==NULL)
  {
    a=(Arv*)malloc(sizeof(Arv));
    a->info=v;
    a->esq=NULL;
    a->dir=NULL;
  }
  else if(v<a->info)
  {
    a->esq=abb_insere(a->esq,v);
  }
  else /* v<a->info */
  {
    a->dir=abb_insere(a->dir,v);
  }
  return a;
  }
}

//TESTE DE MESA NO FICHÁRIO. 

/* Escreva uma função que retorne o número de ocorrências de um dado valor x na árvore. O protótipo da função é dado por "Int ocorrencias_x(Arv* a, int x)". */ 


  

