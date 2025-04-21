adicionei essas funções

# algoOrdena.h

void exibirAlgoritmo(char nome[], int tamanho, double tempoTotal, double melhorCaso, double piorCaso);
void exibeTodosOsAlgoritmos();

# algoritimosOrdenacao.h

char criaVetor(int tamanho);
double mediaTempo(int *v, int tamanho);

void salvaResultados( char nome[], int tamanho, double tempoTotal, double melhorCaso, double piorCaso);

# algoOrdena.c

void exibirAlgoritmo(char nome[], int tamanho, double tempoTotal, double melhorCaso, double piorCaso){
    printf("\n--------------------------------------------------\n");
    printf("Algoritmo: %s\n", nome);
    printf("Tamanho: %d\n", tamanho);
    printf("Tempo Total: %.2f ms\n", tempoTotal);
    printf("Melhor Caso: %.2f ms\n", melhorCaso);
    printf("Pior Caso: %.2f ms\n", piorCaso);
    printf("\n");
};

algoritimosOrdenacao.c

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

## obs: caso queira passar a função de exibir todos para o arquvio ``algoOrdena.c`` devera criar uma função no arquivo ``algoritimosOrdenacao.c`` para retornar o array de struct ou criar esse array no main e modificar todas as funções para recerber o vetor

commit: christopher 19/04/2025 - 18:40


    case 1:{
        for(int i = 0; i < 10000; i++){
        char *vetor = criaVetor(10000);
        if(vetor == NULL) {
            printf("Erro ao alocar memória\n");
            return;
        }
        printf("\nVetor de 10.000 elementos:\n");

        imprimirVetor(vetor, 10000);
        printf("\n\n");

        bubbleSort(vetor, 10000);
        liberarVetor(vetor, 10000);
        }
    }
    break;
    case 2:{
        for(int i = 0; i < 50000; i++){
        char *vetor = criaVetor(50000);
        if(vetor == NULL) {
            printf("Erro ao alocar memória\n");
            return;
        }
        printf("\nVetor de 50.000 elementos:\n");

        imprimirVetor(vetor, 50000);
        printf("\n\n");

        bubbleSort(vetor, 50000);
        liberarVetor(vetor, 50000);
        }
    }
    break;