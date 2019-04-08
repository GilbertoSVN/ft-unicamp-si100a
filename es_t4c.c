#include <stdio.h>

int main()
{

    int i, iPar, iImpar, iNumero;

    iPar = 0;
    iImpar = 0;

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &iNumero);

        if(iNumero % 2 == 0)
            iPar++;
        else
            iImpar++;
    }

    printf("%d pares, %d impares\n", iPar, iImpar);

    return 0;
}
