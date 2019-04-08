#include <stdio.h>

int main()
{
    int iN, iS, iNS, iResN, iResS, iResNS, i;

    scanf("%d", &iN);
    scanf("%d", &iS);

    iResN = 1;
    iResS = 1;
    iResNS = 1;

    iNS = iN - iS;

    while(iN > 1)
        iResN *= iN--;

    while(iS > 1)
        iResS *= iS--;

    while(iNS > 1)
        iResNS *= iNS--;

    printf("%.0f", (iResN / (float)(iResS*iResNS)));

return 0;
}
