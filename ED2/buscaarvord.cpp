/* Faça uma função que procure um valor em uma árvore ordenada
OBS.: A árvore é ordenada através do valor dos nós em relação ao seus respectivos nós raiz */

Arv* busca(Arv* a, int v)
{
  if(a==NULL)
  {
    return NULL;
  }
  else if(a->info<v)
  {
    return busca(a->esq,v);
  }
  else if(a->info>v)
  {
    return busca(a->dir,v);
  }
  else
  {
    return r;
  }
}

/* TESTE DE MESA

v=4;
6(1)<2(2)>4(3)

1) return busca(r->esq,v);
2) return busca(r->dir,v);
3) return r; 

COMPLEXIDADE ALGORITMICA: N é o número de nós em uma árvore. */

/*Faça uma função de busca binária na árvore utilizando interatividade(for,while,if) */

Arv* busca(Arv* r, int v)
{
  while(r!=NULL && r->info!=v)
  {
    if(v<r->info!=v)
    {
      if(v<r->info)
      {
        r=r->esq;
      }
      else
      {
        r=r->dir;
      }
    }
    return r;
  }
}








