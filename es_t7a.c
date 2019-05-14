#include <stdio.h>

int main()
{
    char sPalavra[81];
    int i = 0;

    scanf("%[^\n]s", sPalavra);

    while(!(sPalavra[i] == '\0'))
    {
        i++;
    }

    printf("%d", i);

    return 0;
}
