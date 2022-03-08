/* Fator de balanceamento de um nó 

FB = HD - HE
HE = altura da sub-árvore à esquerda.
HD = altura da sub-árvore à direita. 

struct avl{
  int chave;
  int fb;
  struct avl *pai;
  struct avl *esq;
  struct avl *dir;
};

Árvore avl equilibrada: folhas estão no último ou penúltimo nível.
Valores relacionados ao nó para que esteja equilibrado: -1, 0, 1.


Pesquisar: Avl Tree Simulator 

AV1:
Complexidade
Árvore binária sem ordenação(Percurso de árvore)
Abb(Funções recursivas e iterativas)
Árvore AVL(Teoria)




