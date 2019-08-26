#include <stdio.h>

int main()
{
	int	character;

	while ((character = getchar()) != EOF)	{

		if (character == '\t')
			printf("\\t");
		else if (character == '\b')
			printf("\\b");
		else if (character == '\\')
			printf("\\");

		if (character != '\t' && character != '\b' && character != '\b'\
		&& character != '\\')
			putchar(character);
	}

	return 1;
}
