#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "algoOrdena.h"
#include "algoritmosOrdenacao.h"

void menuprincipal(){
    int slcAlgoritmo;
    int slcQuantidade;
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
    printf("Digite o numero corresponde: ");
    scanf("%d", &slcAlgoritmo);

    switch(slcAlgoritmo){
    case 1:
        menuquantidade(slcQuantidade);
        bubblesort(geradorarray(slcQuantidade));
        break;
    case 2:
        menuquantidade(slcQuantidade);
        insertionSort(geradorarray(slcQuantidade));
        break;
    case 3:
        menuquantidade(slcQuantidade);
        selectionSort(geradorarray(slcQuantidade));
        break;
    case 4:
        menuquantidade(slcQuantidade);
        shellSort(geradorarray(slcQuantidade));
        break;
    case 5:
        menuquantidade(slcQuantidade);
        mergeSort(geradorarray(slcQuantidade));
        break;
    case 6:
        menuquantidade(slcQuantidade);
        quickSort(geradorarray(slcQuantidade));
        break;
    case 7:
        menuquantidade(slcQuantidade);
        heapSort(geradorarray(slcQuantidade));
        break;
    case 8:
        menuquantidade(slcQuantidade);
        bucketSort(geradorarray(slcQuantidade));
        break;
    case 9:
        menuquantidade(slcQuantidade);
        radixSort(geradorarray(slcQuantidade));
        break;
    case 10:
        menuquantidade(slcQuantidade);
        countingSort(geradorarray(slcQuantidade));
        break;
    case 11:
        menuquantidade(slcQuantidade);
        timSort(geradorarray(slcQuantidade));
        break;
    }

}

void menuquantidade(int slcQuantidade){
    printf("//////////////////\n");
    printf("ESCOLHA A QUANTIDADE DE ELEMENTOS\n");
    printf("//////////////////\n");
    printf("1 - 10.000\n");
    printf("2 - 50.000\n");
    printf("3 - 100.000\n");
    printf("4 - 200.000\n");
    printf("5 - 500.000\n");
    printf("6 - 1.000.000\n");
    scanf("%d", &slcQuantidade);

}


void exibirAlgoritmo(char nome[], int tamanho, double tempoTotal, double melhorCaso, double piorCaso){
    printf("\n--------------------------------------------------\n");
    printf("Algoritmo: %s\n", nome);
    printf("Tamanho: %d\n", tamanho);
    printf("Tempo Total: %.2f ms\n", tempoTotal);
    printf("Melhor Caso: %.2f ms\n", melhorCaso);
    printf("Pior Caso: %.2f ms\n", piorCaso);
    printf("\n");
};

