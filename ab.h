#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ArvB{
  int nchaves, folha, *chave;
  struct ArvB **filho;
}TAB;


typedef struct ArvArq
{
	int nchaves, nfilhos, folha, chave[100],filhos[100],pai;		
}ArTAB;


TAB *Cria(int t);
TAB *Libera(TAB *a);
void Imprime(TAB *a, int andar);
TAB *Busca(TAB* x, int ch);
TAB *Inicializa();
TAB *Divisao(TAB *x, int i, TAB* y, int t);
TAB *Insere_Nao_Completo(TAB *x, int k, int t);
TAB *Insere(TAB *T, int k, int t);
TAB* remover(TAB* arv, int ch, int t);
TAB* retira(TAB* arv, int k, int t);

//funcçoes de arquivo
void InsereArquivo(char *nome, int k, int t);
ArTAB *Busca_arq(char * nome, int ch);
ArTAB* carregaNo_arq(char *nome);
void Imprime_arq(char *nome);	