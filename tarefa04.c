#include <stdio.h>
#include <string.h>

int main()
{
	int cases, forward, letter, i, j;
	char word[50];

	scanf("%d", &cases);

	for(i = 0; i < cases; i++)
	{
		scanf("%s %d", word, &forward);

		for(j = 0; j < strlen(word); j++)
		{
			letter = word[j];
			if(letter - forward >= 65)
				word[j] = word[j] - forward;
			else
				word[j] = word[j] + 26 - forward;
		}
		printf("%s\n", word);
	}

	return 0;
}
