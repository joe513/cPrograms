#include <stdio.h>

/*
	This program changes several spaces for one space
*/

int main()
{
	int	character, yesSpaceWas = 0;

	while ((character = getchar()) != EOF)	{
		if (character == ' ')	{
			(yesSpaceWas == 1) ?  : putchar(' ');
			yesSpaceWas = 1;
		}
		else	{
			yesSpaceWas = 0;
			putchar(character);
		}

	}
}
