#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include "algoOrdena.h"
#include "algoritmosOrdenacao.h"

#define ordena

int slcAlgoritmo;
int slcQuantidade;

void menuquantidade()
{
    printf("//////////////////\n");
    printf("ESCOLHA A QUANTIDADE DE ELEMENTOS\n");
    printf("//////////////////\n");
    printf("1 - 10.000\n");
    printf("2 - 50.000\n");
    printf("3 - 100.000\n");
    printf("4 - 200.000\n");
    printf("5 - 500.000\n");
    printf("6 - 1.000.000\n");
    printf("7 - voltar para o menu principal\n");
    scanf("%d", &slcQuantidade);

    switch (slcQuantidade)
    {
    case 1:
        slcQuantidade = 10000;
        break;
    case 2:
        slcQuantidade = 50000;
        break;
    case 3:
        slcQuantidade = 100000;
        break;
    case 4:
        slcQuantidade = 200000;
        break;
    case 5:
        slcQuantidade = 500000;
        break;
    case 6:
        slcQuantidade = 1000000;
        break;
    case 7:
        menuprincipal();
        break;
    default:
        printf("Opcao invalida. Tente novamente.\n");
        menuquantidade();
        break;
    }
    printf("A quantidade de elementos escolhida foi: %d\n", slcQuantidade);
}

int menuprincipal()
{
    int *vetor = (int *)malloc(slcQuantidade * sizeof(int));
    if (vetor == NULL)
    {
        printf("Erro ao alocar memória para o vetor.\n");
        return NULL;
    }

    printf("///////////////////\n");
    printf("MENU PRINCIPAL\n");
    printf("///////////////////\n");
    printf("Escolha um dos Algoritmos de Ordenacao abaixo:\n");
    printf("1 - Bubblesort\n");
    printf("2 - InsertionSort\n");
    printf("3 - SelectionSort\n");
    printf("4 - ShellSort\n");
    printf("5 - MergeSort\n");
    printf("6 - QuickSort\n");
    printf("7 - HeapSort\n");
    printf("8 - BucketSort\n");
    printf("9 - RadixSort\n");
    printf("10 - CountingSort\n");
    printf("11 - TimSort\n");
    printf("12 - Sair\n");
    printf("Digite o numero corresponde: ");
    scanf("%d", &slcAlgoritmo);

    switch (slcAlgoritmo)
    {
    // Bubble Sort
    case 1:
    {
        double TEMPOS[12];
        struct timeval inicio, fim;

        for (int i = 0; i < 12; i++)
        {
            if (i == 10)
            {
                gettimeofday(&inicio, NULL);
                bubbleSort(vetor, slcQuantidade);
                gettimeofday(&fim, NULL);
                TEMPOS[i] = calculaTempo(inicio, fim);
                continue;
            }
            if (i == 11)
            {
                inverteVetor(vetor, slcQuantidade);
                gettimeofday(&inicio, NULL);
                bubbleSort(vetor, slcQuantidade);
                gettimeofday(&fim, NULL);
                TEMPOS[i] = calculaTempo(inicio, fim);
                continue;
            }
            criaVetor(vetor, slcQuantidade);
            gettimeofday(&inicio, NULL);
            bubbleSort(vetor, slcQuantidade);
            gettimeofday(&fim, NULL);
            TEMPOS[i] = calculaTempo(inicio, fim);
        }

        printf("\nTempos de execucao do Bubble Sort:\n");
        double melhor, pior, total;
        melhor = TEMPOS[0];
        pior = TEMPOS[11];

        for (int i = 0; i < 12; i++)
        {
            printf("Execucao %d: %.6f segundos\n", i + 1, TEMPOS[i]);
            if (TEMPOS[i] < melhor)
            {
                melhor = TEMPOS[i];
            }
            if (TEMPOS[i] > pior)
            {
                pior = TEMPOS[i];
            }
            total += TEMPOS[i];
        }

        printf("\n\n");
        printf("Melhor tempo: %.6f segundos\n", melhor);
        printf("Pior tempo: %.6f segundos\n", pior);
        printf("Tempo medio: %.6f segundos\n", total / 12);
        printf("Tempo total: %.6f segundos\n", total);
    }
    break;

        // Insertion Sort
    case 2:
    {
        double TEMPOS[12];
        struct timeval inicio, fim;

        for (int i = 0; i < 12; i++)
        {
            if (i == 10)
            {
                gettimeofday(&inicio, NULL);
                insertSort(vetor, 0, slcQuantidade - 1);
                gettimeofday(&fim, NULL);
                TEMPOS[i] = calculaTempo(inicio, fim);
                continue;
            }
            if (i == 11)
            {
                inverteVetor(vetor, slcQuantidade);
                gettimeofday(&inicio, NULL);
                insertSort(vetor, 0, slcQuantidade - 1);
                gettimeofday(&fim, NULL);
                TEMPOS[i] = calculaTempo(inicio, fim);
                continue;
            }
            criaVetor(vetor, slcQuantidade);
            gettimeofday(&inicio, NULL);
            insertSort(vetor, 0, slcQuantidade - 1);
            gettimeofday(&fim, NULL);
            TEMPOS[i] = calculaTempo(inicio, fim);
        }

        printf("\nTempos de execucao do Insertion Sort:\n");
        double melhor, pior, total;
        melhor = TEMPOS[0];
        pior = TEMPOS[11];

        for (int i = 0; i < 12; i++)
        {
            printf("Execucao %d: %.6f segundos\n", i + 1, TEMPOS[i]);
            if (TEMPOS[i] < melhor)
            {
                melhor = TEMPOS[i];
            }
            if (TEMPOS[i] > pior)
            {
                pior = TEMPOS[i];
            }
            total += TEMPOS[i];
        }

        printf("\n\n");
        printf("Melhor tempo: %.6f segundos\n", melhor);
        printf("Pior tempo: %.6f segundos\n", pior);
        printf("Tempo medio: %.6f segundos\n", total / 12);
        printf("Tempo total: %.6f segundos\n", total);
    }
    break;

    // Selection Sort
    case 3:
    {
        double TEMPOS[12];
        struct timeval inicio, fim;

        for (int i = 0; i < 12; i++)
        {
            if (i == 10)
            {
                gettimeofday(&inicio, NULL);
                selectionSort(vetor, slcQuantidade);
                gettimeofday(&fim, NULL);
                TEMPOS[i] = calculaTempo(inicio, fim);
                continue;
            }
            if (i == 11)
            {
                inverteVetor(vetor, slcQuantidade);
                gettimeofday(&inicio, NULL);
                selectionSort(vetor, slcQuantidade);
                gettimeofday(&fim, NULL);
                TEMPOS[i] = calculaTempo(inicio, fim);
                continue;
            }
            criaVetor(vetor, slcQuantidade);
            gettimeofday(&inicio, NULL);
            selectionSort(vetor, slcQuantidade);
            gettimeofday(&fim, NULL);
            TEMPOS[i] = calculaTempo(inicio, fim);
        }

        printf("\nTempos de execucao do Selection Sort:\n");
        double melhor, pior, total;
        melhor = TEMPOS[0];
        pior = TEMPOS[11];

        for (int i = 0; i < 12; i++)
        {
            printf("Execucao %d: %.6f segundos\n", i + 1, TEMPOS[i]);
            if (TEMPOS[i] < melhor)
            {
                melhor = TEMPOS[i];
            }
            if (TEMPOS[i] > pior)
            {
                pior = TEMPOS[i];
            }
            total += TEMPOS[i];
        }

        printf("\n\n");
        printf("Melhor tempo: %.6f segundos\n", melhor);
        printf("Pior tempo: %.6f segundos\n", pior);
        printf("Tempo medio: %.6f segundos\n", total / 12);
        printf("Tempo total: %.6f segundos\n", total);
    }
    break;

    // Shell Sort
    case 4:
    {
        double TEMPOS[12];
        struct timeval inicio, fim;

        for (int i = 0; i < 12; i++)
        {
            if (i == 10)
            {
                gettimeofday(&inicio, NULL);
                ShellSort(vetor, slcQuantidade);
                gettimeofday(&fim, NULL);
                TEMPOS[i] = calculaTempo(inicio, fim);
                continue;
            }
            if (i == 11)
            {
                inverteVetor(vetor, slcQuantidade);
                gettimeofday(&inicio, NULL);
                ShellSort(vetor, slcQuantidade);
                gettimeofday(&fim, NULL);
                TEMPOS[i] = calculaTempo(inicio, fim);
                continue;
            }
            criaVetor(vetor, slcQuantidade);
            gettimeofday(&inicio, NULL);
            ShellSort(vetor, slcQuantidade);
            gettimeofday(&fim, NULL);
            TEMPOS[i] = calculaTempo(inicio, fim);
        }

        printf("\nTempos de execucao do Shell Sort:\n");
        double melhor, pior, total;
        melhor = TEMPOS[0];
        pior = TEMPOS[11];

        for (int i = 0; i < 12; i++)
        {
            printf("Execucao %d: %.6f segundos\n", i + 1, TEMPOS[i]);
            if (TEMPOS[i] < melhor)
            {
                melhor = TEMPOS[i];
            }
            if (TEMPOS[i] > pior)
            {
                pior = TEMPOS[i];
            }
            total += TEMPOS[i];
        }

        printf("\n\n");
        printf("Melhor tempo: %.6f segundos\n", melhor);
        printf("Pior tempo: %.6f segundos\n", pior);
        printf("Tempo medio: %.6f segundos\n", total / 12);
        printf("Tempo total: %.6f segundos\n", total);
    }
    break;

    // Merge Sort
    case 5:
    {
        double TEMPOS[12];
        struct timeval inicio, fim;

        for (int i = 0; i < 12; i++)
        {
            if (i == 10)
            {
                gettimeofday(&inicio, NULL);
                mergesort(vetor, 0, slcQuantidade - 1);
                gettimeofday(&fim, NULL);
                TEMPOS[i] = calculaTempo(inicio, fim);
                continue;
            }
            if (i == 11)
            {
                inverteVetor(vetor, slcQuantidade);
                gettimeofday(&inicio, NULL);
                mergesort(vetor, 0, slcQuantidade - 1);
                gettimeofday(&fim, NULL);
                TEMPOS[i] = calculaTempo(inicio, fim);
                continue;
            }
            criaVetor(vetor, slcQuantidade);
            gettimeofday(&inicio, NULL);
            mergesort(vetor, 0, slcQuantidade - 1);
            gettimeofday(&fim, NULL);
            TEMPOS[i] = calculaTempo(inicio, fim);
        }

        printf("\nTempos de execucao do Merge Sort:\n");
        double melhor, pior, total;
        melhor = TEMPOS[0];
        pior = TEMPOS[11];

        for (int i = 0; i < 12; i++)
        {
            printf("Execucao %d: %.6f segundos\n", i + 1, TEMPOS[i]);
            if (TEMPOS[i] < melhor)
            {
                melhor = TEMPOS[i];
            }
            if (TEMPOS[i] > pior)
            {
                pior = TEMPOS[i];
            }
            total += TEMPOS[i];
        }

        printf("\n\n");
        printf("Melhor tempo: %.6f segundos\n", melhor);
        printf("Pior tempo: %.6f segundos\n", pior);
        printf("Tempo medio: %.6f segundos\n", total / 12);
        printf("Tempo total: %.6f segundos\n", total);
    }
    break;

    // Quick Sort
    case 6:
    {
        double TEMPOS[12];
        struct timeval inicio, fim;

        for (int i = 0; i < 12; i++)
        {
            if (i == 10)
            {
                gettimeofday(&inicio, NULL);
                quickSort(vetor, 0, slcQuantidade - 1);
                gettimeofday(&fim, NULL);
                TEMPOS[i] = calculaTempo(inicio, fim);
                continue;
            }
            if (i == 11)
            {
                inverteVetor(vetor, slcQuantidade);
                gettimeofday(&inicio, NULL);
                quickSort(vetor, 0, slcQuantidade - 1);
                gettimeofday(&fim, NULL);
                TEMPOS[i] = calculaTempo(inicio, fim);
                continue;
            }
            criaVetor(vetor, slcQuantidade);
            gettimeofday(&inicio, NULL);
            quickSort(vetor, 0, slcQuantidade - 1);
            gettimeofday(&fim, NULL);
            TEMPOS[i] = calculaTempo(inicio, fim);
        }

        printf("\nTempos de execucao do Quick Sort:\n");
        double melhor, pior, total;
        melhor = TEMPOS[0];
        pior = TEMPOS[11];

        for (int i = 0; i < 12; i++)
        {
            printf("Execucao %d: %.6f segundos\n", i + 1, TEMPOS[i]);
            if (TEMPOS[i] < melhor)
            {
                melhor = TEMPOS[i];
            }
            if (TEMPOS[i] > pior)
            {
                pior = TEMPOS[i];
            }
            total += TEMPOS[i];
        }

        printf("\n\n");
        printf("Melhor tempo: %.6f segundos\n", melhor);
        printf("Pior tempo: %.6f segundos\n", pior);
        printf("Tempo medio: %.6f segundos\n", total / 12);
        printf("Tempo total: %.6f segundos\n", total);
    }
    break;

    // Heap Sort
    case 7:
    {
        double TEMPOS[12];
        struct timeval inicio, fim;

        for (int i = 0; i < 12; i++)
        {
            if (i == 10)
            {
                gettimeofday(&inicio, NULL);
                heapSortAscending(vetor, slcQuantidade);
                gettimeofday(&fim, NULL);
                TEMPOS[i] = calculaTempo(inicio, fim);
                continue;
            }
            if (i == 11)
            {
                inverteVetor(vetor, slcQuantidade);
                gettimeofday(&inicio, NULL);
                heapSortAscending(vetor, slcQuantidade);
                gettimeofday(&fim, NULL);
                TEMPOS[i] = calculaTempo(inicio, fim);
                continue;
            }
            criaVetor(vetor, slcQuantidade);
            gettimeofday(&inicio, NULL);
            heapSortAscending(vetor, slcQuantidade);
            gettimeofday(&fim, NULL);
            TEMPOS[i] = calculaTempo(inicio, fim);
        }

        printf("\nTempos de execucao do Heap Sort:\n");
        double melhor, pior, total;
        melhor = TEMPOS[0];
        pior = TEMPOS[11];

        for (int i = 0; i < 12; i++)
        {
            printf("Execucao %d: %.6f segundos\n", i + 1, TEMPOS[i]);
            if (TEMPOS[i] < melhor)
            {
                melhor = TEMPOS[i];
            }
            if (TEMPOS[i] > pior)
            {
                pior = TEMPOS[i];
            }
            total += TEMPOS[i];
        }

        printf("\n\n");
        printf("Melhor tempo: %.6f segundos\n", melhor);
        printf("Pior tempo: %.6f segundos\n", pior);
        printf("Tempo medio: %.6f segundos\n", total / 12);
        printf("Tempo total: %.6f segundos\n", total);
    }
    break;

    // Bucket Sort
    case 8:
    {
        double TEMPOS[12];
        struct timeval inicio, fim;

        for (int i = 0; i < 12; i++)
        {
            if (i == 10)
            {
                gettimeofday(&inicio, NULL);
                bucketSort(vetor, slcQuantidade);
                gettimeofday(&fim, NULL);
                TEMPOS[i] = calculaTempo(inicio, fim);
                continue;
            }
            if (i == 11)
            {
                inverteVetor(vetor, slcQuantidade);
                gettimeofday(&inicio, NULL);
                bucketSort(vetor, slcQuantidade);
                gettimeofday(&fim, NULL);
                TEMPOS[i] = calculaTempo(inicio, fim);
                continue;
            }
            criaVetor(vetor, slcQuantidade);
            gettimeofday(&inicio, NULL);
            bucketSort(vetor, slcQuantidade);
            gettimeofday(&fim, NULL);
            TEMPOS[i] = calculaTempo(inicio, fim);
        }

        printf("\nTempos de execucao do Bucket Sort:\n");
        double melhor, pior, total;
        melhor = TEMPOS[0];
        pior = TEMPOS[11];

        for (int i = 0; i < 12; i++)
        {
            printf("Execucao %d: %.6f segundos\n", i + 1, TEMPOS[i]);
            if (TEMPOS[i] < melhor)
            {
                melhor = TEMPOS[i];
            }
            if (TEMPOS[i] > pior)
            {
                pior = TEMPOS[i];
            }
            total += TEMPOS[i];
        }

        printf("\n\n");
        printf("Melhor tempo: %.6f segundos\n", melhor);
        printf("Pior tempo: %.6f segundos\n", pior);
        printf("Tempo medio: %.6f segundos\n", total / 12);
        printf("Tempo total: %.6f segundos\n", total);
    }
    break;

    // Radix Sort
    case 9:
    {
        double TEMPOS[12];
        struct timeval inicio, fim;

        for (int i = 0; i < 12; i++)
        {
            if (i == 10)
            {
                gettimeofday(&inicio, NULL);
                radixSort(vetor, slcQuantidade);
                gettimeofday(&fim, NULL);
                TEMPOS[i] = calculaTempo(inicio, fim);
                continue;
            }
            if (i == 11)
            {
                inverteVetor(vetor, slcQuantidade);
                gettimeofday(&inicio, NULL);
                radixSort(vetor, slcQuantidade);
                gettimeofday(&fim, NULL);
                TEMPOS[i] = calculaTempo(inicio, fim);
                continue;
            }
            criaVetor(vetor, slcQuantidade);
            gettimeofday(&inicio, NULL);
            radixSort(vetor, slcQuantidade);
            gettimeofday(&fim, NULL);
            TEMPOS[i] = calculaTempo(inicio, fim);
        }

        printf("\nTempos de execucao do Radix Sort:\n");
        double melhor, pior, total;
        melhor = TEMPOS[0];
        pior = TEMPOS[11];

        for (int i = 0; i < 12; i++)
        {
            printf("Execucao %d: %.6f segundos\n", i + 1, TEMPOS[i]);
            if (TEMPOS[i] < melhor)
            {
                melhor = TEMPOS[i];
            }
            if (TEMPOS[i] > pior)
            {
                pior = TEMPOS[i];
            }
            total += TEMPOS[i];
        }

        printf("\n\n");
        printf("Melhor tempo: %.6f segundos\n", melhor);
        printf("Pior tempo: %.6f segundos\n", pior);
        printf("Tempo medio: %.6f segundos\n", total / 12);
        printf("Tempo total: %.6f segundos\n", total);
    }
    break;

    // Counting Sort
    case 10:
    {
        double TEMPOS[12];
        struct timeval inicio, fim;

        for (int i = 0; i < 12; i++)
        {
            if (i == 10)
            {
                gettimeofday(&inicio, NULL);
                countingSort(vetor, slcQuantidade);
                gettimeofday(&fim, NULL);
                TEMPOS[i] = calculaTempo(inicio, fim);
                continue;
            }
            if (i == 11)
            {
                inverteVetor(vetor, slcQuantidade);
                gettimeofday(&inicio, NULL);
                countingSort(vetor, slcQuantidade);
                gettimeofday(&fim, NULL);
                TEMPOS[i] = calculaTempo(inicio, fim);
                continue;
            }
            criaVetor(vetor, slcQuantidade);
            gettimeofday(&inicio, NULL);
            countingSort(vetor, slcQuantidade);
            gettimeofday(&fim, NULL);
            TEMPOS[i] = calculaTempo(inicio, fim);
        }

        printf("\nTempos de execucao do Counting Sort:\n");
        double melhor, pior, total;
        melhor = TEMPOS[0];
        pior = TEMPOS[11];

        for (int i = 0; i < 12; i++)
        {
            printf("Execucao %d: %.6f segundos\n", i + 1, TEMPOS[i]);
            if (TEMPOS[i] < melhor)
            {
                melhor = TEMPOS[i];
            }
            if (TEMPOS[i] > pior)
            {
                pior = TEMPOS[i];
            }
            total += TEMPOS[i];
        }

        printf("\n\n");
        printf("Melhor tempo: %.6f segundos\n", melhor);
        printf("Pior tempo: %.6f segundos\n", pior);
        printf("Tempo medio: %.6f segundos\n", total / 12);
        printf("Tempo total: %.6f segundos\n", total);
    }
    break;

    // Tim Sort
    case 11:
    {
        double TEMPOS[12];
        struct timeval inicio, fim;

        for (int i = 0; i < 12; i++)
        {
            if (i == 10)
            {
                gettimeofday(&inicio, NULL);
                timSort(vetor, slcQuantidade);
                gettimeofday(&fim, NULL);
                TEMPOS[i] = calculaTempo(inicio, fim);
                continue;
            }
            if (i == 11)
            {
                inverteVetor(vetor, slcQuantidade);
                gettimeofday(&inicio, NULL);
                timSort(vetor, slcQuantidade);
                gettimeofday(&fim, NULL);
                TEMPOS[i] = calculaTempo(inicio, fim);
                continue;
            }
            criaVetor(vetor, slcQuantidade);
            gettimeofday(&inicio, NULL);
            timSort(vetor, slcQuantidade);
            gettimeofday(&fim, NULL);
            TEMPOS[i] = calculaTempo(inicio, fim);
        }

        printf("\nTempos de execucao do Tim Sort:\n");
        double melhor, pior, total;
        melhor = TEMPOS[0];
        pior = TEMPOS[11];

        for (int i = 0; i < 12; i++)
        {
            printf("Execucao %d: %.6f segundos\n", i + 1, TEMPOS[i]);
            if (TEMPOS[i] < melhor)
            {
                melhor = TEMPOS[i];
            }
            if (TEMPOS[i] > pior)
            {
                pior = TEMPOS[i];
            }
            total += TEMPOS[i];
        }

        printf("\n\n");
        printf("Melhor tempo: %.6f segundos\n", melhor);
        printf("Pior tempo: %.6f segundos\n", pior);
        printf("Tempo medio: %.6f segundos\n", total / 12);
        printf("Tempo total: %.6f segundos\n", total);
    }
    break;

    case 12:
        printf("Saindo do programa...\n");
        exit(0);
        break;

    default:
        printf("Opção inválida.\n");
        menuprincipal();
        break;
    }
    for (int j = 0; j < 10; j++)
    {
        printf(" %d", vetor[j]);
    }
}

// FUNÇÕOES AUXILIARES
void inverteVetor(int *array, int tamanho)
{
    for (int i = 0; i < tamanho / 2; i++)
    {
        int temp = array[i];
        array[i] = array[tamanho - i - 1];
        array[tamanho - i - 1] = temp;
    }
}
void criaVetor(int *vetor, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = rand() % tamanho;
    }
}

double calculaTempo(struct timeval tempoInicial, struct timeval tempoFinal)
{
    double inicio = tempoInicial.tv_sec + tempoInicial.tv_usec / 1000000.0;
    double fim = tempoFinal.tv_sec + tempoFinal.tv_usec / 1000000.0;
    return fim - inicio;
}
