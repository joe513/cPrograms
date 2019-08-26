#include <stdio.h>

int main()
{
	int	space, tab, newLine;
	int	character;

	space = tab = newLine = 0;

	while ((character = getchar()) != EOF)	{
		if (character == ' ')
			space++;
		if (character == '\t')
			tab++;
		if (character == '\n')
			newLine++;
	}

	printf("Spaces: %d \t Tabs: %d \t New lines: %d\n", space, tab, newLine);

}

