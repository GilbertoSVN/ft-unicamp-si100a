#include <stdio.h>
#include <math.h>

float media(float nA, float nB, char cTipo);

int main()
{
    float fA, fB;
    char cDig;

    scanf("%c", &cDig);
    fflush(stdin);

    scanf("%f %f", &fA, &fB);

    printf("%.3lf\n", media(fA, fB, cDig));

    return 0;
}

float media(float nA, float nB, char cTipo)
{
    if(cTipo == 'A')
    {
        return (nA + nB) / 2;
    }
    else
    {
        return sqrt(nA * nB);
    }
}
