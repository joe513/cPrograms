#include <stdio.h>

int main()
{
	int spacesNumber, symbol;
	spacesNumber = 0;

	while ((symbol = getchar()) != EOF)
	{
		if (symbol == ' ')
			++spacesNumber;
	}
	printf("\nThe number of spaces is %d\n", spacesNumber);

}

