#include <stdio.h>

int main()
{
    int iDia, iMes, iAno;

    scanf("%d/%d/%d", &iDia, &iMes, &iAno);

    switch(iMes)
    {
        case 1:
            printf("%d de janeiro de %d", iDia, iAno);
            break;
        case 2:
            printf("%d de fevereiro de %d", iDia, iAno);
            break;
        case 3:
            printf("%d de marco de %d", iDia, iAno);
            break;
        case 4:
            printf("%d de abril de %d", iDia, iAno);
            break;
        case 5:
            printf("%d de maio de %d", iDia, iAno);
            break;
        case 6:
            printf("%d de junho de %d", iDia, iAno);
            break;
        case 7:
            printf("%d de julho de %d", iDia, iAno);
            break;
        case 8:
            printf("%d de agosto de %d", iDia, iAno);
            break;
        case 9:
            printf("%d de setembro de %d", iDia, iAno);
            break;
        case 10:
            printf("%d de outubro de %d", iDia, iAno);
            break;
        case 11:
            printf("%d de novembro de %d", iDia, iAno);
            break;
        case 12:
            printf("%d de dezembro de %d", iDia, iAno);
            break;
        default:
            printf("mes invalido");
    }

    return 0;
}
