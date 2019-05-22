#include <stdio.h>
#include <math.h>

typedef struct Ponto {
    float X;
    float Y;
} Ponto;

int main()
{
    float X, Y, fDist;
    Ponto A, B;

    scanf("%f %f", &X, &Y);
    A.X = X;
    A.Y = Y;

    scanf("%f %f", &X, &Y);
    B.X = X;
    B.Y = Y;

    fDist = sqrt(pow(A.X - B.X, 2) + pow(A.Y - B.Y, 2));

    if(fDist < 0.0000001)
    {
        printf("os pontos sao iguais\n");
    }
    else
    {
        printf("os pontos nao sao iguais");
    }

    return 0;
}
