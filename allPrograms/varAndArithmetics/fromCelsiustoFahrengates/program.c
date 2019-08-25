#include <stdio.h>

int main()
{
	float	fahrengate, celsius;
	int	lowest, highest, step;

	lowest = 0; highest = 100; step = 5;

	celsius = lowest;

	printf("\tCelsius: \tFahrengate:\n");
	while (celsius <= highest)	{
		fahrengate = (celsius * 1.8 + 32);
		printf("\t\t%5.2f\t\t%5.2f\n", celsius, fahrengate);
		celsius = celsius + step;
	}
}
