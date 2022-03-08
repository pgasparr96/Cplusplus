/* Função para liberar nós de uma árvore binária */

Arv* arv_libera(Arv* a)
{
  if(!arv_vazia(a))
  {
    arv_libera(a->esq);  //libera SAE
    arv_libera(a->dir);  //libera SAD
    free(a);
  }
  return NULL;
}

/* TESTE DE MESA

(1)A(2)<B(3)>C

1)Libera(a->esq)(1)
2)Libera(a->esq)>NULL, Libera(a->dir)>NULL(2), free(a), return NULL 
3)Libera(a->esq) NULL
  Libera(a->dir) NULL
  Free(a);
  Return NULL;
