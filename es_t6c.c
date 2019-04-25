/*
iLR = Linhas da matriz resultado | iCR = Colunas da matriz resultado
iLA = Linhas da matriz A         | iCA = Colunas da matriz A
iLB = Linhas da matriz B         | iCB = Colunas da matriz B

iMr = Matriz resultado | iMa = Matriz A | iMb = Matriz B
*/

#include <stdio.h>

int main()
{

    int l, c, l2, c2, iLR, iCR, iLA, iCA, iLB, iCB, iSum, iMa[20][20], iMb[20][20], iMr[20][20];

    iSum = 0;

    scanf("%d %d", &iLA, &iCA);
    scanf("%d %d", &iLB, &iCB);

    for(l = 0; l < iLA; l++)
        for(c = 0; c < iCA; c++)
            scanf("%d", &iMa[l][c]);

    for(l = 0; l < iLB; l++)
        for(c = 0; c < iCB; c++)
            scanf("%d", &iMb[l][c]);

    if(iCA != iLB)
        printf("As dimensoes das duas matrizes nao permitem a multiplicacao\n");
    else
    {
        iLR = 0;
        //Calculando matriz multiplicação de mA e mB
        for(l = 0; l < iLA; l++) //Anda linhas da matriz A
        {
            iCR = 0;
            for(c2 = 0; c2 < iCB; c2++) //Anda colunas da matriz B
            {
                iSum = 0;
                for(c = 0; c < iCA; c++) //Colunas da A andam juntas com colunas da B
                {
                    l2 = c;
                    iSum = iSum + iMa[l][c] * iMb[l2][c2];
                }
                iMr[iLR][iCR] = iSum;
                iCR++;
            }
            iLR++;
        }

        for(iLR = 0; iLR < iLA; iLR++) //Imprime a matriz resultado
            for(iCR = 0; iCR < iCB; iCR++)
            {
                printf("%d", iMr[iLR][iCR]);
                if(iCR == iCB - 1)
                    printf("\n");
                else
                    printf(" ");
            }
    }
    return 0;
}
