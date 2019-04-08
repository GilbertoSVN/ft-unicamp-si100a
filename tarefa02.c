#include <stdio.h>

int main()
{

    int i, j, iN, iDivisores, iPrimos = 0, iPares = 0, iImpares = 0;

    scanf("%d", &iN);

    for(i = iN - 1; i > 1; i--)
    {
        iDivisores = 0;

        if(i % 2 == 0)
        {
            if(i == 2)
                iPrimos += i;
            else
                iPares += i;
        }
        else
        {
            for(j = (i / 2); j > 1; j--)
                if(i % j == 0)
                {
                    iDivisores++;
                }

            if(iDivisores > 0)
            {
           //     printf("%d\n", iImpares);
                iImpares += i;
            }
            else
                iPrimos += i;
        }
    }

    printf("%d %d %d\n", iPares, iImpares, iPrimos);

    return 0;
}
