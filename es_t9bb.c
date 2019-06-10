#include <stdio.h>

void somaComplex(int a, int b, int c, int d, int *real, int *imag)
{
    *real = a + c;
    *imag = b + d;
}

void multComplex(int a, int b, int c, int d, int *real, int *imag)
{
    *real = (a * c) - (b * d);
    *imag = (a * d) + (b * c);

}

int main()
{

    char cOp;
    int a, b, x, z;

    scanf("%d %d %c %d %d", &a, &x, &cOp, &b, &z);

    switch(cOp)
    {
        case '+':
            somaComplex(a, x, b, z, &a, &x);
            break;
        case '*':
            multComplex(a, x, b, z, &a, &x);
            break;
        default:
            break;
    }

    printf("%d + %di\n", a, x);

    return 0;
}
