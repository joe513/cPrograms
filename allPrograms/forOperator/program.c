#include <stdio.h>

// Printing celsius and fahgrengate temperature
int main()
{
	float	fahrengate;
	int	lowest, highest, step;

//	Customisization of the program.
	lowest = 0; highest = 100; step = 5;

	printf("\t\tFahrengate: \t\tCelsius:\n");

	for (fahrengate = lowest; fahrengate <= highest; fahrengate= fahrengate + step)
		printf("\t\t\t%5.2f\t\t\t%5.2f\n", fahrengate, ((fahrengate - 32) / 1.8));
}
