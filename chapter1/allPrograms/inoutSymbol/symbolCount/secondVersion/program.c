#include <stdio.h>

int main()
{
	double characterNumber;

	for (characterNumber; getchar() != EOF; ++characterNumber)
		;
	printf("%.0f\n", characterNumber);
}
