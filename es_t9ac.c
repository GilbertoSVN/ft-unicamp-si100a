#include <stdio.h>
#include <math.h>

float soma(float nA, float nB);
float subtracao(float nA, float nB);
float multiplicacao(float nA, float nB);
float divisao(float nA, float nB);
float potencia(float nA, float nB);
void calculadoraSemSentido();

int main()
{
    float fA, fB;
    char cDig;

    scanf("%f%c%f", &fA, &cDig, &fB);

    switch(cDig)
    {
        case '+':
            printf("%.3f\n", soma(fA, fB));
            break;
        case '-':
            printf("%.3f\n", subtracao(fA, fB));
            break;
        case '*':
            printf("%.3f\n", multiplicacao(fA, fB));
            break;
        case '/':
            printf("%.3f\n", divisao(fA, fB));
            break;
        case '^':
            printf("%.3f\n", potencia(fA, fB));
            break;
        default:
            break;
    }

    return 0;
}

float soma(float nA, float nB)
{
    return nA + nB;
}

float subtracao(float nA, float nB)
{
    return nA - nB;
}

float multiplicacao(float nA, float nB)
{
    return nA *  nB;
}

float divisao(float nA, float nB)
{
    return nA / nB;
}

float potencia(float nA, float nB)
{
    return pow(nA, nB);
}
