#include <stdio.h>

void buscaNumero(int *v, int *maior, int *menor, int tamanho)
{
    int auxA, auxB, i;

    if(tamanho > 1)
    {
        auxA = v[0];
        auxB = auxA;

        for(i = 1; i < tamanho; i++)
        {
            if(v[i] < auxA)
                auxA = v[i];

            if(v[i] > auxB)
                auxB = v[i];
        }

        *maior = auxB;
        *menor = auxA;
    }
    else
    {
        *maior = 0;
        *menor = 0;
    }
}

int main()
{

    int maior, menor;
    int *iVet;
    int iTam, i;

    scanf("%d", &iTam);

    iVet = (int *)malloc(iTam * sizeof(int));

    for(i = 0; i < iTam; i++)
        scanf("%d", &iVet[i]);

    buscaNumero(iVet, &maior, &menor, iTam);

    printf("maior valor: %d\nmenor valor: %d\n", maior, menor);

    return 0;
}
