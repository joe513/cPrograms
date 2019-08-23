#include <stdio.h>

float fromFahrToCelsius(float);


int main()
{
	float fahr;
	int lower, upper, step;

	lower = -200;
	upper = 500;
	step  = 20;

	fahr = lower;

	while(fahr <= upper)	{
		printf("%3.0f %6.1f\n", fahr, fromFahrToCelsius(fahr));
		fahr = fahr + step;
	}
}


float fromFahrToCelsius(float fahr)
{
	int fahrengate;

	fahrengate = fahr;

	return ((5.0 / 9.0) * (fahrengate - 32.0));
}
