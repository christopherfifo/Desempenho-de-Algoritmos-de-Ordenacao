#include <stdio.h>
#include <stdlib.h>
#include "algoOrdena.h"
#include "algoritmosOrdenacao.h"

void imprimirVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main() {
    int vetor[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]); // O tamanho só ta definido aqui pq eu
                                                    // pus o mesmo vetor p todo mundo, mas
                                                    // obviamente a variavel tamanho vai ser
                                                    // escolhida no programa lá seguindo a
                                                    // lógica do PDF

    // Counting Sort
    countingSort(vetor, tamanho);
    printf("Counting Sort: ");
    imprimirVetor(vetor, tamanho);

    // Merge Sort
    int vetorMerge[] = {170, 45, 75, 90, 802, 24, 2, 66};
    mergesort(vetorMerge, 0, tamanho - 1);
    printf("Merge Sort: ");
    imprimirVetor(vetorMerge, tamanho);

    // Heap Sort
    int vetorHeap[] = {170, 45, 75, 90, 802, 24, 2, 66};
    heapSortAscending(vetorHeap, tamanho);
    printf("Heap Sort: ");
    imprimirVetor(vetorHeap, tamanho);

    // Shell Sort
    int vetorShell[] = {170, 45, 75, 90, 802, 24, 2, 66};
    ShellSort(vetorShell, tamanho);
    printf("Shell Sort: ");
    imprimirVetor(vetorShell, tamanho);

    // Bucket Sort
    int vetorBucket[] = {170, 45, 75, 90, 802, 24, 2, 66};
    bucketSort(vetorBucket, tamanho);
    printf("Bucket Sort: ");
    imprimirVetor(vetorBucket, tamanho);

    // Radix Sort
    int vetorRadix[] = {170, 45, 75, 90, 802, 24, 2, 66};
    radixSort(vetorRadix, tamanho);
    printf("Radix Sort: ");
    imprimirVetor(vetorRadix, tamanho);

    // Quick Sort
    int vetorQuick[] = {170, 45, 75, 90, 802, 24, 2, 66};
    quickSort(vetorQuick, 0, tamanho - 1);
    printf("Quick Sort: ");
    imprimirVetor(vetorQuick, tamanho);

    // Insert Sort
    int vetorInsert[] = {170, 45, 75, 90, 802, 24, 2, 66};
    insertSort(vetorInsert, 0, tamanho - 1);
    printf("Insert Sort: ");
    imprimirVetor(vetorInsert, tamanho);

     // Select Sort
    int vetorSelect[] = {19 ,18 ,17, 14, 13, 12, 11, 20, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    selectionSort(vetorSelect, tamanho);
    printf("Select Sort: ");
    imprimirVetor(vetorSelect, tamanho);




    return 0;
}
