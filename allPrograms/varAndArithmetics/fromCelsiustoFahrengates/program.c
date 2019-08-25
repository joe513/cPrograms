#include <stdio.h>

int main()
{
	float	fahrengate, celsius;
	int	lowest, highest, step;

	lowest = 0; highest = 100; step = 10;

	celsius = lowest;

	while (celsius <= highest)	{
		fahrengate = (celsius * 1.8 + 32);
		printf("\tCelsius: \tFahrengate:");
}
