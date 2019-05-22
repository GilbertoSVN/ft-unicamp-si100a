#include <stdio.h>

typedef struct Ponto {
    int X;
    int Y;
} Ponto;

typedef struct Retangulo {
    Ponto infE;
    Ponto supD;
} Ret;

int main()
{
    int X, Y;
    Ponto pA, pB;
    Ret rA, rB;

    scanf("%d %d", &X, &Y);
    pA.X = X;
    pA.Y = Y;

    rA.infE = pA;

    scanf("%d %d", &X, &Y);
    pB.X = X;
    pB.Y = Y;

    rA.supD = pB;

    scanf("%d %d", &X, &Y);
    pA.X = X;
    pA.Y = Y;

    rB.infE = pA;

    scanf("%d %d", &X, &Y);
    pB.X = X;
    pB.Y = Y;

    rB.supD = pB;

    if(rB.infE.X >= rA.infE.X && rB.infE.X <= rA.supD.X && rB.infE.Y >= rA.infE.Y && rB.infE.Y <= rA.supD.Y)
    {
        printf("o segundo retangulo esta contido no primeiro\n");
    }
    else
    {
        printf("o segundo retangulo nao esta contido no primeiro\n");
    }

    return 0;
}
