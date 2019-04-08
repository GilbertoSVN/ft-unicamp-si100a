#include <stdio.h>

int main()
{
    char cOp;
    float fNum1, fNum2, fRes;

    scanf("%f%c%f", &fNum1, &cOp, &fNum2);

    switch(cOp)
    {
        case '+':
            fRes = fNum1 + fNum2;
            break;
        case '-':
            fRes = fNum1 - fNum2;
            break;
        case '/':
            if(fNum2 == 0)
                printf("numero invalido");
            else
                fRes = fNum1 / fNum2;
            break;
        case '*':
            fRes = fNum1 * fNum2;
            break;
        default:
            printf("Operador invalido");
            return 0;
    }

    printf("%.3f%c%.3f=%.3f", fNum1, cOp, fNum2, fRes);

 return 0;
}
