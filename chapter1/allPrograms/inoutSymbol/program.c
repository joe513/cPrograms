#include <stdio.h>

#define		MAX_SYMBOLS	1000

int main()
{
	char	array[MAX_SYMBOLS];
	int	character, counter;

	for (counter = 0; (character = getchar()) != EOF; counter++)	{
		array[counter] = character;
	}

	for (counter = 0; counter <= MAX_SYMBOLS; counter++)
		putchar(array[counter]);
}
