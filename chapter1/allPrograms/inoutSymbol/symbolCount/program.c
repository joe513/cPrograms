#include <stdio.h>

int main()
{
	int	wordCharacter;

	while (getchar() != EOF)
		wordCharacter++;
	printf("%d\n", wordCharacter);
}
