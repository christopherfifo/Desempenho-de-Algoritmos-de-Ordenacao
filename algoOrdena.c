#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "algoOrdena.h"
#include "algoritmosOrdenacao.h"

    int slcAlgoritmo;
    int slcQuantidade;

void menuprincipal(){
    
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

    switch(slcAlgoritmo) {
        // Bubble Sort
        case 1: {
            menuquantidade(slcQuantidade);
    
            for (int i = 0; i < 10; i++) {
                int *vetor = criaVetor(slcQuantidade);
                if (vetor == NULL) {
                    printf("Erro ao alocar memória\n");
                    return;
                }
                printf("\nVetor de %d elementos:\n", slcQuantidade);
                imprimirVetor(vetor, slcQuantidade);
                printf("\n\n");
        
                bubbleSort(vetor, slcQuantidade, NULL);
                printf("Bubble Sort: ");
                imprimirVetor(vetor, slcQuantidade);
                liberarVetor(vetor);
            }
            
            int *vetor = criaVetor(slcQuantidade);
            if (vetor == NULL) {
                printf("Erro ao alocar memória\n");
                return;
            }
    
            printf("\nVetor ordenado:\n");
            imprimirVetor(vetor, slcQuantidade);
            bubbleSort(vetor, slcQuantidade, 2);
            
            printf("Vetor invertido:\n");
            imprimirVetor(vetor, slcQuantidade);
            liberarVetor(vetor);
        }
        break;
    
        // Insertion Sort
        case 2: {
            menuquantidade(slcQuantidade);
    
            for (int i = 0; i < 10; i++) {
                int *vetor = criaVetor(slcQuantidade);
                if (vetor == NULL) {
                    printf("Erro ao alocar memória\n");
                    return;
                }
                printf("\nVetor de %d elementos:\n", slcQuantidade);
                imprimirVetor(vetor, slcQuantidade);
                printf("\n\n");
        
                insertSort(vetor, 0, slcQuantidade - 1, NULL);
                printf("Insertion Sort: ");
                imprimirVetor(vetor, slcQuantidade);
                liberarVetor(vetor);
            }
            
            int *vetor = criaVetor(slcQuantidade);
            if (vetor == NULL) {
                printf("Erro ao alocar memória\n");
                return;
            }
    
            printf("\nVetor ordenado:\n");
            imprimirVetor(vetor, slcQuantidade);
            insertSort(vetor, 0, slcQuantidade - 1, 2);
            
            printf("Vetor invertido:\n");
            imprimirVetor(vetor, slcQuantidade);
            liberarVetor(vetor);
        }
        break;
    
        // Selection Sort
        case 3: {
            menuquantidade(slcQuantidade);
    
            for (int i = 0; i < 10; i++) {
                int *vetor = criaVetor(slcQuantidade);
                if (vetor == NULL) {
                    printf("Erro ao alocar memória\n");
                    return;
                }
                printf("\nVetor de %d elementos:\n", slcQuantidade);
                imprimirVetor(vetor, slcQuantidade);
                printf("\n\n");
        
                selectionSort(vetor, slcQuantidade, NULL);
                printf("Selection Sort: ");
                imprimirVetor(vetor, slcQuantidade);
                liberarVetor(vetor);
            }
            
            int *vetor = criaVetor(slcQuantidade);
            if (vetor == NULL) {
                printf("Erro ao alocar memória\n");
                return;
            }
    
            printf("\nVetor ordenado:\n");
            imprimirVetor(vetor, slcQuantidade);
            selectionSort(vetor, slcQuantidade, 2);
            
            printf("Vetor invertido:\n");
            imprimirVetor(vetor, slcQuantidade);
            liberarVetor(vetor);
        }
        break;
    
        // Shell Sort
        case 4: {
            menuquantidade(slcQuantidade);
    
            for (int i = 0; i < 10; i++) {
                int *vetor = criaVetor(slcQuantidade);
                if (vetor == NULL) {
                    printf("Erro ao alocar memória\n");
                    return;
                }
                printf("\nVetor de %d elementos:\n", slcQuantidade);
                imprimirVetor(vetor, slcQuantidade);
                printf("\n\n");
        
                ShellSort(vetor, slcQuantidade, NULL);
                printf("Shell Sort: ");
                imprimirVetor(vetor, slcQuantidade);
                liberarVetor(vetor);
            }
            
            int *vetor = criaVetor(slcQuantidade);
            if (vetor == NULL) {
                printf("Erro ao alocar memória\n");
                return;
            }
    
            printf("\nVetor ordenado:\n");
            imprimirVetor(vetor, slcQuantidade);
            ShellSort(vetor, slcQuantidade, 2);
            
            printf("Vetor invertido:\n");
            imprimirVetor(vetor, slcQuantidade);
            liberarVetor(vetor);
        }
        break;
    
        // Merge Sort 
        case 5: {
            menuquantidade(slcQuantidade);
    
            for (int i = 0; i < 10; i++) {
                int *vetor = criaVetor(slcQuantidade);
                if (vetor == NULL) {
                    printf("Erro ao alocar memória\n");
                    return;
                }
                printf("\nVetor de %d elementos:\n", slcQuantidade);
                imprimirVetor(vetor, slcQuantidade);
                printf("\n\n");
        
                mergesort(vetor, 0, slcQuantidade - 1, NULL);
                printf("Merge Sort: ");
                imprimirVetor(vetor, slcQuantidade);
                liberarVetor(vetor);
            }
            
            int *vetor = criaVetor(slcQuantidade);
            if (vetor == NULL) {
                printf("Erro ao alocar memória\n");
                return;
            }
    
            printf("\nVetor ordenado:\n");
            imprimirVetor(vetor, slcQuantidade);
            mergesort(vetor, 0, slcQuantidade - 1, 2);
            
            printf("Vetor invertido:\n");
            imprimirVetor(vetor, slcQuantidade);
            liberarVetor(vetor);
        }
        break;
    
        // Quick Sort
        case 6: {
            menuquantidade(slcQuantidade);
    
            for (int i = 0; i < 10; i++) {
                int *vetor = criaVetor(slcQuantidade);
                if (vetor == NULL) {
                    printf("Erro ao alocar memória\n");
                    return;
                }
                printf("\nVetor de %d elementos:\n", slcQuantidade);
                imprimirVetor(vetor, slcQuantidade);
                printf("\n\n");
        
                quickSort(vetor, 0, slcQuantidade - 1, NULL);
                printf("Quick Sort: ");
                imprimirVetor(vetor, slcQuantidade);
                liberarVetor(vetor);
            }
            
            int *vetor = criaVetor(slcQuantidade);
            if (vetor == NULL) {
                printf("Erro ao alocar memória\n");
                return;
            }
    
            printf("\nVetor ordenado:\n");
            imprimirVetor(vetor, slcQuantidade);
            quickSort(vetor, 0, slcQuantidade - 1, 2);
            
            printf("Vetor invertido:\n");
            imprimirVetor(vetor, slcQuantidade);
            liberarVetor(vetor);
        }
        break;
    
        // Heap Sort
        case 7: {
            menuquantidade(slcQuantidade);
    
            for (int i = 0; i < 10; i++) {
                int *vetor = criaVetor(slcQuantidade);
                if (vetor == NULL) {
                    printf("Erro ao alocar memória\n");
                    return;
                }
                printf("\nVetor de %d elementos:\n", slcQuantidade);
                imprimirVetor(vetor, slcQuantidade);
                printf("\n\n");
        
                heapSortAscending(vetor, slcQuantidade, NULL);
                printf("Heap Sort: ");
                imprimirVetor(vetor, slcQuantidade);
                liberarVetor(vetor);
            }
            
            int *vetor = criaVetor(slcQuantidade);
            if (vetor == NULL) {
                printf("Erro ao alocar memória\n");
                return;
            }
    
            printf("\nVetor ordenado:\n");
            imprimirVetor(vetor, slcQuantidade);
            heapSortAscending(vetor, slcQuantidade, 2);
            
            printf("Vetor invertido:\n");
            imprimirVetor(vetor, slcQuantidade);
            liberarVetor(vetor);
        }
        break;
    
        // Bucket Sort
        case 8: {
            menuquantidade(slcQuantidade);
    
            for (int i = 0; i < 10; i++) {
                int *vetor = criaVetor(slcQuantidade);
                if (vetor == NULL) {
                    printf("Erro ao alocar memória\n");
                    return;
                }
                printf("\nVetor de %d elementos:\n", slcQuantidade);
                imprimirVetor(vetor, slcQuantidade);
                printf("\n\n");
        
                bucketSort(vetor, slcQuantidade, NULL);
                printf("Bucket Sort: ");
                imprimirVetor(vetor, slcQuantidade);
                liberarVetor(vetor);
            }
            
            int *vetor = criaVetor(slcQuantidade);
            if (vetor == NULL) {
                printf("Erro ao alocar memória\n");
                return;
            }
    
            printf("\nVetor ordenado:\n");
            imprimirVetor(vetor, slcQuantidade);
            bucketSort(vetor, slcQuantidade, 2);
            
            printf("Vetor invertido:\n");
            imprimirVetor(vetor, slcQuantidade);
            liberarVetor(vetor);
        }
        break;
    
        // Radix Sort
        case 9: {
            menuquantidade(slcQuantidade);
    
            for (int i = 0; i < 10; i++) {
                int *vetor = criaVetor(slcQuantidade);
                if (vetor == NULL) {
                    printf("Erro ao alocar memória\n");
                    return;
                }
                printf("\nVetor de %d elementos:\n", slcQuantidade);
                imprimirVetor(vetor, slcQuantidade);
                printf("\n\n");
        
                radixSort(vetor, slcQuantidade, NULL);
                printf("Radix Sort: ");
                imprimirVetor(vetor, slcQuantidade);
                liberarVetor(vetor);
            }
            
            int *vetor = criaVetor(slcQuantidade);
            if (vetor == NULL) {
                printf("Erro ao alocar memória\n");
                return;
            }
    
            printf("\nVetor ordenado:\n");
            imprimirVetor(vetor, slcQuantidade);
            radixSort(vetor, slcQuantidade, 2);
            
            printf("Vetor invertido:\n");
            imprimirVetor(vetor, slcQuantidade);
            liberarVetor(vetor);
        }
        break;
    
        // Counting Sort
        case 10: {
            menuquantidade(slcQuantidade);
    
            for (int i = 0; i < 10; i++) {
                int *vetor = criaVetor(slcQuantidade);
                if (vetor == NULL) {
                    printf("Erro ao alocar memória\n");
                    return;
                }
                printf("\nVetor de %d elementos:\n", slcQuantidade);
                imprimirVetor(vetor, slcQuantidade);
                printf("\n\n");
        
                countingSort(vetor, slcQuantidade, NULL);
                printf("Counting Sort: ");
                imprimirVetor(vetor, slcQuantidade);
                liberarVetor(vetor);
            }
            
            int *vetor = criaVetor(slcQuantidade);
            if (vetor == NULL) {
                printf("Erro ao alocar memória\n");
                return;
            }
    
            printf("\nVetor ordenado:\n");
            imprimirVetor(vetor, slcQuantidade);
            countingSort(vetor, slcQuantidade, 2);
            
            printf("Vetor invertido:\n");
            imprimirVetor(vetor, slcQuantidade);
            liberarVetor(vetor);
        }
        break;
    
        // Tim Sort
        case 11: {
            menuquantidade(slcQuantidade);
    
            for (int i = 0; i < 10; i++) {
                int *vetor = criaVetor(slcQuantidade);
                if (vetor == NULL) {
                    printf("Erro ao alocar memória\n");
                    return;
                }
                printf("\nVetor de %d elementos:\n", slcQuantidade);
                imprimirVetor(vetor, slcQuantidade);
                printf("\n\n");
        
                timSort(vetor, slcQuantidade, NULL);
                printf("Tim Sort: ");
                imprimirVetor(vetor, slcQuantidade);
                liberarVetor(vetor);
            }
            
            int *vetor = criaVetor(slcQuantidade);
            if (vetor == NULL) {
                printf("Erro ao alocar memória\n");
                return;
            }
    
            printf("\nVetor ordenado:\n");
            imprimirVetor(vetor, slcQuantidade);
            timSort(vetor, slcQuantidade, 2);
            
            printf("Vetor invertido:\n");
            imprimirVetor(vetor, slcQuantidade);
            liberarVetor(vetor);
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



void menuquantidade(){
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

    switch(slcQuantidade){
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
