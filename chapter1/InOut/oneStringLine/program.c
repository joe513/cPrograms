#include <stdio.h>

int main()
{
	int character;

	while ((character = getchar()) != EOF)	{
		putchar(character);
		if (character == ' ')
			putchar('\n');
	}
}

