#include <stdio.h>

int main()
{
	float	fahrengate, celsius;
	int	highest, lowest, step;

	highest = 100; lowest = 0; step = 10;
	fahrengate = lowest;

	printf("Fahrengate:\t Celsius:\n");

	while (fahrengate <= highest)	{
		celsius = ((fahrengate - 32) / 1,8);
		printf("%15.1f\t%15.1f\n", fahrengate, celsius);
		fahrengate = fahrengate + step;
	}
}
