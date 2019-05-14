#include <stdio.h>

int main()
{
    char sPalavra[81];
    char sClone[81];
    int j, i = 0;

    scanf("%[^\n]s", sPalavra);

    while(!(sPalavra[i] == '\0'))
    {
        i++;
    }

    for(j = 0; j < i; j++)
    {
        sClone[j] = sPalavra[i-1-j];
    }

    sClone[i] = '\0';

    printf("%s\n", sClone);

    return 0;
}
