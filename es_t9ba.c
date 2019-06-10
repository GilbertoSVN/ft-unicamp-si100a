#include <stdio.h>
#include <math.h>

void calcCuboVetor(int total, int *v)
{
    int i;
    for(i = 0; i < total; i++)
    {
        printf("%.0lf\n", pow(v[i], 3));
    }
}

int main()
{

    int iVet[10];
    int i;

    for(i = 0; i < 10; i++)
    {
        scanf("%d", &iVet[i]);
    }

    calcCuboVetor(i, iVet);

    return 0;
}
