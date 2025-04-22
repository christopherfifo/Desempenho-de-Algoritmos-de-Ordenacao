#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

    switch(slcQuantidade)
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
        for(int i = 0; i < 12; i++){
            if(i == 10){
                //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
                bubbleSort(vetor, slcQuantidade);
                // TEMPOS[i] = tempo da funcao de tempo
                continue;
            }
            if(i == 11){
                inverteVetor(vetor, slcQuantidade);
                //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
                bubbleSort(vetor, slcQuantidade);
                // TEMPOS[i] = tempo da funcao de tempo
                continue;
            }
            criaVetor(vetor, slcQuantidade);
            //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
            bubbleSort(vetor, slcQuantidade);
            // TEMPOS[i] = tempo da funcao de tempo
        }
    }
    break;
    // Insertion Sort
    case 2:
    {
        double TEMPOS[12];
        for(int i = 0; i < 12; i++){
            if(i == 10){
                //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
                insertSort(vetor, 0, slcQuantidade-1);
                // TEMPOS[i] = tempo da funcao de tempo
                continue;
            }
            if(i == 11){
                inverteVetor(vetor, slcQuantidade);
                //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
                insertSort(vetor, 0, slcQuantidade-1);
                // TEMPOS[i] = tempo da funcao de tempo
                continue;
            }
            criaVetor(vetor, slcQuantidade);
            //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
            insertSort(vetor, 0, slcQuantidade-1);
            // TEMPOS[i] = tempo da funcao de tempo
        }
    }
    break;
    // Selection Sort
    case 3:
    {
        double TEMPOS[12];
        for(int i = 0; i < 12; i++){
            if(i == 10){
                //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
                selectionSort(vetor, slcQuantidade);
                // TEMPOS[i] = tempo da funcao de tempo
                continue;
            }
            if(i == 11){
                inverteVetor(vetor, slcQuantidade);
                //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
                selectionSort(vetor, slcQuantidade);
                // TEMPOS[i] = tempo da funcao de tempo
                continue;
            }
            criaVetor(vetor, slcQuantidade);
            //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
            selectionSort(vetor, slcQuantidade);
            // TEMPOS[i] = tempo da funcao de tempo
        }
    }
    break;
    // Shell Sort
    case 4:
    {
        double TEMPOS[12];
        for(int i = 0; i < 12; i++){
            if(i == 10){
                //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
                ShellSort(vetor, slcQuantidade);
                // TEMPOS[i] = tempo da funcao de tempo
                continue;
            }
            if(i == 11){
                inverteVetor(vetor, slcQuantidade);
                //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
                ShellSort(vetor, slcQuantidade);
                // TEMPOS[i] = tempo da funcao de tempo
                continue;
            }
            criaVetor(vetor, slcQuantidade);
            //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
            ShellSort(vetor, slcQuantidade);
            // TEMPOS[i] = tempo da funcao de tempo
        }
    }
    break;
    // Merge Sort
    case 5:
    {
        double TEMPOS[12];
        for(int i = 0; i < 12; i++){
            if(i == 10){
                //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
                mergesort(vetor, 0, slcQuantidade-1);
                // TEMPOS[i] = tempo da funcao de tempo
                continue;
            }
            if(i == 11){
                inverteVetor(vetor, slcQuantidade);
                //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
                mergesort(vetor, 0, slcQuantidade-1);
                // TEMPOS[i] = tempo da funcao de tempo
                continue;
            }
            criaVetor(vetor, slcQuantidade);
            //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
            mergesort(vetor, 0, slcQuantidade-1);
            // TEMPOS[i] = tempo da funcao de tempo
        }
    }
    break;


    // Quick Sort
    case 6:
    {
        double TEMPOS[12];
        for(int i = 0; i < 12; i++){
            if(i == 10){
                //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
                quickSort(vetor, 0, slcQuantidade-1);
                // TEMPOS[i] = tempo da funcao de tempo
                continue;
            }
            if(i == 11){
                inverteVetor(vetor, slcQuantidade);
                //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
                quickSort(vetor, 0, slcQuantidade-1);
                // TEMPOS[i] = tempo da funcao de tempo
                continue;
            }
            criaVetor(vetor, slcQuantidade);
            //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
            quickSort(vetor, 0, slcQuantidade-1);
            // TEMPOS[i] = tempo da funcao de tempo
        }
    }
    break;

    // Heap Sort
    case 7:
    {
        double TEMPOS[12];
        for(int i = 0; i < 12; i++){
            if(i == 10){
                //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
                heapSortAscending(vetor, slcQuantidade);
                // TEMPOS[i] = tempo da funcao de tempo
                continue;
            }
            if(i == 11){
                inverteVetor(vetor, slcQuantidade);
                //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
                heapSortAscending(vetor, slcQuantidade);
                // TEMPOS[i] = tempo da funcao de tempo
                continue;
            }
            criaVetor(vetor, slcQuantidade);
            //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
            heapSortAscending(vetor, slcQuantidade);
            // TEMPOS[i] = tempo da funcao de tempo
        }
    }
    break;


    // Bucket Sort
    case 8:
    {
        double TEMPOS[12];
        for(int i = 0; i < 12; i++){
            if(i == 10){
                //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
                bucketSort(vetor, slcQuantidade);
                // TEMPOS[i] = tempo da funcao de tempo
                continue;
            }
            if(i == 11){
                inverteVetor(vetor, slcQuantidade);
                //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
                bucketSort(vetor, slcQuantidade);
                // TEMPOS[i] = tempo da funcao de tempo
                continue;
            }
            criaVetor(vetor, slcQuantidade);
            //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
            bucketSort(vetor, slcQuantidade);
            // TEMPOS[i] = tempo da funcao de tempo
        }
    }
    break;


    // Radix Sort
     case 9:
    {
        double TEMPOS[12];
        for(int i = 0; i < 12; i++){
            if(i == 10){
                //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
                radixSort(vetor, slcQuantidade);
                // TEMPOS[i] = tempo da funcao de tempo
                continue;
            }
            if(i == 11){
                inverteVetor(vetor, slcQuantidade);
                //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
                radixSort(vetor, slcQuantidade);
                // TEMPOS[i] = tempo da funcao de tempo
                continue;
            }
            criaVetor(vetor, slcQuantidade);
            //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
            radixSort(vetor, slcQuantidade);
            // TEMPOS[i] = tempo da funcao de tempo
        }
    }
    break;


    // Counting Sort
    case 10:
    {
        double TEMPOS[12];
        for(int i = 0; i < 12; i++){
            if(i == 10){
                //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
                countingSort(vetor, slcQuantidade);
                // TEMPOS[i] = tempo da funcao de tempo
                continue;
            }
            if(i == 11){
                inverteVetor(vetor, slcQuantidade);
                //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
                countingSort(vetor, slcQuantidade);
                // TEMPOS[i] = tempo da funcao de tempo
                continue;
            }
            criaVetor(vetor, slcQuantidade);
            //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
            countingSort(vetor, slcQuantidade);
            // TEMPOS[i] = tempo da funcao de tempo
        }
    }
    break;

    // Tim Sort
    case 11:
    {
        double TEMPOS[12];
        for(int i = 0; i < 12; i++){
            if(i == 10){
                //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
                timSort(vetor, slcQuantidade);
                // TEMPOS[i] = tempo da funcao de tempo
                continue;
            }
            if(i == 11){
                inverteVetor(vetor, slcQuantidade);
                //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
                timSort(vetor, slcQuantidade);
                // TEMPOS[i] = tempo da funcao de tempo
                continue;
            }
            criaVetor(vetor, slcQuantidade);
            //FUNÇÃO DE TEMPO ENTRA AQUI... eu acho
            timSort(vetor, slcQuantidade);
            // TEMPOS[i] = tempo da funcao de tempo
        }
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
    for(int j = 0; j < 10; j++){
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
