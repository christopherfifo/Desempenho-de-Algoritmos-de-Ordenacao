#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "algoOrdena.h"
#include "algoritmosOrdenacao.h"

int main()
{
    srand(time(NULL));

    int continuar = 1;
    while (continuar)
    {
        continuar = menuprincipal();
    }

    return 0;
}
