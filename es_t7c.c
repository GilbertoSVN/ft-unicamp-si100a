#include <stdio.h>

int main()
{
    char sPalavra[81], sPalindromo[81];
    int j, i = 0, k = 0;
    int iDif = 0;

    scanf("%[^\n]s", sPalavra);

    while(!(sPalavra[i] == '\0'))
    {
        if(sPalavra[i] < 91 && sPalavra[i] > 64)
            sPalavra[i] += 32;
        i++;
    }

    for(j = 0; j < i; j++)
        if(!(sPalavra[j] == 32))
        {
            sPalindromo[k] = sPalavra[j];
            k++;
        }
    sPalindromo[j] = '\0';

    for(j = 0; j < k / 2; j++)
        if(sPalindromo[j] != sPalindromo[k-1-j])
            iDif++;

    if(iDif == 0)
        printf("esta palavra e um palindromo\n");
    else
        printf("esta palavra nao e um palindromo\n");

    return 0;
}
