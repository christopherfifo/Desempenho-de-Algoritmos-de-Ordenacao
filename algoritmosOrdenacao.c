#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include "algoritmosOrdenacao.h"
#include "algoOrdena.h"

int elementoDaestrutura = 0;

struct timeval{
    long int tv_sec; 
    long int tv_usec; 
};   
struct Algoritimo{
    char nome[40];
    int tamanho;
    float tempoTotal;
    float melhorCaso;
    float piorCaso;
};

struct Algoritimo Algoritimos[10]; 

void countingSort(int inputArray[], int numElementos) {
    // 1� Passo:
    // Encontrar o maior n�mero no array
    int maiorNumero = 0;
    for (int i = 0; i < numElementos; i++){
        if (inputArray[i] > maiorNumero){
            maiorNumero = inputArray[i];
        }
    }

    // 2� Passo:
    // Inicializar um array auxiliar, sendo que
    // o tamanho dele ser� igual ao MAIOR N�MERO
    // encontrado no array de input
    int* auxArray = (int*)calloc(maiorNumero + 1, sizeof(int));

    // 3� Passo:
    // Utilizaremos os �ndices do array auxiliar
    // para contabilizar a quantidade de apari��es
    // de cada n�mero no nosso array de input
    for (int i = 0; i < numElementos; i++){
        auxArray[inputArray[i]]++;
    }

    // 4� Passo:
    // Para cada index do array auxiliar
    // Calcularemos a soma acumulativa dos index anteriores
    // Ex: {0, 1, 4, 2, 0, 0, 1} -> {0, 1, 5, 7, 7, 7, 8}
    for (int i = 1; i <= maiorNumero; i++){
        auxArray[i] += auxArray[i - 1];
    }

    // 5� Passo:
    // Criamos o array de output, onde conter� os n�meros ordenados
    // Percorremos o array de input de tr�s para frente, garantindo
    // que elementos iguais mantenham a ordem original (estabilidade).
    // Cada n�mero � colocado na posi��o correta no array ordenado
    // e decrementamos o array auxiliar para os n�meros que j� foram processados
    int* arrayOrdenado = (int*)malloc(numElementos * sizeof(int));
    for (int i = numElementos - 1; i >= 0; i--){
        arrayOrdenado[auxArray[inputArray[i]] - 1] = inputArray[i];
        auxArray[inputArray[i]]--;
    }

    // 6� Passo:
    // Copiaremos os elementos do array ordenado para o array de input
    // Apenas faremos isso pois essa fun��o n�o retorna um novo array,
    // E sim ordena no pr�prio array que foi passado.
    for (int i = 0; i < numElementos; i++){
        inputArray[i] = arrayOrdenado[i];
    }

    // Liberando a mem�ria alocada
    free(auxArray);
    free(arrayOrdenado);
}


void mergesort(int *v, int inicio, int fim){
    int meio;
    if(inicio < fim){
        meio = (inicio + fim) / 2;
        mergesort(v, inicio, meio);
        mergesort(v, meio+1, fim);
        merge(v, inicio, meio, fim);
    }
}

void merge(int *v, int inicio, int meio, int fim){
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


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Fun��o para criar um Max-Heap
void maxHeapify(int arr[], int n, int i) {
    int largest = i; // Inicializa o maior como o n�
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

// Fun��o HeapSort usando Max-Heap (ordem crescente)
void heapSortAscending(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--)
        maxHeapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {
        swap(&arr[0], &arr[i]);
        maxHeapify(arr, i, 0);
    }
}

void ShellSort(int arr[], int tam) {
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


void salvaResultados(char nome[], int tamanho, double tempoTotal, double melhorCaso, double piorCaso){
    if (elementoDaestrutura >= 10) {
        printf("Limite de algoritmos atingido.\n");
        return -1;
    }

    strcpy(Algoritimos[elementoDaestrutura].nome, nome); 
    Algoritimos[elementoDaestrutura].tamanho = tamanho;
    Algoritimos[elementoDaestrutura].tempoTotal = tempoTotal;
    Algoritimos[elementoDaestrutura].melhorCaso = melhorCaso;
    Algoritimos[elementoDaestrutura].piorCaso = piorCaso;

    elementoDaestrutura++;
};

void exibeTodosOsAlgoritmos(){
    printf("Algoritmos Salvos:\n");
    for (int i = 0; i < 10; i++){
        printf("---------------ALGORITIMOS--------------------\n");
        exibirAlgoritmo(Algoritimos[i].nome, Algoritimos[i].tamanho, Algoritimos[i].tempoTotal, Algoritimos[i].melhorCaso, Algoritimos[i].piorCaso);
    }
};

double mediaTempo(int *v, int tamanho){

    double totalTempo = 0.0;

    for(int i = 0; i < tamanho; i++){
       totalTempo += v[i];
    }
    
    totalTempo = totalTempo / tamanho;

    return totalTempo;
}


