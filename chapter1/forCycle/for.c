#include <stdio.h>

#define		LOWER	0	/* Lowest diapozon poit */
#define		UPPER	300	/* Upeest point */
#define		STEP	20	/* Step wide */

int main()
{
	int fahr;
	fahr = LOWER;

	for (printf("Hello world\n") ; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
}
