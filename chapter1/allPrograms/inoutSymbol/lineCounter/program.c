#include <stdio.h>

int main()
{
	int	lineNumber, character;

	while ((character = getchar()) != EOF)	{
		if (character == '\n')
			lineNumber++;
	}
	printf("%d\n", lineNumber);
}
