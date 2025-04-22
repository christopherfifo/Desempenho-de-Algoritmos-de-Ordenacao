#ifndef ALGOORDENA_H_INCLUDED
#define ALGOORDENA_H_INCLUDED

int menuprincipal();
void menuquantidade();

void executa(int slcAlgoritmo, int slcQuantidade);

void inverteVetor(int *array, int tamanho);
void criaVetor(int *vetor, int tamanho);

double calculaTempo(struct timeval tempoInicial, struct timeval tempoFinal);

#endif // ALGOORDENA_H_INCLUDED
