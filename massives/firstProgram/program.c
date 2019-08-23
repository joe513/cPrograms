#include <stdio.h>

#define		IN	1
#define		OUT	0

int main()
{
	int wordNumber;
	int charNumber[10000000];
	int character;

	i = 0;

	while ((character = getchar()) != EOF)
		if (character != ' ')	{
			i++;
			charNumber[i] = charNumber[i] + 1;
		}
		if (character == ' ')	{
			wordNumber = wordNumber +1;
		}
}

