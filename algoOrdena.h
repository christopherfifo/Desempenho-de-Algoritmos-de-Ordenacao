#ifndef ALGOORDENA_H_INCLUDED
#define ALGOORDENA_H_INCLUDED

int menuprincipal();
void menuquantidade();

void executa(int slcAlgoritmo, int slcQuantidade);

void inverteVetor(int *array, int tamanho);
void criaVetor(int *vetor, int tamanho);


#include <time.h>

#define TIME_IT(fn_call, elapsed_ms)                              \
    do                                                            \
    {                                                             \
        clock_t __start = clock();                                \
        fn_call;                                                  \
        clock_t __end = clock();                                  \
        elapsed_ms = 1000.0 * (__end - __start) / CLOCKS_PER_SEC; \
    } while (0)

#endif // ALGOORDENA_H_INCLUDED
