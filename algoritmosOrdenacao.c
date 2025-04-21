#include <stdio.h>
#include <stdlib.h>
#include "algoritmosOrdenacao.h"

int elementoDaestrutura = 0;

struct timeval{
    long int tv_sec; 
    long int tv_usec; 
};   


Algoritmo Algoritmos[11];

//////// COUNTING SORT
void countingSort(int inputArray[], int numElementos, int *VetorInvetido) {
    // 1º Passo:
    // Encontrar o maior número no array
    int maiorNumero = 0;
    for (int i = 0; i < numElementos; i++){
        if (inputArray[i] > maiorNumero){
            maiorNumero = inputArray[i];
        }
    }

    // 2º Passo:
    // Inicializar um array auxiliar, sendo que
    // o tamanho dele será igual ao MAIOR NÚMERO
    // encontrado no array de input
    int* auxArray = (int*)calloc(maiorNumero + 1, sizeof(int));

    // 3º Passo:
    // Utilizaremos os índices do array auxiliar
    // para contabilizar a quantidade de aparições
    // de cada número no nosso array de input
    for (int i = 0; i < numElementos; i++){
        auxArray[inputArray[i]]++;
    }

    // 4º Passo:
    // Para cada index do array auxiliar
    // Calcularemos a soma acumulativa dos index anteriores
    // Ex: {0, 1, 4, 2, 0, 0, 1} -> {0, 1, 5, 7, 7, 7, 8}
    for (int i = 1; i <= maiorNumero; i++){
        auxArray[i] += auxArray[i - 1];
    }

    // 5º Passo:
    // Criamos o array de output, onde conterá os números ordenados
    // Percorremos o array de input de trás para frente, garantindo
    // que elementos iguais mantenham a ordem original (estabilidade).
    // Cada número é colocado na posição correta no array ordenado
    // e decrementamos o array auxiliar para os números que já foram processados
    int* arrayOrdenado = (int*)malloc(numElementos * sizeof(int));
    for (int i = numElementos - 1; i >= 0; i--){
        arrayOrdenado[auxArray[inputArray[i]] - 1] = inputArray[i];
        auxArray[inputArray[i]]--;
    }

    // 6º Passo:
    // Copiaremos os elementos do array ordenado para o array de input
    // Apenas faremos isso pois essa função não retorna um novo array,
    // E sim ordena no próprio array que foi passado.
    for (int i = 0; i < numElementos; i++){
        inputArray[i] = arrayOrdenado[i];
    }

    // Liberando a memória alocada
    free(auxArray);
    free(arrayOrdenado);
}

//////// MERGE SORT
void mergesort(int *v, int inicio, int fim, int *VetorInvetido){
    int meio;
    if(inicio < fim){
        meio = (inicio + fim) / 2;
        mergesort(v, inicio, meio, VetorInvetido);
        mergesort(v, meio+1, fim, VetorInvetido);
        merge(v, inicio, meio, fim, VetorInvetido);
    }
}

void merge(int *v, int inicio, int meio, int fim, int *VetorInvetido){
    int *temp, p1, p2, tamanho,i ,j, k;
    int fim1 = 0, fim2 = 0;
    tamanho = fim - inicio + 1; //tamanho do novo vetor
    p1 = inicio;
    p2 = meio+1;
    temp = (int *) malloc(tamanho*sizeof(int));
    if(temp != NULL){
        for(i = 0; i<tamanho; i++){/*continua at'e preencher todos os indices do novo vetor*/
            if(fim1 == 0 && fim2 == 0){/*veifica se algum dos subvetores chegou ao final*/
                //------ordenando-------
                if(v[p1] < v[p2]){
                    temp[i] = v[p1];
                    p1++;
                }else{
                    temp[i] = v[p2];
                    p2++;
                }
                //-----verificando se o vetor acabou------
                if(p1> meio) {fim1 = 1;}
                if(p2> fim) {fim2 = 1;}

            }else{
                if(fim1 == 1){/*foi o p1 que acabou? Copia o resto do p1 no vetor*/
                    temp[i] = v[p2];
                    p2++;
                }else{        /*foi o p2 que acabou? copia o resto do p1 no vetor*/
                    temp[i] = v[p1];
                    p1++;
                }
            }
        }
        //----copiando temp para o vetor passado como parametro;
        for(j = 0, k= inicio; j<tamanho; j++, k++){
            v[k] = temp[j];
        }
    }
    free(temp);//liberar o vetor temporario
}

//////// HEAP SORT
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Função para criar um Max-Heap
void maxHeapify(int arr[], int n, int i) {
    int largest = i; // Inicializa o maior como o nó
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        maxHeapify(arr, n, largest);
    }
}

// Função HeapSort usando Max-Heap (ordem crescente)
void heapSortAscending(int arr[], int n, int *VetorInvetido) {
    for (int i = n / 2 - 1; i >= 0; i--)
        maxHeapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(&arr[0], &arr[i]);
        maxHeapify(arr, i, 0);
    }
}

//////// SHELL SORT
void ShellSort(int arr[], int tam, int *VetorInvetido) {
    int intervalo, aux, i, j;
    for (intervalo = tam / 2; intervalo > 0; intervalo /= 2) {
        for (i = intervalo; i < tam; i++) {
            aux = arr[i];
            for (j = i; j >= intervalo && arr[j - intervalo] > aux; j -= intervalo) {
                arr[j] = arr[j - intervalo];
            }
            arr[j] = aux;
        }
    }
}

//////// TIM SORT

int min(int a, int b) {
    return (a < b) ? a : b;
}

// Insertion Sort
void insertSort(int array[], int esq, int dir, int *VetorInvetido) {
    for (int i = esq + 1; i <= dir; i++) {
        int chave = array[i];
        int j = i - 1;
        while (j >= esq && array[j] > chave) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = chave;
    }
}
void timSort(int array[], int n, int *VetorInvetido) {
    int runSize = 1;
    while (runSize * runSize < n) {
        runSize++;
    }

    // Ordena pequenas partes com insertion sort
    for (int i = 0; i < n; i += runSize) {
        insertSort(array, i, min((i + runSize - 1), (n - 1)), VetorInvetido);
    }

    // Mescla as partes ordenadas usando mergesort
    for (int tam = runSize; tam < n; tam = 2 * tam) {
        for (int esq = 0; esq < n; esq += 2 * tam) {
            int meio = esq + tam - 1;
            int dir = min((esq + 2 * tam - 1), (n - 1));
            if (meio < dir) {
                mergesort(array, esq, dir, VetorInvetido);
            }
        }
    }
}

//////// BUCKET SORT

typedef struct {
    int *valor;
    int tamanho;
    int capacidade;
} Balde;

void bucketSort(int *vetor, int tamanho, int *VetorInvetido) {
    if (tamanho <= 0) return;

    int max = vetor[0];
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > max) {
            max = vetor[i];
        }
    }

    // Define número de baldes com base no tamanho da entrada
    int numBuckets = tamanho;

    // Criação e inicialização dos baldes
    Balde *baldes = (Balde *) malloc(numBuckets * sizeof(Balde));
    for (int i = 0; i < numBuckets; i++) {
        baldes[i].tamanho = 0;
        baldes[i].capacidade = 5;
        baldes[i].valor = (int *) malloc(baldes[i].capacidade * sizeof(int));
    }

    // Distribui os elementos nos baldes
    for (int i = 0; i < tamanho; i++) {
        int indice = (vetor[i] * numBuckets) / (max + 1);
        if (baldes[indice].tamanho == baldes[indice].capacidade) {
            baldes[indice].capacidade *= 2;
            baldes[indice].valor = (int *) realloc(baldes[indice].valor, baldes[indice].capacidade * sizeof(int));
        }
        baldes[indice].valor[baldes[indice].tamanho++] = vetor[i];
    }

    // Ordena os baldes e reconstrói o vetor
    int k = 0;
    for (int i = 0; i < numBuckets; i++) {
        if (baldes[i].tamanho > 0) {
            insertSort(baldes[i].valor, 0, baldes[i].tamanho - 1, VetorInvetido);
            for (int j = 0; j < baldes[i].tamanho; j++) {
                vetor[k++] = baldes[i].valor[j];
            }
        }
        free(baldes[i].valor);
    }

    free(baldes);
}

//////// RADIX SORT

// Uma fun��o para realizar o ordenamento por contagem
// de arr[] de acordo com o d�gito representado por exp
void countingSortBase10(int inputArray[], int numElementos, int exp, int *VetorInvetido) {
    int* auxArray = (int*)calloc(10, sizeof(int));  // base 10
    int* arrayOrdenado = (int*)malloc(numElementos * sizeof(int));

    if (auxArray == NULL || arrayOrdenado == NULL) {
        printf("Erro ao alocar memória\n");
        return;
    }

    // Conta as ocorrências dos dígitos (de 0 a 9)
    for (int i = 0; i < numElementos; i++) {
        int digito = (inputArray[i] / exp) % 10;
        auxArray[digito]++;
    }

    // Soma acumulada
    for (int i = 1; i < 10; i++) {
        auxArray[i] += auxArray[i - 1];
    }

    // Ordena com base no dígito
    for (int i = numElementos - 1; i >= 0; i--) {
        int digito = (inputArray[i] / exp) % 10;
        arrayOrdenado[auxArray[digito] - 1] = inputArray[i];
        auxArray[digito]--;
    }

    // Copia para o vetor original
    for (int i = 0; i < numElementos; i++) {
        inputArray[i] = arrayOrdenado[i];
    }

    free(auxArray);
    free(arrayOrdenado);
}

// A fun��o principal para ordenar arr[] de tamanho n
// usando o Radix Sort
unsigned int getMax(int *arr, int n) {
    unsigned int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}

void radixSort(int *arr, int n, int *VetorInvetido) {
    int max = getMax(arr, n);
    for (int exp = 1; max / exp > 0; exp *= 10) {
        countingSortBase10(arr, n, exp, VetorInvetido);
    }
}

//////// QUICK SORT
void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Fun��o de parti��o
int divisao(int arr[], int low, int high) {
    int pivot = arr[high];  // Escolhe o �ltimo elemento como piv�
    int i = (low - 1); // �ndice do menor elemento

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) { // Se o elemento for menor que o piv�
            i++; // Move o �ndice do menor elemento
            troca(&arr[i], &arr[j]); // Troca os elementos
        }
    }
    troca(&arr[i + 1], &arr[high]); // Coloca o piv� na posi��o correta
    return (i + 1); // Retorna o �ndice do piv�
}

// Implementa��o recursiva do QuickSort
void quickSort(int arr[], int low, int high, int *VetorInvetido) {
    if (low < high) {
        int pi = divisao(arr, low, high); // Encontra o �ndice do piv�

        // Chama o QuickSort recursivamente para as duas metades
        quickSort(arr, low, pi - 1, VetorInvetido); // Antes do piv�
        quickSort(arr, pi + 1, high, VetorInvetido); // Depois do piv�
    }
}

//////// BUBBLE SORT


void bubbleSort(int arr[], int n, int *VetorInvetido) {
    for (int i = 0; i < n - 1; i++) {
        // Últimos i elementos já estão no lugar
        for (int j = 0; j < n - i - 1; j++) {
            // Troca se o elemento atual é maior que o próximo
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


//////// SELECT SORT

void selectionSort(int arr[], int n, int *VetorInvetido) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}


int salvaResultados(char nome[], int tamanho, double tempoTotal, double melhorCaso, double piorCaso) {
    if (elementoDaestrutura >= 11) {
        printf("Limite de algoritmos atingido.\n");
        return -1;
    }

    strcpy(Algoritmos[elementoDaestrutura].nome, nome);  
    Algoritmos[elementoDaestrutura].tamanho = tamanho;
    Algoritmos[elementoDaestrutura].tempoTotal = tempoTotal;
    Algoritmos[elementoDaestrutura].melhorCaso = melhorCaso;
    Algoritmos[elementoDaestrutura].piorCaso = piorCaso;

    elementoDaestrutura++;
    return 0;
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


void exibeTodosOsAlgoritmos(){
    printf("Algoritmos Salvos:\n");
    for (int i = 0; i < 11; i++){
        printf("---------------ALGORITIMOS--------------------\n");
        exibirAlgoritmo(Algoritmos[i].nome, Algoritmos[i].tamanho, Algoritmos[i].tempoTotal, Algoritmos[i].melhorCaso, Algoritmos[i].piorCaso);
    }
}

double mediaTempo(int *v, int tamanho){

    double totalTempo = 0.0;

    for(int i = 0; i < tamanho; i++){
       totalTempo += v[i];
    }
    
    totalTempo = totalTempo / tamanho;

    return totalTempo;
}

int* criaVetor(int tamanho) {
    int *vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória para o vetor.\n");
        return NULL; 
    }

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = rand() % tamanho; 
    }

    return vetor;  
}

void liberarVetor(int *array){
    free(array);
}

void imprimirVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void inverteVetor(int *array, int tamanho){
    for (int i = 0; i < tamanho / 2; i++){
        int temp = array[i];
        array[i] = array[tamanho - i - 1];
        array[tamanho - i - 1] = temp;
    }
}