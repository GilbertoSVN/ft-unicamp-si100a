#include <stdio.h>

typedef struct corpo {
    float altura;
    float peso;
    char nome[81];
} Corpo;

int main()
{
    Corpo cA;

    scanf("%f", &cA.altura);
    scanf("%f", &cA.peso);
    scanf("%s", cA.nome);

    printf("%.3f\n", cA.peso / (cA.altura * cA.altura));

    return 0;
}
