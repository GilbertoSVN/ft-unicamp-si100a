#include <stdio.h>

int main()
{
    int iCount = 0;
    int iExiste[20];
    float iTeste[20];
    float iNotas[20];
    int i, j;

    for(i = 0; i < 20; i++)
        scanf("%f", &iNotas[i]);

    for(i = 0; i < 20; i++)
    {
        scanf("%f", &iTeste[i]);

        if(iTeste[i] < 0)
            break;

    }

    iCount = i;

    for(i = 0; i < iCount; i++)
    {
        iExiste[i] = 0;
        for(j = 0; j < 20; j++)
            if(iTeste[i] == iNotas[j])
            {
                iExiste[i] = 1;
                break;
            }
    }

    for(i = 0; i < iCount; i++)
        if(iExiste[i] == 1)
            printf("existe\n");
        else
            printf("nao existe\n");

    return 0;
}
