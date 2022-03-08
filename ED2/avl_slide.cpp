 /* Struct de uma árvore binária */
struct avl{
  int chave;
  int fb; 
  struct _avl *pai;
  struct _avl *esq;
  struct _avl *dir;
};

/* 

Fator de balanceamento(fb = hd - he) 
fb = fator de balanceamento
hd = altura da sub-árvore à direita
he = altura da sub-árvore à esquerda

*/


/* Rotação à direita */

static Avl* rotacao_direita(Avl* r)
{
  Avl* pai=r->pai, *t=r->esq, *m=t->dir;
  t->dir=r;
  t->pai=t;
  r->esq=m;
  if(m)
  {
    m->pai=r;
  }
  t->pai=pai;
  if(pai)
  {
    if(pai->dir==r)
    {
      pai->dir=t;
    }
    else
    {
      pai->esq=t;
    }
    t->fb = r->fb=0;
    return t;
  }

}

/* Questão de prova: teórica sobre rotação de árvore, retirada de um elemento e rotação dos elementos para balanceamento */ 


