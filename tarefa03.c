#include <stdio.h>

int main()
{
    int mX[10][10];
    int i, j;
    int iNum, iOri, iDes, iAtual, iGulosa, iAux, iCAux, iAnterior;
    int iCaminho[10];

    iAux = 9999;
    iGulosa = 0;
    iAnterior = 9999;

    scanf("%d", &iNum);

    for(i = 0; i < iNum; i++)
        for(j = 0; j < iNum; j++)
            scanf("%d", &mX[i][j]);

    scanf("%d", &iOri);
    scanf("%d", &iDes);

    iAtual = iOri;
    i = 1;
    iCaminho[0] = iOri;

    while(iAtual != iDes)
    {
        for(j = 0; j < iNum; j++)
        {
            if(mX[iAtual][j] > 0 && j != iAnterior)
            {
                if(mX[iAtual][j] < iAux)
                {
                    iAux = mX[iAtual][j];
                    iCAux = j;
                }
            }
        }

        iGulosa += iAux;
        iAnterior = iAtual;
        iAtual = iCAux;
        iAux = 9999;
        iCaminho[i] = iAtual;
        i++;
    }

    printf("Menor distancia gulosa entre os nos %d e %d:: %d\n", iOri, iDes, iGulosa);
    printf("Caminho:: ");
    for(j = 0; j < i; j++)
    {
        printf("%d", iCaminho[j]);

        if(j != i - 1)
            printf("->");
    }
    printf("\n");

    return 0;
}
