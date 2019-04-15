#include <stdio.h>

int main()
{
    int iVetorA[10], iVetorB[10], iVetorI[20], i, j, k;

    j = 0;
    k = 0;

    for(i = 0; i < 10; i++)
        scanf("%d", &iVetorA[i]);

    for(i = 0; i < 10; i++)
        scanf("%d", &iVetorB[i]);

    for(i = 0; i < 20; i++)
        if(i % 2 == 0)
            iVetorI[i] = iVetorA[j++];
        else
            iVetorI[i] = iVetorB[k++];

    for(i = 0; i < 20; i++)
        printf("%d|", iVetorI[i]);

    printf("\n");

    return 0;
}
