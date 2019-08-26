#include <stdio.h>

#define		LOWEST	0
#define		HIGHEST	300
#define		STEP	10

int main()
{
	float	fahrengate;

	for (fahrengate = LOWEST, printf("\t\tFahrengate: \t\tCelsius: \n"); fahrengate <= HIGHEST; fahrengate = fahrengate + STEP)
		printf("%5.2f\t %5.2f\n", fahrengate, ((fahrengate - 32) / 1.8));
}
