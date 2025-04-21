#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "algoOrdena.h"
#include "algoritmosOrdenacao.h"

int slcAlgoritmo;
int slcQuantidade;

void menuprincipal()
{

    int vetorInvertido = NULL;

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
        menuquantidade(slcQuantidade);

        double tempos[10];
        for (int i = 0; i < 10; i++)
        {
            int *vetor = criaVetor(slcQuantidade);
            if (vetor == NULL)
            {
                printf("Erro ao alocar memória\n");
                return;
            }

            TIME_IT(bubbleSort(vetor, slcQuantidade, &vetorInvertido), tempos[i]);

            liberarVetor(vetor);
        }

        int *vetor = criaVetor(slcQuantidade);
        if (vetor == NULL)
        {
            printf("Erro ao alocar memória\n");
            return;
        }

        bubbleSort(vetor, slcQuantidade, &vetorInvertido);
        liberarVetor(vetor);

        double media = mediaTempo(tempos, 10);
        double melhor = tempos[0], pior = tempos[0];
        double tempoTotal = 0;
        for (int i = 0; i < 10; i++)
        {
            tempoTotal += tempos[i];
            if (tempos[i] < melhor) melhor = tempos[i];
            if (tempos[i] > pior) pior = tempos[i];
        }

        salvaResultados("BubbleSort", slcQuantidade, tempoTotal, media, melhor, pior);
        exibirAlgoritmo("BubbleSort", slcQuantidade, tempoTotal, media, melhor, pior);
    }
    break;



    // Insertion Sort
        case 2:
        {
            menuquantidade(slcQuantidade);

            double tempos[10];
            for (int i = 0; i < 10; i++)
            {
                int *vetor = criaVetor(slcQuantidade);
                if (vetor == NULL)
                {
                    printf("Erro ao alocar memória\n");
                    return;
                }

                TIME_IT(insertionSort(vetor, slcQuantidade, &vetorInvertido), tempos[i]);

                liberarVetor(vetor);
            }

            int *vetor = criaVetor(slcQuantidade);
            if (vetor == NULL)
            {
                printf("Erro ao alocar memória\n");
                return;
            }

            insertionSort(vetor, slcQuantidade, &vetorInvertido);
            liberarVetor(vetor);

            double media = mediaTempo(tempos, 10);
            double melhor = tempos[0], pior = tempos[0];
            double tempoTotal = 0;
            for (int i = 0; i < 10; i++)
            {
                tempoTotal += tempos[i];
                if (tempos[i] < melhor) melhor = tempos[i];
                if (tempos[i] > pior) pior = tempos[i];
            }

            salvaResultados("InsertionSort", slcQuantidade, tempoTotal, media, melhor, pior);
            exibirAlgoritmo("InsertionSort", slcQuantidade, tempoTotal, media, melhor, pior);
        }
        break;


    // Selection Sort
    case 3:
    {
        menuquantidade(slcQuantidade);

        double tempos[10];
        for (int i = 0; i < 10; i++)
        {
            int *vetor = criaVetor(slcQuantidade);
            if (vetor == NULL)
            {
                printf("Erro ao alocar memória\n");
                return;
            }

            TIME_IT(selectionSort(vetor, slcQuantidade, &vetorInvertido), tempos[i]);

            liberarVetor(vetor);
        }

        int *vetor = criaVetor(slcQuantidade);
        if (vetor == NULL)
        {
            printf("Erro ao alocar memória\n");
            return;
        }

        selectionSort(vetor, slcQuantidade, &vetorInvertido);
        liberarVetor(vetor);

        double media = mediaTempo(tempos, 10);
        double melhor = tempos[0], pior = tempos[0];
        double tempoTotal = 0;
        for (int i = 0; i < 10; i++)
        {
            tempoTotal += tempos[i];
            if (tempos[i] < melhor) melhor = tempos[i];
            if (tempos[i] > pior) pior = tempos[i];
        }

        salvaResultados("SelectionSort", slcQuantidade, tempoTotal, media, melhor, pior);
        exibirAlgoritmo("SelectionSort", slcQuantidade, tempoTotal, media, melhor, pior);
    }
    break;



    // Shell Sort
    case 4:
    {
        menuquantidade(slcQuantidade);

        double tempos[10];
        for (int i = 0; i < 10; i++)
        {
            int *vetor = criaVetor(slcQuantidade);
            if (vetor == NULL)
            {
                printf("Erro ao alocar memória\n");
                return;
            }

            TIME_IT(ShellSort(vetor, slcQuantidade, &vetorInvertido), tempos[i]);

            liberarVetor(vetor);
        }

        int *vetor = criaVetor(slcQuantidade);
        if (vetor == NULL)
        {
            printf("Erro ao alocar memória\n");
            return;
        }

        ShellSort(vetor, slcQuantidade, &vetorInvertido);
        liberarVetor(vetor);

        double media = mediaTempo(tempos, 10);
        double melhor = tempos[0], pior = tempos[0];
        double tempoTotal = 0;
        for (int i = 0; i < 10; i++)
        {
            tempoTotal += tempos[i];
            if (tempos[i] < melhor) melhor = tempos[i];
            if (tempos[i] > pior) pior = tempos[i];
        }

        salvaResultados("ShellSort", slcQuantidade, tempoTotal, media, melhor, pior);
        exibirAlgoritmo("ShellSort", slcQuantidade, tempoTotal, media, melhor, pior);
    }
    break;


    // Merge Sort
    case 5:
    {
        menuquantidade(slcQuantidade);

        double tempos[10];
        for (int i = 0; i < 10; i++)
        {
            int *vetor = criaVetor(slcQuantidade);
            if (vetor == NULL)
            {
                printf("Erro ao alocar memória\n");
                return;
            }

            TIME_IT(mergesort(vetor, 0, slcQuantidade - 1, &vetorInvertido), tempos[i]);

            liberarVetor(vetor);
        }

        int *vetor = criaVetor(slcQuantidade);
        if (vetor == NULL)
        {
            printf("Erro ao alocar memória\n");
            return;
        }

        mergesort(vetor, 0, slcQuantidade - 1, &vetorInvertido);
        liberarVetor(vetor);

        double media = mediaTempo(tempos, 10);
        double melhor = tempos[0], pior = tempos[0];
        double tempoTotal = 0;
        for (int i = 0; i < 10; i++)
        {
            tempoTotal += tempos[i];
            if (tempos[i] < melhor) melhor = tempos[i];
            if (tempos[i] > pior) pior = tempos[i];
        }

        salvaResultados("MergeSort", slcQuantidade, tempoTotal, media, melhor, pior);
        exibirAlgoritmo("MergeSort", slcQuantidade, tempoTotal, media, melhor, pior);
    }
    break;


    // Quick Sort
    case 6:
    {
        menuquantidade(slcQuantidade);

        double tempos[10];
        for (int i = 0; i < 10; i++)
        {
            int *vetor = criaVetor(slcQuantidade);
            if (vetor == NULL)
            {
                printf("Erro ao alocar memória\n");
                return;
            }

            TIME_IT(quickSort(vetor, 0, slcQuantidade - 1, &vetorInvertido), tempos[i]);

            liberarVetor(vetor);
        }

        int *vetor = criaVetor(slcQuantidade);
        if (vetor == NULL)
        {
            printf("Erro ao alocar memória\n");
            return;
        }

        quickSort(vetor, 0, slcQuantidade - 1, &vetorInvertido);
        liberarVetor(vetor);

        double media = mediaTempo(tempos, 10);
        double melhor = tempos[0], pior = tempos[0];
        double tempoTotal = 0;
        for (int i = 0; i < 10; i++)
        {
            tempoTotal += tempos[i];
            if (tempos[i] < melhor) melhor = tempos[i];
            if (tempos[i] > pior) pior = tempos[i];
        }

        salvaResultados("QuickSort", slcQuantidade, tempoTotal, media, melhor, pior);
        exibirAlgoritmo("QuickSort", slcQuantidade, tempoTotal, media, melhor, pior);
    }
    break;

    // Heap Sort
    case 7:
    {
        menuquantidade(slcQuantidade);

        double tempos[10];
        for (int i = 0; i < 10; i++)
        {
            int *vetor = criaVetor(slcQuantidade);
            if (vetor == NULL)
            {
                printf("Erro ao alocar memória\n");
                return;
            }

            TIME_IT(heapSortAscending(vetor, slcQuantidade, &vetorInvertido), tempos[i]);

            liberarVetor(vetor);
        }

        int *vetor = criaVetor(slcQuantidade);
        if (vetor == NULL)
        {
            printf("Erro ao alocar memória\n");
            return;
        }

        heapSortAscending(vetor, slcQuantidade, &vetorInvertido);
        liberarVetor(vetor);

        double media = mediaTempo(tempos, 10);
        double melhor = tempos[0], pior = tempos[0];
        double tempoTotal = 0;
        for (int i = 0; i < 10; i++)
        {
            tempoTotal += tempos[i];
            if (tempos[i] < melhor) melhor = tempos[i];
            if (tempos[i] > pior) pior = tempos[i];
        }

        salvaResultados("HeapSort", slcQuantidade, tempoTotal, media, melhor, pior);
        exibirAlgoritmo("HeapSort", slcQuantidade, tempoTotal, media, melhor, pior);
    }
    break;


    // Bucket Sort
    case 8:
    {
        menuquantidade(slcQuantidade);

        double tempos[10];
        for (int i = 0; i < 10; i++)
        {
            int *vetor = criaVetor(slcQuantidade);
            if (vetor == NULL)
            {
                printf("Erro ao alocar memória\n");
                return;
            }

            TIME_IT(bucketSort(vetor, slcQuantidade, &vetorInvertido), tempos[i]);

            liberarVetor(vetor);
        }

        int *vetor = criaVetor(slcQuantidade);
        if (vetor == NULL)
        {
            printf("Erro ao alocar memória\n");
            return;
        }

        bucketSort(vetor, slcQuantidade, &vetorInvertido);
        liberarVetor(vetor);

        double media = mediaTempo(tempos, 10);
        double melhor = tempos[0], pior = tempos[0];
        double tempoTotal = 0;
        for (int i = 0; i < 10; i++)
        {
            tempoTotal += tempos[i];
            if (tempos[i] < melhor) melhor = tempos[i];
            if (tempos[i] > pior) pior = tempos[i];
        }

        salvaResultados("BucketSort", slcQuantidade, tempoTotal, media, melhor, pior);
        exibirAlgoritmo("BucketSort", slcQuantidade, tempoTotal, media, melhor, pior);
    }
    break;


    // Radix Sort
     case 9:
    {
        menuquantidade(slcQuantidade);

        double tempos[10];
        for (int i = 0; i < 10; i++)
        {
            int *vetor = criaVetor(slcQuantidade);
            if (vetor == NULL)
            {
                printf("Erro ao alocar memória\n");
                return;
            }

            TIME_IT(radixSort(vetor, slcQuantidade, &vetorInvertido), tempos[i]);

            liberarVetor(vetor);
        }

        int *vetor = criaVetor(slcQuantidade);
        if (vetor == NULL)
        {
            printf("Erro ao alocar memória\n");
            return;
        }

        radixSort(vetor, slcQuantidade, &vetorInvertido);
        liberarVetor(vetor);

        double media = mediaTempo(tempos, 10);
        double melhor = tempos[0], pior = tempos[0];
        double tempoTotal = 0;
        for (int i = 0; i < 10; i++)
        {
            tempoTotal += tempos[i];
            if (tempos[i] < melhor) melhor = tempos[i];
            if (tempos[i] > pior) pior = tempos[i];
        }

        salvaResultados("RadixSort", slcQuantidade, tempoTotal, media, melhor, pior);
        exibirAlgoritmo("RadixSort", slcQuantidade, tempoTotal, media, melhor, pior);
    }
    break;


    // Counting Sort
    case 10:
    {
        menuquantidade(slcQuantidade);

        double tempos[10];
        for (int i = 0; i < 10; i++)
        {
            int *vetor = criaVetor(slcQuantidade);
            if (vetor == NULL)
            {
                printf("Erro ao alocar memória\n");
                return;
            }

            TIME_IT(countingSort(vetor, slcQuantidade, &vetorInvertido), tempos[i]);

            liberarVetor(vetor);
        }

        int *vetor = criaVetor(slcQuantidade);
        if (vetor == NULL)
        {
            printf("Erro ao alocar memória\n");
            return;
        }

        countingSort(vetor, slcQuantidade, &vetorInvertido);

        liberarVetor(vetor);

        double media = mediaTempo(tempos, 10);
        double melhor = tempos[0], pior = tempos[0];
        double tempoTotal = 0;
        for (int i = 0; i < 10; i++)
        {
            tempoTotal += tempos[i];

            if (i > 0)
            {
                if (tempos[i] < melhor)
                    melhor = tempos[i];
                if (tempos[i] > pior)
                    pior = tempos[i];
            }
        }

        salvaResultados("CountingSort", slcQuantidade, tempoTotal, media, melhor, pior);
        exibirAlgoritmo("CountingSort", slcQuantidade, tempoTotal, media, melhor, pior);
    }
    break;

    // Tim Sort
    case 11:
    {
        menuquantidade(slcQuantidade);

        double tempos[10];
        for (int i = 0; i < 10; i++)
        {
            int *vetor = criaVetor(slcQuantidade);
            if (vetor == NULL)
            {
                printf("Erro ao alocar memória\n");
                return;
            }

            TIME_IT(timSort(vetor, slcQuantidade, &vetorInvertido), tempos[i]);

            liberarVetor(vetor);
        }

        int *vetor = criaVetor(slcQuantidade);
        if (vetor == NULL)
        {
            printf("Erro ao alocar memória\n");
            return;
        }

        timSort(vetor, slcQuantidade, &vetorInvertido);
        liberarVetor(vetor);

        double media = mediaTempo(tempos, 10);
        double melhor = tempos[0], pior = tempos[0];
        double tempoTotal = 0;
        for (int i = 0; i < 10; i++)
        {
            tempoTotal += tempos[i];
            if (tempos[i] < melhor) melhor = tempos[i];
            if (tempos[i] > pior) pior = tempos[i];
        }

        salvaResultados("TimSort", slcQuantidade, tempoTotal, media, melhor, pior);
        exibirAlgoritmo("TimSort", slcQuantidade, tempoTotal, media, melhor, pior);
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
}

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
        menuquantidade(slcQuantidade);
        break;
    }
    printf("A quantidade de elementos escolhida foi: %d\n", slcQuantidade);
}
