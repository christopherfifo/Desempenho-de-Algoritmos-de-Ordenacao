#include <stdio.h>
#include <stdlib.h>
#include "algoritmosOrdenacao.h"

void countingSort(int inputArray[], int numElementos) {
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




