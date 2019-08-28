#include <stdio.h>

#define		IN	1	/* In the word */
#define		OUT	0	/* Out of the word */

int main()
{
	int	character, newWordCounter, newLineCounter, newCharacterCounter, state;

	state = OUT;
	newWordCounter = 0; newCharacterCounter = 0;
	newLineCounter = 0;

	while ((character = getchar()) != EOF)
		++newCharacterCounter;

		if (character == '\n')
			newLineCounter = newLineCounter + 1;

		if (character == ' ' || character == '\n'   \
		|| character == '\t')
			state = OUT;

		else if (state = OUT)	{
			state = IN;
			++newWordCounter;
	}
	printf("Line Number: %d \tWord Number: %d Character nubmer: %d\n", newLineCounter, newWordCounter, newCharacterCounter);
}
