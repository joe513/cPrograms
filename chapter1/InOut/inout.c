#include <stdio.h>

/* Copying input stream into out stream */

int main()
{
	int c;

	c = getchar();
	while (c!=EOF)
	{
		putchar(c);
		c = getchar();
	}
}
