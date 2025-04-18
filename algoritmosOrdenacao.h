#ifndef ALGORITMOSORDENACAO_H_INCLUDED
#define ALGORITMOSORDENACAO_H_INCLUDED

void countingSort(int inputArray[], int numElementos);

void mergesort(int *v, int inicio, int fim);
void merge(int *v, int inicio, int meio, int fim);

void swap(int *a, int *b);
void maxHeapify(int arr[], int n, int i);
void heapSortAscending(int arr[], int n);

void ShellSort(int arr[], int tam);


#endif // ALGORITMOSORDENACAO_H_INCLUDED
