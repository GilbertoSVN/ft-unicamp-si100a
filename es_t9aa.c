#include <stdio.h>

#define PI 3.14159

double volume_esfera(double raio)
{
    return (4 * PI * raio * raio * raio) / 3;
}

int main()
{
    double dRaio;

    scanf("%lf", &dRaio);
    printf("%.2lf\n", volume_esfera(dRaio));

    return 0;
}
