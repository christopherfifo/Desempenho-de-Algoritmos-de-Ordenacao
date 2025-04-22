#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "algoOrdena.h"
#include "algoritmosOrdenacao.h"

int main()
{
    srand(time(NULL));

    int continuar = 1;
    while (continuar == 1)
    {
        continuar = menuprincipal();
        printf("\n deseja continuar? 1-sim 0-nao: ");
        scanf("%d", &continuar);
    }

    return 0;
}
