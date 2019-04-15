#include <stdio.h>

int main()
{
    float fValor[10];
    int iVendas[10];
    int iTotalVendas, i;
    float fTotalValor;

    iTotalVendas = 0;
    fTotalValor = 0.0;

    for(i = 0; i < 10; i++)
        scanf("%d", &iVendas[i]);

    for(i = 0; i < 10; i++)
        scanf("%f", &fValor[i]);

    for(i = 0; i < 10; i++)
    {
        iTotalVendas += iVendas[i];
        fTotalValor = fTotalValor + (iVendas[i] * fValor[i]);
    }

    printf("o lucro foi de %.3f e a quantidade de produtos vendidos foi de %d\n", fTotalValor, iTotalVendas);


    return 0;
}
