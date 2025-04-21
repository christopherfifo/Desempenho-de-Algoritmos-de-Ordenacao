#ifndef ALGORITMOSORDENACAO_H_INCLUDED
#define ALGORITMOSORDENACAO_H_INCLUDED

// COUNTING SORT
void countingSort(int inputArray[], int numElementos);

// MERGE SORT
void mergesort(int *v, int inicio, int fim);
void merge(int *v, int inicio, int meio, int fim);

// HEAP SORT
void heapSortAscending(int arr[], int n);

// SHELL SORT
void ShellSort(int arr[], int tam);

// TIM SORT
void timSort(int array[], int n);

void bucketSort(int *vetor, int tamanho);

// RADIX SORT
void countingSortBase10(int inputArray[], int numElementos, int exp);
unsigned int getMax(int *arr, int n);
void radixSort(int *arr, int n);

// QUICK SORT
void quickSort(int arr[], int low, int high);


//INSERTION SORT
void insertSort(int array[], int esq, int dir);

//BUBBLE SORT
void bubbleSort(int arr[], int n);

//SELECT SORT
void selectionSort(int arr[], int n);


#endif // ALGORITMOSORDENACAO_H_INCLUDED
