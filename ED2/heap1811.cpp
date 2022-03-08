/*
Considere a existência de uma lista de prioridades máxima, implementada com um vetor e definida da seguinte fora

struct _heap{
  int max
  int pos;
  float* prioridade; 
};typedef struct _heap Heap;

Considere que, em determinado momento, o vetor das prioridads esteja com a seguinte configuração:

0      1    2      3     4     5     6     7     8    9   10     11     12    13
20.0  18.  17.0  12.0  14.0  13.0  15.0  10.00  9.0  6.0  7.0  Livre  Livre   Livre

Levando em conta a aboradagem do heap em árvore binária(em que os elementos da árvore são alocados sequencialmente, por nível, no vetor prioridade), esquematize a configuração final do vetor prioridade, após a execução de um algoritmo que remova o elemento de maior prioridade e promova os demais ajustes para manutenção das regras da lista. Justifique, resumidamente, o funcionamento do algoritmo. 
*/





/*
Considere um cadastro de alunos armazenado em uma tabela de dispersão(hash) que usa como chave de busca a matrícula do aluno. Considere também a existência de uma função de hash que, dada a matrícula do aluno, retorne o seu índice na tabela. O protótipo dessa função é dado por:

int hash(int mat);

O tratamento de colisão é feito utulizando-se listas encadeadas para armazenar os elementos que colidem. Dessa forma, cada posição na tabela representa um ponteiro para o primeiro nó de uma lista encadeada, conforme ilustra a figura ao lado. Considere as seguintes declarações relativas à tabela de hash dos alunos:

struct aluno{
  nt mat;
  struct aluno *prox;
};
typedef struct aluno Aluno

#define N 200
typedef Aluno* Hash[N];

a) Considerando que posições não preenchidas da tabela de hash armazenem o valor NULL(lista vazia), escreva uma função que busque um determinado aluno na tabela. A função recebe como parâmetros a tabela hash  a matrícula para busca. Caso o aluno não exista na tabela, deverá ser inserido no início da lista. Caso contrário(ou seja, se o aluno foi encontrado) a função simplesmente não insere. Nos dois casos, a função deverá retornar o ponteiro inicial que aponta para o primeiro nó. O protótipo da função deve ser:

Aluno* insere(Hash tab, int matric);
*/


/*
b)utilizando a função busca escrita anteriormente, escreva uma nova função que receba como parâmetros a tabela hash e a matrícula de um aluno e, caso o mesmo pertença à tabela, armazenado em uma posição "h", a função deverá retornar a quantidade de alunos que estão "colidindo" nessa posição(ou seja, a quantidade de nós na lista). Caso o aluno não existe, a função retornará -1. 

int quantidade(Hash tab, int matric);
*/

int quantidade(Hash tab, int matric)
{
  if(busca(tab, matric))
  {
    int h=hash(matric);
    q=0;
    Aluno*a=tab[h];
    while(a!=NULL)
    {
      q+
      =a->prox;
    }
    return q;
  }
  else
  {
    return -1;
  }
}
