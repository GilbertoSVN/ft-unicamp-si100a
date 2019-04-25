#include <stdio.h>

int main()
{

    int l, c, NUM_LIN, NUM_COL, iM[20][20];

    scanf("%d %d", &NUM_LIN, &NUM_COL);

    for(l = 0; l < NUM_LIN; l++)
        for(c = 0; c < NUM_COL; c++)
            scanf("%d", &iM[l][c]);

    for(c = 0; c < NUM_COL; c++)
    {
        for(l = 0; l < NUM_LIN; l++)
        {
            printf("%d", iM[l][c]);
            if(l == NUM_LIN - 1)
                printf("\n");
            else
                printf(" ");
        }
    }

    printf("\n");

    return 0;
}
