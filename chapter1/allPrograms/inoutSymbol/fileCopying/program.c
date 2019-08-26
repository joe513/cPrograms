#include <stdio.h>

//	Copying in-stream into out-stream

int main()
{
	int	character;

	character = getchar();
	while (character != EOF)	{
		putchar(character);
		character = getchar();
	}

}
