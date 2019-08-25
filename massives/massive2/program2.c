#include <stdio.h>

void arrayPrinting(char array[]);

int main()
{
	char words[500];
	int character, counter;
	int number;

	counter = 0;

	while ((character = getchar()) != EOF)	{
			words[counter] = character;
			counter = counter + 1;
	}

	for (number = 0; number <= counter; number++)
	{
		printf("%c", words[number]);
	}
}
