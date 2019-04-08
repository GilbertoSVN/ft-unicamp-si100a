#include <stdio.h>

int main()
{
    int iVar = 0;

    scanf("%d", &iVar);

    if(iVar % 2 == 0)
        printf("par\n");
    else
        printf("impar\n");

    return 0;
}
