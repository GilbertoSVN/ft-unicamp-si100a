#include <stdio.h>

int main()
{

    int l, c, v, NUM_LIN, NUM_COL, iM[20][20], iV[40];

    v = 0;

    scanf("%d %d", &NUM_LIN, &NUM_COL);

    for(l = 0; l < NUM_LIN; l++)
        for(c = 0; c < NUM_COL; c++)
            scanf("%d", &iM[l][c]);

    for(l = 0; l < NUM_LIN; l++)
        for(c = 0; c < NUM_COL; c++)
        {
            iV[v++] = iM[l][c];
        }

    for(l = 0; l < v; l++)
    {
        printf("%d", iV[l]);
        if(l == v - 1)
            printf("\n");
        else
            printf(" ");
    }

    return 0;
}
