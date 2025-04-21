#ifndef ALGORITMOSORDENACAO_H_INCLUDED
#define ALGORITMOSORDENACAO_H_INCLUDED

typedef struct  timeval;  

typedef struct {
    char nome[40];
    int tamanho;
    double tempoTotal;
    double melhorCaso;
    double piorCaso;
} Algoritmo;  

// COUNTING SORT
void countingSort(int inputArray[], int numElementos, int *VetorInvetido);

// MERGE SORT
void mergesort(int *v, int inicio, int fim, int *VetorInvetido);
void merge(int *v, int inicio, int meio, int fim, int *VetorInvetido);

// HEAP SORT
void heapSortAscending(int arr[], int n, int *VetorInvetido);

// SHELL SORT
void ShellSort(int arr[], int tam, int *VetorInvetido);

// TIM SORT
void timSort(int array[], int n, int *VetorInvetido);

void bucketSort(int *vetor, int tamanho, int *VetorInvetido);

// RADIX SORT
void countingSortBase10(int inputArray[], int numElementos, int exp, int *VetorInvetido);
unsigned int getMax(int *arr, int n);
void radixSort(int *arr, int n, int *VetorInvetido);

// QUICK SORT
void quickSort(int arr[], int low, int high, int *VetorInvetido);


//INSERTION SORT
void insertSort(int array[], int esq, int dir, int *VetorInvetido);

//BUBBLE SORT
void bubbleSort(int arr[], int n, int *VetorInvetido);

//SELECT SORT
void selectionSort(int arr[], int n, int *VetorInvetido);

int* criaVetor(int tamanho);

void inverteVetor(int *array, int tamanho);

void liberarVetor(int *array);

double mediaTempo(int *v, int tamanho);

int salvaResultados( char nome[], int tamanho, double tempoTotal, double melhorCaso, double piorCaso);

void imprimirVetor(int vetor[], int tamanho);

#endif // ALGORITMOSORDENACAO_H_INCLUDED
